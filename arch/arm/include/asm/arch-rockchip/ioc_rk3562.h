/*
 * (C) Copyright 2022 Rockchip Electronics Co., Ltd.
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */
#ifndef _ASM_ARCH_IOC_RK3562_H
#define _ASM_ARCH_IOC_RK3562_H

#include <common.h>

struct rk3562_ioc {
	uint32_t gpio1a_iomux_sel_l;                 /* Address Offset: 0x0000 */
	uint32_t gpio1a_iomux_sel_h;                 /* Address Offset: 0x0004 */
	uint32_t gpio1b_iomux_sel_l;                 /* Address Offset: 0x0008 */
	uint32_t gpio1b_iomux_sel_h;                 /* Address Offset: 0x000C */
	uint32_t gpio1c_iomux_sel_l;                 /* Address Offset: 0x0010 */
	uint32_t gpio1c_iomux_sel_h;                 /* Address Offset: 0x0014 */
	uint32_t gpio1d_iomux_sel_l;                 /* Address Offset: 0x0018 */
	uint32_t gpio1d_iomux_sel_h;                 /* Address Offset: 0x001C */
	uint32_t gpio2a_iomux_sel_l;                 /* Address Offset: 0x0020 */
	uint32_t reserved0024[23];                   /* Address Offset: 0x0024 */
	uint32_t gpio1a_p;                           /* Address Offset: 0x0080 */
	uint32_t gpio1b_p;                           /* Address Offset: 0x0084 */
	uint32_t gpio1c_p;                           /* Address Offset: 0x0088 */
	uint32_t gpio1d_p;                           /* Address Offset: 0x008C */
	uint32_t gpio2a_p;                           /* Address Offset: 0x0090 */
	uint32_t reserved0094[11];                   /* Address Offset: 0x0094 */
	uint32_t gpio1a_ie;                          /* Address Offset: 0x00C0 */
	uint32_t gpio1b_ie;                          /* Address Offset: 0x00C4 */
	uint32_t gpio1c_ie;                          /* Address Offset: 0x00C8 */
	uint32_t gpio1d_ie;                          /* Address Offset: 0x00CC */
	uint32_t gpio2a_ie;                          /* Address Offset: 0x00D0 */
	uint32_t reserved00d4[11];                   /* Address Offset: 0x00D4 */
	uint32_t gpio1a_od;                          /* Address Offset: 0x0100 */
	uint32_t gpio1b_od;                          /* Address Offset: 0x0104 */
	uint32_t gpio1c_od;                          /* Address Offset: 0x0108 */
	uint32_t gpio1d_od;                          /* Address Offset: 0x010C */
	uint32_t gpio2a_od;                          /* Address Offset: 0x0110 */
	uint32_t reserved0114[11];                   /* Address Offset: 0x0114 */
	uint32_t gpio1a_sus;                         /* Address Offset: 0x0140 */
	uint32_t gpio1b_sus;                         /* Address Offset: 0x0144 */
	uint32_t gpio1c_sus;                         /* Address Offset: 0x0148 */
	uint32_t gpio1d_sus;                         /* Address Offset: 0x014C */
	uint32_t gpio2a_sus;                         /* Address Offset: 0x0150 */
	uint32_t reserved0154[11];                   /* Address Offset: 0x0154 */
	uint32_t gpio1a_sl;                          /* Address Offset: 0x0180 */
	uint32_t gpio1b_sl;                          /* Address Offset: 0x0184 */
	uint32_t gpio1c_sl;                          /* Address Offset: 0x0188 */
	uint32_t gpio1d_sl;                          /* Address Offset: 0x018C */
	uint32_t gpio2a_sl;                          /* Address Offset: 0x0190 */
	uint32_t reserved0194[27];                   /* Address Offset: 0x0194 */
	uint32_t gpio1a_ds0;                         /* Address Offset: 0x0200 */
	uint32_t gpio1a_ds1;                         /* Address Offset: 0x0204 */
	uint32_t gpio1a_ds2;                         /* Address Offset: 0x0208 */
	uint32_t gpio1a_ds3;                         /* Address Offset: 0x020C */
	uint32_t gpio1b_ds0;                         /* Address Offset: 0x0210 */
	uint32_t gpio1b_ds1;                         /* Address Offset: 0x0214 */
	uint32_t gpio1b_ds2;                         /* Address Offset: 0x0218 */
	uint32_t gpio1b_ds3;                         /* Address Offset: 0x021C */
	uint32_t gpio1c_ds0;                         /* Address Offset: 0x0220 */
	uint32_t gpio1c_ds1;                         /* Address Offset: 0x0224 */
	uint32_t gpio1c_ds2;                         /* Address Offset: 0x0228 */
	uint32_t gpio1c_ds3;                         /* Address Offset: 0x022C */
	uint32_t gpio1d_ds0;                         /* Address Offset: 0x0230 */
	uint32_t gpio1d_ds1;                         /* Address Offset: 0x0234 */
	uint32_t gpio1d_ds2;                         /* Address Offset: 0x0238 */
	uint32_t gpio1d_ds3;                         /* Address Offset: 0x023C */
	uint32_t gpio2a_ds0;                         /* Address Offset: 0x0240 */
	uint32_t reserved0244[47];                   /* Address Offset: 0x0244 */
	uint32_t io_vsel0;                           /* Address Offset: 0x0300 */
	uint32_t reserved0304[63];                   /* Address Offset: 0x0304 */
	uint32_t mac1_io_con0;                       /* Address Offset: 0x0400 */
	uint32_t mac1_io_con1;                       /* Address Offset: 0x0404 */
	uint32_t reserved0408[62];                   /* Address Offset: 0x0408 */
	uint32_t sdcard0_io_con;                     /* Address Offset: 0x0500 */
	uint32_t jtag_m1_con;                        /* Address Offset: 0x0504 */
	uint32_t reserved0508[16078];                /* Address Offset: 0x0508 */
	uint32_t gpio3a_iomux_sel_l;                 /* Address Offset: 0x10040 */
	uint32_t gpio3a_iomux_sel_h;                 /* Address Offset: 0x10044 */
	uint32_t gpio3b_iomux_sel_l;                 /* Address Offset: 0x10048 */
	uint32_t gpio3b_iomux_sel_h;                 /* Address Offset: 0x1004C */
	uint32_t gpio3c_iomux_sel_l;                 /* Address Offset: 0x10050 */
	uint32_t gpio3c_iomux_sel_h;                 /* Address Offset: 0x10054 */
	uint32_t gpio3d_iomux_sel_l;                 /* Address Offset: 0x10058 */
	uint32_t gpio3d_iomux_sel_h;                 /* Address Offset: 0x1005C */
	uint32_t gpio4a_iomux_sel_l;                 /* Address Offset: 0x10060 */
	uint32_t gpio4a_iomux_sel_h;                 /* Address Offset: 0x10064 */
	uint32_t gpio4b_iomux_sel_l;                 /* Address Offset: 0x10068 */
	uint32_t gpio4b_iomux_sel_h;                 /* Address Offset: 0x1006C */
	uint32_t reserved10070[12];                  /* Address Offset: 0x10070 */
	uint32_t gpio3a_p;                           /* Address Offset: 0x100A0 */
	uint32_t gpio3b_p;                           /* Address Offset: 0x100A4 */
	uint32_t gpio3c_p;                           /* Address Offset: 0x100A8 */
	uint32_t gpio3d_p;                           /* Address Offset: 0x100AC */
	uint32_t gpio4a_p;                           /* Address Offset: 0x100B0 */
	uint32_t gpio4b_p;                           /* Address Offset: 0x100B4 */
	uint32_t reserved100b8[10];                  /* Address Offset: 0x100B8 */
	uint32_t gpio3a_ie;                          /* Address Offset: 0x100E0 */
	uint32_t gpio3b_ie;                          /* Address Offset: 0x100E4 */
	uint32_t gpio3c_ie;                          /* Address Offset: 0x100E8 */
	uint32_t gpio3d_ie;                          /* Address Offset: 0x100EC */
	uint32_t gpio4a_ie;                          /* Address Offset: 0x100F0 */
	uint32_t gpio4b_ie;                          /* Address Offset: 0x100F4 */
	uint32_t reserved100f8[10];                  /* Address Offset: 0x100F8 */
	uint32_t gpio3a_od;                          /* Address Offset: 0x10120 */
	uint32_t gpio3b_od;                          /* Address Offset: 0x10124 */
	uint32_t gpio3c_od;                          /* Address Offset: 0x10128 */
	uint32_t gpio3d_od;                          /* Address Offset: 0x1012C */
	uint32_t gpio4a_od;                          /* Address Offset: 0x10130 */
	uint32_t gpio4b_od;                          /* Address Offset: 0x10134 */
	uint32_t reserved10138[10];                  /* Address Offset: 0x10138 */
	uint32_t gpio3a_sus;                         /* Address Offset: 0x10160 */
	uint32_t gpio3b_sus;                         /* Address Offset: 0x10164 */
	uint32_t gpio3c_sus;                         /* Address Offset: 0x10168 */
	uint32_t gpio3d_sus;                         /* Address Offset: 0x1016C */
	uint32_t gpio4a_sus;                         /* Address Offset: 0x10170 */
	uint32_t gpio4b_sus;                         /* Address Offset: 0x10174 */
	uint32_t reserved10178[10];                  /* Address Offset: 0x10178 */
	uint32_t gpio3a_sl;                          /* Address Offset: 0x101A0 */
	uint32_t gpio3b_sl;                          /* Address Offset: 0x101A4 */
	uint32_t gpio3c_sl;                          /* Address Offset: 0x101A8 */
	uint32_t gpio3d_sl;                          /* Address Offset: 0x101AC */
	uint32_t gpio4a_sl;                          /* Address Offset: 0x101B0 */
	uint32_t gpio4b_sl;                          /* Address Offset: 0x101B4 */
	uint32_t reserved101b8[50];                  /* Address Offset: 0x101B8 */
	uint32_t gpio3a_ds0;                         /* Address Offset: 0x10280 */
	uint32_t gpio3a_ds1;                         /* Address Offset: 0x10284 */
	uint32_t gpio3a_ds2;                         /* Address Offset: 0x10288 */
	uint32_t gpio3a_ds3;                         /* Address Offset: 0x1028C */
	uint32_t gpio3b_ds0;                         /* Address Offset: 0x10290 */
	uint32_t gpio3b_ds1;                         /* Address Offset: 0x10294 */
	uint32_t gpio3b_ds2;                         /* Address Offset: 0x10298 */
	uint32_t gpio3b_ds3;                         /* Address Offset: 0x1029C */
	uint32_t gpio3c_ds0;                         /* Address Offset: 0x102A0 */
	uint32_t gpio3c_ds1;                         /* Address Offset: 0x102A4 */
	uint32_t gpio3c_ds2;                         /* Address Offset: 0x102A8 */
	uint32_t gpio3c_ds3;                         /* Address Offset: 0x102AC */
	uint32_t gpio3d_ds0;                         /* Address Offset: 0x102B0 */
	uint32_t gpio3d_ds1;                         /* Address Offset: 0x102B4 */
	uint32_t gpio3d_ds2;                         /* Address Offset: 0x102B8 */
	uint32_t gpio3d_ds3;                         /* Address Offset: 0x102BC */
	uint32_t gpio4a_ds0;                         /* Address Offset: 0x102C0 */
	uint32_t gpio4a_ds1;                         /* Address Offset: 0x102C4 */
	uint32_t gpio4a_ds2;                         /* Address Offset: 0x102C8 */
	uint32_t gpio4a_ds3;                         /* Address Offset: 0x102CC */
	uint32_t gpio4b_ds0;                         /* Address Offset: 0x102D0 */
	uint32_t gpio4b_ds1;                         /* Address Offset: 0x102D4 */
	uint32_t gpio4b_ds2;                         /* Address Offset: 0x102D8 */
	uint32_t gpio4b_ds3;                         /* Address Offset: 0x102DC */
	uint32_t reserved102e0[8];                   /* Address Offset: 0x102E0 */
	uint32_t io_vsel1;                           /* Address Offset: 0x10300 */
	uint32_t reserved10304[63];                  /* Address Offset: 0x10304 */
	uint32_t mac0_io_con0;                       /* Address Offset: 0x10400 */
	uint32_t mac0_io_con1;                       /* Address Offset: 0x10404 */
	uint32_t reserved10408[62];                  /* Address Offset: 0x10408 */
	uint32_t vo_io_con;                          /* Address Offset: 0x10500 */
	uint32_t reserved10504[35];                  /* Address Offset: 0x10504 */
	uint32_t saradc1_con;                        /* Address Offset: 0x10590 */
	uint32_t reserved10594[16027];               /* Address Offset: 0x10594 */
	uint32_t gpio0a_iomux_sel_l;                 /* Address Offset: 0x20000 */
	uint32_t gpio0a_iomux_sel_h;                 /* Address Offset: 0x20004 */
	uint32_t gpio0b_iomux_sel_l;                 /* Address Offset: 0x20008 */
	uint32_t gpio0b_iomux_sel_h;                 /* Address Offset: 0x2000C */
	uint32_t gpio0c_iomux_sel_l;                 /* Address Offset: 0x20010 */
	uint32_t gpio0c_iomux_sel_h;                 /* Address Offset: 0x20014 */
	uint32_t gpio0d_iomux_sel_l;                 /* Address Offset: 0x20018 */
	uint32_t reserved2001c;                      /* Address Offset: 0x2001C */
	uint32_t gpio0a_p;                           /* Address Offset: 0x20020 */
	uint32_t gpio0b_p;                           /* Address Offset: 0x20024 */
	uint32_t gpio0c_p;                           /* Address Offset: 0x20028 */
	uint32_t gpio0d_p;                           /* Address Offset: 0x2002C */
	uint32_t gpio0a_ie;                          /* Address Offset: 0x20030 */
	uint32_t gpio0b_ie;                          /* Address Offset: 0x20034 */
	uint32_t gpio0c_ie;                          /* Address Offset: 0x20038 */
	uint32_t gpio0d_ie;                          /* Address Offset: 0x2003C */
	uint32_t gpio0a_od;                          /* Address Offset: 0x20040 */
	uint32_t gpio0b_od;                          /* Address Offset: 0x20044 */
	uint32_t gpio0c_od;                          /* Address Offset: 0x20048 */
	uint32_t gpio0d_od;                          /* Address Offset: 0x2004C */
	uint32_t gpio0a_sus;                         /* Address Offset: 0x20050 */
	uint32_t gpio0b_sus;                         /* Address Offset: 0x20054 */
	uint32_t gpio0c_sus;                         /* Address Offset: 0x20058 */
	uint32_t gpio0d_sus;                         /* Address Offset: 0x2005C */
	uint32_t gpio0a_sl;                          /* Address Offset: 0x20060 */
	uint32_t gpio0b_sl;                          /* Address Offset: 0x20064 */
	uint32_t gpio0c_sl;                          /* Address Offset: 0x20068 */
	uint32_t gpio0d_sl;                          /* Address Offset: 0x2006C */
	uint32_t gpio0a_ds0;                         /* Address Offset: 0x20070 */
	uint32_t gpio0a_ds1;                         /* Address Offset: 0x20074 */
	uint32_t gpio0a_ds2;                         /* Address Offset: 0x20078 */
	uint32_t gpio0a_ds3;                         /* Address Offset: 0x2007C */
	uint32_t gpio0b_ds0;                         /* Address Offset: 0x20080 */
	uint32_t gpio0b_ds1;                         /* Address Offset: 0x20084 */
	uint32_t gpio0b_ds2;                         /* Address Offset: 0x20088 */
	uint32_t gpio0b_ds3;                         /* Address Offset: 0x2008C */
	uint32_t gpio0c_ds0;                         /* Address Offset: 0x20090 */
	uint32_t gpio0c_ds1;                         /* Address Offset: 0x20094 */
	uint32_t gpio0c_ds2;                         /* Address Offset: 0x20098 */
	uint32_t gpio0c_ds3;                         /* Address Offset: 0x2009C */
	uint32_t gpio0d_ds0;                         /* Address Offset: 0x200A0 */
	uint32_t reserved200a4[23];                  /* Address Offset: 0x200A4 */
	uint32_t jtag_m0_con;                        /* Address Offset: 0x20100 */
	uint32_t uart_io_con;                        /* Address Offset: 0x20104 */
	uint32_t reserved20108[16];                  /* Address Offset: 0x20108 */
	uint32_t io_vsel2;                           /* Address Offset: 0x20148 */
	uint32_t xin_con;                            /* Address Offset: 0x2014C */
};
check_member(rk3562_ioc, xin_con, 0x2014c);

#endif

