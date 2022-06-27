/* general information about Nissan ROMs
 * (c) fenugrec 2022
 * GPLv3
 *
 *
 */

#include "nissan_romdefs.h"

const struct fidtype_t fidtypes[] = {
	[FID705101] = {	.fti = FID705101,
			.FIDIC = "SH705101",
			.ROMsize = 256*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),
			.pRAMF_maxdist = 0x380,
			.RAMF_header = 0xFFFFD800,
			.features = ROM_HAS_STDCKS | ROM_HAS_LOADERLESS,
			.pRAMjump = 0x10,
			.pRAM_DLAmax = 0,
			.pRAMinit = 0,
			},
	[FID705415] = {	.fti = FID705415,
			.FIDIC = "SH705415",
			.ROMsize = 384*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),
			.pRAMF_maxdist = 0x0c,
			.RAMF_header = 0xFFFF8000,
			.features = ROM_HAS_STDCKS | ROM_HAS_ALTCKS | ROM_HAS_IVT2,
			.pRAMjump = 0x10,
			.pRAM_DLAmax = 0x14,
			.pRAMinit = 0x28,
			.packs_start = 0x3c,
			.packs_end = 0x40,
			.pIVT2 = 0x44,
			.IVT2_expected = 0x1000
			},
	[FID705507] = {	.fti = FID705507,
			.FIDIC = "SH705507",
			.ROMsize = 512*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),
			.pRAMF_maxdist = 0x300,
			.RAMF_header = 0xFFFF8000,
			.features = ROM_HAS_STDCKS | ROM_HAS_ALTCKS | ROM_HAS_LOADERLESS,	//for some reason, some 705507 ROMs don't have ALTCKS (like 4M860), for no obvious reason.
			.pRAMjump = 0x10,
			.pRAM_DLAmax = 0x14,
			.pRAMinit = 0x28,
			.packs_start = 0x3c,
			.packs_end = 0x40,
			},
	[FID705513] = {	.fti = FID705513,
			.FIDIC = "SH705513",
			.ROMsize = 512*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),
			.pRAMF_maxdist = 0x0c,
			.RAMF_header = 0xFFFF8000,
			.features = ROM_HAS_STDCKS | ROM_HAS_ALTCKS | ROM_HAS_IVT2,
			.pRAMjump = 0x10,
			.pRAM_DLAmax = 0x14,
			.pRAMinit = 0x28,
			.packs_start = 0x3c,
			.packs_end = 0x40,
			.pIVT2 = 0x44,
			.IVT2_expected = 0x1000,
			},
	[FID705519] = {	.fti = FID705519,
			.FIDIC = "SH705519",
			.ROMsize = 512*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),
			.features = ROM_HAS_ALTCKS | ROM_HAS_ALT2CKS | ROM_HAS_IVT2 | ROM_HAS_ECUREC,
			.packs_start = -8,
			.packs_end = -4,
			.pECUREC = 0,
			.pROMend = 4,
			.pIVT2 = 8,
			.IVT2_expected = 0x10004,
			},
	[FID705520] = {	.fti = FID705520,
			.FIDIC = "SH705520",
			.ROMsize = 512*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),
			.pRAMF_maxdist = 0x0c,
			.RAMF_header = 0xFFFF8000,
			.features = ROM_HAS_STDCKS | ROM_HAS_ALTCKS | ROM_HAS_IVT2,
			.pRAMjump = 0x10,
			.pRAM_DLAmax = 0x14,
			.pRAMinit = 0x30,
			.packs_start = 0x44,
			.packs_end = 0x48,
			.pIVT2 = 0x4c,
			.IVT2_expected = 0x1000,
			},
	[FID705821] = {	.fti = FID705821,
			.FIDIC = "SH705821",
			.ROMsize = 1024*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),
			.pRAMF_maxdist = 0x0c,
			.RAMF_header = 0xFFFF8000,
			.features = ROM_HAS_STDCKS | ROM_HAS_ALTCKS | ROM_HAS_IVT2,
			.pRAMjump = 0x18,
			.pRAM_DLAmax = 0x1c,
			.pRAMinit = 0x38,
			.packs_start = 0x4c,
			.packs_end = 0x50,
			.pIVT2 = 0x54,
			.IVT2_expected = 0x1000,
			},
	[FID705822] = {	.fti = FID705822,
			.FIDIC = "SH705822",
			.ROMsize = 1024*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),	/* some have 8 extra bytes */
			/* this could almost have ROM_HAS_ECUREC, but that would fail on ZB060 for no clear reason */
			.pRAMF_maxdist = 0x0c,
			.RAMF_header = 0xFFFF8000,
			.features = ROM_HAS_ALTCKS | ROM_HAS_ALT2CKS | ROM_HAS_IVT2,
			.pRAMjump = 0x18,
			.pRAM_DLAmax = 0x1c,
			.pRAMinit = 0x40,
			.packs_start = 0x54,
			.packs_end = 0x58,
			.pIVT2 = 0x64,
 			.IVT2_expected = 0x20004,
			.pROMend = 0x60,
			.pECUREC = 0x5c,
			},
	[FID705823] = {	.fti = FID705823,
			.FIDIC = "SH705823",
			.ROMsize = 1024*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),
			.pRAMF_maxdist = 0x0c,
			.RAMF_header = 0xFFFF8000,
			.features = ROM_HAS_STDCKS | ROM_HAS_ALTCKS | ROM_HAS_IVT2,
			.pRAMjump = 0x18,
			.pRAM_DLAmax = 0x1c,
			.pRAMinit = 0x38,
			.packs_start = 0x4c,
			.packs_end = 0x50,
			.pIVT2 = 0x54,
			.IVT2_expected = 0x2000,
			},
	[FID705828] = {	.fti = FID705828,
			.FIDIC = "SH705828",
			.ROMsize = 1024*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t) + 4,	/* some would need +8 here */
			.features = ROM_HAS_ALTCKS | ROM_HAS_ALT2CKS | ROM_HAS_IVT2 | ROM_HAS_ECUREC,
			.packs_start = -8,
			.packs_end = -4,
			.pECUREC = 0,
			.pROMend = 4,
			.pIVT2 = 8,
			.IVT2_expected = 0x20004,
			},
	[FID705927] = {	.fti = FID705927,
			.FIDIC = "SH705927",		/** tentative values here. */
			.ROMsize = 1536*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t) + 8,
			.features = ROM_HAS_ALTCKS | ROM_HAS_ALT2CKS | ROM_HAS_IVT2 | ROM_HAS_ECUREC,
			.packs_start = -8,
			.packs_end = -4,
			.pECUREC = 0,
			.pROMend = 4,
			.pIVT2 = 8,
			.IVT2_expected = 0x20004,

			},
	[FID7253331] = {	.fti = FID7253331,
			.FIDIC = "S7253331",		/** tentative values here. See 4EF2A, 4CE1A */
			.ROMsize = 2048*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),	//not really; no MSTCR fields ?
			.features = ROM_HAS_ALTCKS | ROM_HAS_ALT2CKS | ROM_HAS_IVT2 | ROM_HAS_ECUREC,
			.packs_start = -8,
			.packs_end = -4,
			.pECUREC = 0,
			.pROMend = 4,
			.pIVT2 = 8,
			.IVT2_expected = 0x70004,
			},
	[FID7253332] = {	.fti = FID7253332,
			.FIDIC = "S7253332",		/** very tentative values here */
			.ROMsize = 2048*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),	//not really; no MSTCR fields ?
			.features = ROM_HAS_ALTCKS | ROM_HAS_ALT2CKS | ROM_HAS_IVT2 | ROM_HAS_ECUREC,
			.packs_start = -8,
			.packs_end = -4,
			.pECUREC = 0,
			.pROMend = 4,
			.pIVT2 = 8,
			.IVT2_expected = 0x70004,
			},
	[FID7254332] = {	.fti = FID7254332,
			.FIDIC = "S7254332",		/** some tentative values here */
			.ROMsize = 2048*1024U,
			.FIDbase_size = sizeof(struct fid_base1_t),	//not really; no MSTCR fields ?
			.features = ROM_HAS_ALTCKS | ROM_HAS_ALT2CKS | ROM_HAS_IVT2 | ROM_HAS_ECUREC,
			.packs_start = -8,
			.packs_end = -4,
			.pECUREC = 0,
			.pROMend = 4,
			.pIVT2 = 8,
			.IVT2_expected = 0x70004,
			},
	[FID_UNK] = {	.fti = FID_UNK,
			},
};	//fidtypes[]
