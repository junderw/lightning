#include "config.h"
#include "../bech32_util.c"
#include "../bech32.c"
#include "../codex32.c"
#include "../json_parse.c"
#include "../json_parse_simple.c"
#include <ccan/array_size/array_size.h>
#include <common/codex32.h>
#include <ccan/tal/grab_file/grab_file.h>
#include <ccan/tal/path/path.h>
#include <common/setup.h>

/* AUTOGENERATED MOCKS START */
/* Generated stub for amount_asset_is_main */
bool amount_asset_is_main(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_is_main called!\n"); abort(); }
/* Generated stub for amount_asset_to_sat */
struct amount_sat amount_asset_to_sat(struct amount_asset *asset UNNEEDED)
{ fprintf(stderr, "amount_asset_to_sat called!\n"); abort(); }
/* Generated stub for amount_sat */
struct amount_sat amount_sat(u64 satoshis UNNEEDED)
{ fprintf(stderr, "amount_sat called!\n"); abort(); }
/* Generated stub for amount_sat_add */
 bool amount_sat_add(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_add called!\n"); abort(); }
/* Generated stub for amount_sat_div */
struct amount_sat amount_sat_div(struct amount_sat sat UNNEEDED, u64 div UNNEEDED)
{ fprintf(stderr, "amount_sat_div called!\n"); abort(); }
/* Generated stub for amount_sat_eq */
bool amount_sat_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_eq called!\n"); abort(); }
/* Generated stub for amount_sat_greater_eq */
bool amount_sat_greater_eq(struct amount_sat a UNNEEDED, struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_greater_eq called!\n"); abort(); }
/* Generated stub for amount_sat_mul */
bool amount_sat_mul(struct amount_sat *res UNNEEDED, struct amount_sat sat UNNEEDED, u64 mul UNNEEDED)
{ fprintf(stderr, "amount_sat_mul called!\n"); abort(); }
/* Generated stub for amount_sat_sub */
 bool amount_sat_sub(struct amount_sat *val UNNEEDED,
				       struct amount_sat a UNNEEDED,
				       struct amount_sat b UNNEEDED)
{ fprintf(stderr, "amount_sat_sub called!\n"); abort(); }
/* Generated stub for amount_sat_to_asset */
struct amount_asset amount_sat_to_asset(struct amount_sat *sat UNNEEDED, const u8 *asset UNNEEDED)
{ fprintf(stderr, "amount_sat_to_asset called!\n"); abort(); }
/* Generated stub for amount_tx_fee */
struct amount_sat amount_tx_fee(u32 fee_per_kw UNNEEDED, size_t weight UNNEEDED)
{ fprintf(stderr, "amount_tx_fee called!\n"); abort(); }
/* Generated stub for fromwire */
const u8 *fromwire(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, void *copy UNNEEDED, size_t n UNNEEDED)
{ fprintf(stderr, "fromwire called!\n"); abort(); }
/* Generated stub for fromwire_bool */
bool fromwire_bool(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_bool called!\n"); abort(); }
/* Generated stub for fromwire_fail */
void *fromwire_fail(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_fail called!\n"); abort(); }
/* Generated stub for fromwire_secp256k1_ecdsa_signature */
void fromwire_secp256k1_ecdsa_signature(const u8 **cursor UNNEEDED, size_t *max UNNEEDED,
					secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "fromwire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for fromwire_sha256 */
void fromwire_sha256(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "fromwire_sha256 called!\n"); abort(); }
/* Generated stub for fromwire_tal_arrn */
u8 *fromwire_tal_arrn(const tal_t *ctx UNNEEDED,
		       const u8 **cursor UNNEEDED, size_t *max UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_tal_arrn called!\n"); abort(); }
/* Generated stub for fromwire_u32 */
u32 fromwire_u32(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u32 called!\n"); abort(); }
/* Generated stub for fromwire_u64 */
u64 fromwire_u64(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u64 called!\n"); abort(); }
/* Generated stub for fromwire_u8 */
u8 fromwire_u8(const u8 **cursor UNNEEDED, size_t *max UNNEEDED)
{ fprintf(stderr, "fromwire_u8 called!\n"); abort(); }
/* Generated stub for fromwire_u8_array */
void fromwire_u8_array(const u8 **cursor UNNEEDED, size_t *max UNNEEDED, u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "fromwire_u8_array called!\n"); abort(); }
/* Generated stub for mvt_tag_str */
const char *mvt_tag_str(enum mvt_tag tag UNNEEDED)
{ fprintf(stderr, "mvt_tag_str called!\n"); abort(); }
/* Generated stub for node_id_from_hexstr */
bool node_id_from_hexstr(const char *str UNNEEDED, size_t slen UNNEEDED, struct node_id *id UNNEEDED)
{ fprintf(stderr, "node_id_from_hexstr called!\n"); abort(); }
/* Generated stub for parse_amount_msat */
bool parse_amount_msat(struct amount_msat *msat UNNEEDED, const char *s UNNEEDED, size_t slen UNNEEDED)
{ fprintf(stderr, "parse_amount_msat called!\n"); abort(); }
/* Generated stub for parse_amount_sat */
bool parse_amount_sat(struct amount_sat *sat UNNEEDED, const char *s UNNEEDED, size_t slen UNNEEDED)
{ fprintf(stderr, "parse_amount_sat called!\n"); abort(); }
/* Generated stub for towire */
void towire(u8 **pptr UNNEEDED, const void *data UNNEEDED, size_t len UNNEEDED)
{ fprintf(stderr, "towire called!\n"); abort(); }
/* Generated stub for towire_bool */
void towire_bool(u8 **pptr UNNEEDED, bool v UNNEEDED)
{ fprintf(stderr, "towire_bool called!\n"); abort(); }
/* Generated stub for towire_secp256k1_ecdsa_signature */
void towire_secp256k1_ecdsa_signature(u8 **pptr UNNEEDED,
			      const secp256k1_ecdsa_signature *signature UNNEEDED)
{ fprintf(stderr, "towire_secp256k1_ecdsa_signature called!\n"); abort(); }
/* Generated stub for towire_sha256 */
void towire_sha256(u8 **pptr UNNEEDED, const struct sha256 *sha256 UNNEEDED)
{ fprintf(stderr, "towire_sha256 called!\n"); abort(); }
/* Generated stub for towire_u32 */
void towire_u32(u8 **pptr UNNEEDED, u32 v UNNEEDED)
{ fprintf(stderr, "towire_u32 called!\n"); abort(); }
/* Generated stub for towire_u64 */
void towire_u64(u8 **pptr UNNEEDED, u64 v UNNEEDED)
{ fprintf(stderr, "towire_u64 called!\n"); abort(); }
/* Generated stub for towire_u8 */
void towire_u8(u8 **pptr UNNEEDED, u8 v UNNEEDED)
{ fprintf(stderr, "towire_u8 called!\n"); abort(); }
/* Generated stub for towire_u8_array */
void towire_u8_array(u8 **pptr UNNEEDED, const u8 *arr UNNEEDED, size_t num UNNEEDED)
{ fprintf(stderr, "towire_u8_array called!\n"); abort(); }
/* AUTOGENERATED MOCKS END */

/* Print the "cl" variant of the vector */
static void print_cl_vec(const char *desc, const struct codex32 *parts)
{
	const char *err;
	char *bip93;

	err = codex32_secret_encode(tmpctx, "cl", parts->id, parts->threshold,
				    parts->payload, tal_bytelen(parts->payload),
				    &bip93);
	assert(!err);
	printf("%s: %s\n", desc, bip93);
}

int main(int argc, char *argv[])
{
	common_setup(argv[0]);
	char *fail, *c;
	struct codex32 *parts;

	/* Test vector for codex32_secret_encode*/
	u8 seed_b[32] = {
            0xff, 0xee, 0xdd, 0xcc, 0xbb, 0xaa, 0x99, 0x88,
            0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00,
            0xff, 0xee, 0xdd, 0xcc, 0xbb, 0xaa, 0x99, 0x88,
            0x77, 0x66, 0x55, 0x44, 0x33, 0x22, 0x11, 0x00,
	};

	assert(codex32_secret_encode(tmpctx, "ms", "leet", 0, seed_b, ARRAY_SIZE(seed_b), &c) == NULL);
	assert(streq(c,
		     "ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqqtum9pgv99ycma"));

	/*
	 * Test vector 1
	 *
	 * This example shows the codex32 format, when used without splitting the secret into any shares. The payload contains 26 bech32 characters, which corresponds to 130 bits. We truncate the last two bits in order to obtain a 128-bit master seed.
	 *
	 * codex32 secret (bech32): ms10testsxxxxxxxxxxxxxxxxxxxxxxxxxx4nzvca9cmczlw
	 *
	 * Master secret (hex): 318c6318c6318c6318c6318c6318c631
	 *
	 * * human-readable part: ms
	 * * separator: 1
	 * * k value: 0 (no secret splitting)
	 * * identifier: test
	 * * share index: s (the secret)
	 * * payload: xxxxxxxxxxxxxxxxxxxxxxxxxx
	 * * checksum: 4nzvca9cmczlw
	 * * master node xprv: xprv9s21ZrQH143K3taPNekMd9oV5K6szJ8ND7vVh6fxicRUMDcChr3bFFzuxY8qP3xFFBL6DWc2uEYCfBFZ2nFWbAqKPhtCLRjgv78EZJDEfpL
	 */

	parts = codex32_decode(tmpctx, NULL, "ms10testsxxxxxxxxxxxxxxxxxxxxxxxxxx4nzvca9cmczlw", &fail);
	if (parts) {
		assert(streq(parts->hrp, "ms"));
		assert(parts->threshold == 0);
		assert(strcmp(parts->id,"test") == 0);
		assert(parts->share_idx == 's');
		assert(streq(tal_hexstr(tmpctx, parts->payload, tal_bytelen(parts->payload)),
								"318c6318c6318c6318c6318c6318c631"));
		print_cl_vec("Test vector 1", parts);
	} else {
		abort();
	}
	tal_free(parts);

	/*
	 * Test vector 2
	 * This example shows generating a new master seed using "random" codex32 shares, as well as deriving an additional codex32 share, using k=2 and an identifier of NAME. Although codex32 strings are canonically all lowercase, it's also valid to use all uppercase.
	 *
	 * Share with index A: MS12NAMEA320ZYXWVUTSRQPNMLKJHGFEDCAXRPP870HKKQRM
	 *
	 * Share with index C: MS12NAMECACDEFGHJKLMNPQRSTUVWXYZ023FTR2GDZMPY6PN
	 *
	 * * Derived share with index D: MS12NAMEDLL4F8JLH4E5VDVULDLFXU2JHDNLSM97XVENRXEG
	 * * Secret share with index S: MS12NAMES6XQGUZTTXKEQNJSJZV4JV3NZ5K3KWGSPHUH6EVW
	 * * Master secret (hex): d1808e096b35b209ca12132b264662a5
	 * * master node xprv: xprv9s21ZrQH143K2NkobdHxXeyFDqE44nJYvzLFtsriatJNWMNKznGoGgW5UMTL4fyWtajnMYb5gEc2CgaKhmsKeskoi9eTimpRv2N11THhPTU
	 */

	parts = codex32_decode(tmpctx, "ms", "MS12NAMES6XQGUZTTXKEQNJSJZV4JV3NZ5K3KWGSPHUH6EVW", &fail);

	if(parts) {
		assert(streq(tal_hexstr(tmpctx, parts->payload, tal_bytelen(parts->payload)), "d1808e096b35b209ca12132b264662a5"));
		print_cl_vec("Test vector 2", parts);
	} else {
		abort();
	}
	tal_free(parts);


	/*
	 * Test vector 3
	 * This example shows splitting an existing 128-bit master seed into "random" codex32 shares, using k=3 and an identifier of cash. We appended two zero bits in order to obtain 26 bech32 characters (130 bits of data) from the 128-bit master seed.
	 *
	 * Master secret (hex): ffeeddccbbaa99887766554433221100
	 *
	 * * Secret share with index s: ms13cashsllhdmn9m42vcsamx24zrxgs3qqjzqud4m0d6nln
	 *
	 * * Share with index a: ms13casha320zyxwvutsrqpnmlkjhgfedca2a8d0zehn8a0t
	 *
	 * * Share with index c: ms13cashcacdefghjklmnpqrstuvwxyz023949xq35my48dr
	 *
	 * * Derived share with index d: ms13cashd0wsedstcdcts64cd7wvy4m90lm28w4ffupqs7rm
	 * * Derived share with index e: ms13casheekgpemxzshcrmqhaydlp6yhms3ws7320xyxsar9
	 * * Derived share with index f: ms13cashf8jh6sdrkpyrsp5ut94pj8ktehhw2hfvyrj48704
	 * master node xprv: xprv9s21ZrQH143K266qUcrDyYJrSG7KA3A7sE5UHndYRkFzsPQ6xwUhEGK1rNuyyA57Vkc1Ma6a8boVqcKqGNximmAe9L65WsYNcNitKRPnABd
	 * Any three of the five shares among acdef can be used to recover the secret.
	 * Note that the choice to append two zero bits was arbitrary, and any of the following four secret shares would have been valid choices. However, each choice would have resulted in a different set of derived shares.
	 *
	 * * ms13cashsllhdmn9m42vcsamx24zrxgs3qqjzqud4m0d6nln
	 * * ms13cashsllhdmn9m42vcsamx24zrxgs3qpte35dvzkjpt0r
	 * * ms13cashsllhdmn9m42vcsamx24zrxgs3qzfatvdwq5692k6
	 * * ms13cashsllhdmn9m42vcsamx24zrxgs3qrsx6ydhed97jx2
	 */

	char *addr_vec3[] = {
		"ms13cashsllhdmn9m42vcsamx24zrxgs3qqjzqud4m0d6nln",
		"ms13cashsllhdmn9m42vcsamx24zrxgs3qpte35dvzkjpt0r",
		"ms13cashsllhdmn9m42vcsamx24zrxgs3qzfatvdwq5692k6",
		"ms13cashsllhdmn9m42vcsamx24zrxgs3qrsx6ydhed97jx2",
	};

	for (size_t i = 0; i < ARRAY_SIZE(addr_vec3); i++) {
		parts = codex32_decode(tmpctx, NULL, addr_vec3[i], &fail);
		if(parts) {
			assert(streq(tal_hexstr(tmpctx, parts->payload, tal_bytelen(parts->payload)),
				     "ffeeddccbbaa99887766554433221100"));
			print_cl_vec("Test vector 3", parts);
		} else {
			abort();
		}
		tal_free(parts);
	}

	/*
	 * Test vector 4
	 * 256-bit secret (hex): ffeeddccbbaa99887766554433221100ffeeddccbbaa99887766554433221100

	 * * codex32 secret: ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqqtum9pgv99ycma
	 * * master node xprv: xprv9s21ZrQH143K3s41UCWxXTsU4TRrhkpD1t21QJETan3hjo8DP5LFdFcB5eaFtV8x6Y9aZotQyP8KByUjgLTbXCUjfu2iosTbMv98g8EQoqr
	 *
	 * Note that the choice to append four zero bits was arbitrary, and any of the following sixteen codex32 secrets would have been valid:
	 *
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqqtum9pgv99ycma
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqpj82dp34u6lqtd
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqzsrs4pnh7jmpj5
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqrfcpap2w8dqezy
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqy5tdvphn6znrf0
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyq9dsuypw2ragmel
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqx05xupvgp4v6qx
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyq8k0h5p43c2hzsk
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqgum7hplmjtr8ks
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqf9q0lpxzt5clxq
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyq28y48pyqfuu7le
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqt7ly0paesr8x0f
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqvrvg7pqydv5uyz
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqd6hekpea5n0y5j
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqwcnrwpmlkmt9dt
	 * * ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyq0pgjxpzx0ysaam
	 */

	char *addr_vec4[] = {
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqqtum9pgv99ycma",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqpj82dp34u6lqtd",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqzsrs4pnh7jmpj5",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqrfcpap2w8dqezy",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqy5tdvphn6znrf0",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyq9dsuypw2ragmel",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqx05xupvgp4v6qx",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyq8k0h5p43c2hzsk",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqgum7hplmjtr8ks",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqf9q0lpxzt5clxq",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyq28y48pyqfuu7le",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqt7ly0paesr8x0f",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqvrvg7pqydv5uyz",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqd6hekpea5n0y5j",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyqwcnrwpmlkmt9dt",
		"ms10leetsllhdmn9m42vcsamx24zrxgs3qrl7ahwvhw4fnzrhve25gvezzyq0pgjxpzx0ysaam",
	};

	for (size_t i = 0; i < ARRAY_SIZE(addr_vec4); i++) {
		parts = codex32_decode(tmpctx, NULL, addr_vec4[i], &fail);
		if (parts) {
			assert(streq(tal_hexstr(tmpctx, parts->payload, tal_bytelen(parts->payload)),
				     "ffeeddccbbaa99887766554433221100ffeeddccbbaa99887766554433221100"));
			print_cl_vec("Test vector 4", parts);
		} else {
			abort();
		}
		tal_free(parts);
	}

	/*
	 * Test vector 5
	 * This example shows generating a new 512-bit master seed using "random" codex32 characters and appending a checksum. The payload contains 103 bech32 characters, which corresponds to 515 bits. The last three bits are discarded when converting to a 512-bit master seed.
	 *
	 * This is an example of a Long codex32 String.
	 *
	 * * Secret share with index S: MS100C8VSM32ZXFGUHPCHTLUPZRY9X8GF2TVDW0S3JN54KHCE6MUA7LQPZYGSFJD6AN074RXVCEMLH8WU3TK925ACDEFGHJKLMNPQRSTUVWXY06FHPV80UNDVARHRAK
	 * * Master secret (hex): dc5423251cb87175ff8110c8531d0952d8d73e1194e95b5f19d6f9df7c01111104c9baecdfea8cccc677fb9ddc8aec5553b86e528bcadfdcc201c17c638c47e9
	 * * master node xprv: xprv9s21ZrQH143K4UYT4rP3TZVKKbmRVmfRqTx9mG2xCy2JYipZbkLV8rwvBXsUbEv9KQiUD7oED1Wyi9evZzUn2rqK9skRgPkNaAzyw3YrpJN
	 *
	 */

	parts = codex32_decode(tmpctx, NULL, "MS100C8VSM32ZXFGUHPCHTLUPZRY9X8GF2TVDW0S3JN54KHCE6MUA7LQPZYGSFJD6AN074RXVCEMLH8WU3TK925ACDEFGHJKLMNPQRSTUVWXY06FHPV80UNDVARHRAK", &fail);
	if (parts) {
		assert(streq(tal_hexstr(tmpctx, parts->payload, tal_bytelen(parts->payload)),
				"dc5423251cb87175ff8110c8531d0952d8d73e1194e95b5f19d6f9df7c01111104c9baecdfea8cccc677fb9ddc8aec5553b86e528bcadfdcc201c17c638c47e9"));
		print_cl_vec("Test vector 5", parts);
	} else {
		abort();
	}
	tal_free(parts);


	/* ---- Invalid codex test vectors ----
	 * These examples have incorrect checksums.
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxve740yyge2ghq
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxve740yyge2ghp
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxlk3yepcstwr
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxx6pgnv7jnpcsp
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxx0cpvr7n4geq
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxm5252y7d3lr
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxrd9sukzl05ej
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxc55srw5jrm0
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxgc7rwhtudwc
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxx4gy22afwghvs
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxe8yfm0
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxvm597d
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxme084q0vpht7pe0
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxme084q0vpht7pew
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxqyadsp3nywm8a
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxzvg7ar4hgaejk
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxcznau0advgxqe
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxch3jrc6j5040j
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx52gxl6ppv40mcv
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx7g4g2nhhle8fk
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx63m45uj8ss4x8
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxy4r708q7kg65x
	 *
	 */

	char *addr_invalid[] = {
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxve740yyge2ghq",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxve740yyge2ghp",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxlk3yepcstwr",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxx6pgnv7jnpcsp",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxx0cpvr7n4geq",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxm5252y7d3lr",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxrd9sukzl05ej",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxc55srw5jrm0",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxgc7rwhtudwc",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxx4gy22afwghvs",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxe8yfm0",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxvm597d",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxme084q0vpht7pe0",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxme084q0vpht7pew",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxqyadsp3nywm8a",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxzvg7ar4hgaejk",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxcznau0advgxqe",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxch3jrc6j5040j",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx52gxl6ppv40mcv",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx7g4g2nhhle8fk",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx63m45uj8ss4x8",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxy4r708q7kg65x",
	};

	for (size_t i = 0; i < ARRAY_SIZE(addr_invalid); i++) {
		parts = codex32_decode(tmpctx, NULL, addr_invalid[i], &fail);
		if (parts) {
			abort();
		} else {
			assert(streq(fail, "Invalid checksum!"));
		}
		tal_free(parts);
	}

	/* These examples use the wrong checksum for their given data sizes.
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxurfvwmdcmymdufv
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxcsyppjkd8lz4hx3
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxu6hwvl5p0l9xf3c
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxwqey9rfs6smenxa
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxv70wkzrjr4ntqet
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx3hmlrmpa4zl0v
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxrfggf88znkaup
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxpt7l4aycv9qzj
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxus27z9xtyxyw3
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxcwm4re8fs78vn
	 *
	 */

	char *addr_invalid1[] = {
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxurfvwmdcmymdufv",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxcsyppjkd8lz4hx3",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxu6hwvl5p0l9xf3c",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxwqey9rfs6smenxa",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxv70wkzrjr4ntqet",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx3hmlrmpa4zl0v",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxrfggf88znkaup",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxpt7l4aycv9qzj",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxus27z9xtyxyw3",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxcwm4re8fs78vn",
	};

	for (size_t i = 0; i < ARRAY_SIZE(addr_invalid1); i++) {
		parts = codex32_decode(tmpctx, NULL, addr_invalid1[i], &fail);
		if (parts) {
			printf("payload ==  %ld\n", tal_bytelen(parts->payload));
			abort();
		} else {
			assert(streq(fail, "Invalid checksum!") ||
				streq(fail, "Invalid length!") ||
				streq(fail, "Invalid payload!"));
		}
		tal_free(parts);
	}

	/*
	 * These examples have improper lengths. They are either too short, too long, or would decode to byte sequence with an incomplete group greater than 4 bits.
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxw0a4c70rfefn4
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxk4pavy5n46nea
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxx9lrwar5zwng4w
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxr335l5tv88js3
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxvu7q9nz8p7dj68v
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxpq6k542scdxndq3
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxkmfw6jm270mz6ej
	 * * ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxzhddxw99w7xws
	 * * ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxx42cux6um92rz
	 * * ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxarja5kqukdhy9
	 * * ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxky0ua3ha84qk8
	 * * ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx9eheesxadh2n2n9
	 * * ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx9llwmgesfulcj2z
	 * * ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx02ev7caq6n9fgkf
	 */

	char *addr_invalid2[] = {
		// "ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxw0a4c70rfefn4", FALSE POSITIVE
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxk4pavy5n46nea",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxx9lrwar5zwng4w",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxr335l5tv88js3",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxvu7q9nz8p7dj68v",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxpq6k542scdxndq3",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxkmfw6jm270mz6ej",
		// "ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxzhddxw99w7xws", FALSE POSITIVE
		"ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxx42cux6um92rz",
		"ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxarja5kqukdhy9",
		"ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxky0ua3ha84qk8",
		"ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx9eheesxadh2n2n9",
		"ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx9llwmgesfulcj2z",
		"ms12fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx02ev7caq6n9fgkf",
	};

	for (size_t i = 0; i < ARRAY_SIZE(addr_invalid2); i++) {
		parts = codex32_decode(tmpctx, NULL, addr_invalid2[i], &fail);
		if (parts) {
			printf("payload %ld\n", tal_bytelen(parts->payload));
			abort();
		} else {
			assert(streq(fail, "Invalid payload!") ||
				streq(fail, "Invalid length!"));
		}
		tal_free(parts);
	}

	/*
	 * This example uses a "0" threshold with a non-"s" index
	 * * ms10fauxxxxxxxxxxxxxxxxxxxxxxxxxxxx0z26tfn0ulw3p
	*/

	parts = codex32_decode(tmpctx, NULL, "ms10fauxxxxxxxxxxxxxxxxxxxxxxxxxxxx0z26tfn0ulw3p", &fail);
	if (parts) {
		abort();
	} else {
		assert(streq(fail, "Expected share index s for threshold 0!"));
	}
	tal_free(parts);

	/*
	 * This example has a threshold that is not a digit.
	 * * ms1fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxda3kr3s0s2swg
	 */

	parts = codex32_decode(tmpctx, NULL, "ms1fauxxxxxxxxxxxxxxxxxxxxxxxxxxxxxda3kr3s0s2swg", &fail);
	if (parts) {
		abort();
	} else {
		assert(streq(fail, "Invalid threshold!"));
	}
	tal_free(parts);

	/*
	 * These examples do not begin with the required "ms" or "MS" prefix and/or are missing the "1" separator.
 	 * * 0fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2
	 * * 10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2
	 * * ms0fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2
	 * * m10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2
	 * * s10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2
	 * * 0fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxhkd4f70m8lgws
	 * * 10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxhkd4f70m8lgws
	 * * m10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxx8t28z74x8hs4l
	 * * s10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxh9d0fhnvfyx3x
	 */

	char *addr_invalid3[] = {
		"0fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2",
		"10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2",
		"ms0fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2",
		"m10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2",
		"s10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2",
		"0fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxhkd4f70m8lgws",
		"10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxhkd4f70m8lgws",
		"m10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxx8t28z74x8hs4l",
		"s10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxh9d0fhnvfyx3x",
	};

	for (size_t i = 0; i < ARRAY_SIZE(addr_invalid3); i++) {
		parts = codex32_decode(tmpctx, "ms", addr_invalid3[i], &fail);
		if (parts) {
			abort();
		} else {
			assert(strstr(fail, "Invalid hrp ") ||
			       streq(fail, "Separator doesn't exist!"));
		}
		tal_free(parts);
	}

	/*
	 * These examples all incorrectly mix upper and lower case characters.
	 * * Ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2
	 * * mS10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2
	 * * MS10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2
	 * * ms10FAUXsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2
	 * * ms10fauxSxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2
	 * * ms10fauxsXXXXXXXXXXXXXXXXXXXXXXXXXXuqxkk05lyf3x2
	 * * ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxUQXKK05LYF3X2
	 */

	char *addr_invalid4[] = {
		"Ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2",
		"mS10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2",
		"MS10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2",
		"ms10FAUXsxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2",
		"ms10fauxSxxxxxxxxxxxxxxxxxxxxxxxxxxuqxkk05lyf3x2",
		"ms10fauxsXXXXXXXXXXXXXXXXXXXXXXXXXXuqxkk05lyf3x2",
		"ms10fauxsxxxxxxxxxxxxxxxxxxxxxxxxxxUQXKK05LYF3X2",
	};

	for (size_t i = 0; i < ARRAY_SIZE(addr_invalid4); i++) {
		parts = codex32_decode(tmpctx, NULL, addr_invalid4[i], &fail);
		if (parts) {
			abort();
		} else {
			assert(streq(fail, "Not a valid bech32 string!"));
		}
		tal_free(parts);
	}

	common_shutdown();
	return 0;
}
