/* Eduardo: testing payflow_map.
 * */

#include "config.h"
#include <ccan/array_size/array_size.h>
#include <ccan/read_write_all/read_write_all.h>
#include <common/bigsize.h>
#include <common/channel_id.h>
#include <common/gossip_store.h>
#include <common/node_id.h>
#include <common/setup.h>
#include <common/type_to_string.h>
#include <common/wireaddr.h>
#include <stdio.h>
#include <assert.h>

#include <bitcoin/short_channel_id.h>
#include <ccan/htable/htable_type.h>

#define RENEPAY_UNITTEST
#include <plugins/renepay/pay_flow.h>

static void destroy_payflow(
		struct pay_flow *p,
		struct payflow_map * map)
{
	printf("calling %s with  %s\n",
		__PRETTY_FUNCTION__,
		fmt_payflow_key(tmpctx,&p->key));
	payflow_map_del(map, p);
}
static struct pay_flow* new_payflow(
		const tal_t *ctx,
		struct sha256 * payment_hash,
		u64 gid,
		u64 pid)
{
	struct pay_flow *p = tal(ctx,struct pay_flow);

	p->payment=NULL;
	p->key.payment_hash=payment_hash;
	p->key.groupid = gid;
	p->key.partid = pid;

	return p;
}

static void valgrind_ok1(void)
{
	const char seed[] = "seed";
	struct sha256 hash;

	sha256(&hash,seed,sizeof(seed));

	tal_t *this_ctx = tal(tmpctx,tal_t);

	struct payflow_map *map
		= tal(this_ctx, struct payflow_map);

	payflow_map_init(map);

	{
		tal_t *local_ctx = tal(this_ctx,tal_t);

		struct pay_flow *p1 = new_payflow(local_ctx,
						  &hash,1,1);
		struct pay_flow *p2 = new_payflow(local_ctx,
						  &hash,2,3);

		printf("key1 = %s\n",fmt_payflow_key(local_ctx,&p1->key));
		printf("key1 = %s\n",fmt_payflow_key(local_ctx,&p2->key));
		printf("key hash 1 = %ld\n",payflow_key_hash(p1->key));
		printf("key hash 2 = %ld\n",payflow_key_hash(p2->key));

		payflow_map_add(map,p1); tal_add_destructor2(p1,destroy_payflow,map);
		payflow_map_add(map,p2); tal_add_destructor2(p2,destroy_payflow,map);

		struct pay_flow *q1 = payflow_map_get(map,payflow_key(&hash,1,1));
		struct pay_flow *q2 = payflow_map_get(map,payflow_key(&hash,2,3));

		assert(payflow_key_hash(q1->key)==payflow_key_hash(p1->key));
		assert(payflow_key_hash(q2->key)==payflow_key_hash(p2->key));

		tal_free(local_ctx);
	}

	tal_free(this_ctx);

}
int main(int argc, char *argv[])
{
	common_setup(argv[0]);
	valgrind_ok1();
	common_shutdown();
}

