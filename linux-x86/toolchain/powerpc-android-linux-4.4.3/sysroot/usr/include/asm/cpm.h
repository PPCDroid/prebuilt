/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __CPM_H
#define __CPM_H

#include <linux/compiler.h>
#include <linux/types.h>
#include <linux/errno.h>
#include <linux/of.h>

struct spi_pram {
 __be16 rbase;
 __be16 tbase;
 u8 rfcr;
 u8 tfcr;
 __be16 mrblr;
 __be32 rstate;
 __be32 rdp;
 __be16 rbptr;
 __be16 rbc;
 __be32 rxtmp;
 __be32 tstate;
 __be32 tdp;
 __be16 tbptr;
 __be16 tbc;
 __be32 txtmp;
 __be32 res;
 __be16 rpbase;
 __be16 res1;
};

struct usb_ctlr {
 u8 usb_usmod;
 u8 usb_usadr;
 u8 usb_uscom;
 u8 res1[1];
 __be16 usb_usep[4];
 u8 res2[4];
 __be16 usb_usber;
 u8 res3[2];
 __be16 usb_usbmr;
 u8 res4[1];
 u8 usb_usbs;

 __be16 usb_ussft;
 u8 res5[2];
 __be16 usb_usfrn;
 u8 res6[0x22];
} __attribute__ ((packed));

#define CPMFCR_GBL ((u_char)0x20)  
#define CPMFCR_TC2 ((u_char)0x04)  
#define CPMFCR_DTB ((u_char)0x02)  
#define CPMFCR_BDB ((u_char)0x01)  
#define CPMFCR_EB ((u_char)0x10)  

#define CPM_CR_INIT_TRX ((ushort)0x0000)
#define CPM_CR_INIT_RX ((ushort)0x0001)
#define CPM_CR_INIT_TX ((ushort)0x0002)
#define CPM_CR_HUNT_MODE ((ushort)0x0003)
#define CPM_CR_STOP_TX ((ushort)0x0004)
#define CPM_CR_GRA_STOP_TX ((ushort)0x0005)
#define CPM_CR_RESTART_TX ((ushort)0x0006)
#define CPM_CR_CLOSE_RX_BD ((ushort)0x0007)
#define CPM_CR_SET_GADDR ((ushort)0x0008)
#define CPM_CR_SET_TIMER ((ushort)0x0008)
#define CPM_CR_STOP_IDMA ((ushort)0x000b)

typedef struct cpm_buf_desc {
 ushort cbd_sc;
 ushort cbd_datlen;
 uint cbd_bufaddr;
} cbd_t;

#define BD_SC_EMPTY (0x8000)  
#define BD_SC_READY (0x8000)  
#define BD_SC_WRAP (0x2000)  
#define BD_SC_INTRPT (0x1000)  
#define BD_SC_LAST (0x0800)  
#define BD_SC_TC (0x0400)  
#define BD_SC_CM (0x0200)  
#define BD_SC_ID (0x0100)  
#define BD_SC_P (0x0100)  
#define BD_SC_BR (0x0020)  
#define BD_SC_FR (0x0010)  
#define BD_SC_PR (0x0008)  
#define BD_SC_NAK (0x0004)  
#define BD_SC_OV (0x0002)  
#define BD_SC_UN (0x0002)  
#define BD_SC_CD (0x0001)  
#define BD_SC_CL (0x0001)  

#define BD_ENET_RX_EMPTY (0x8000)
#define BD_ENET_RX_WRAP (0x2000)
#define BD_ENET_RX_INTR (0x1000)
#define BD_ENET_RX_LAST (0x0800)
#define BD_ENET_RX_FIRST (0x0400)
#define BD_ENET_RX_MISS (0x0100)
#define BD_ENET_RX_BC (0x0080)  
#define BD_ENET_RX_MC (0x0040)  
#define BD_ENET_RX_LG (0x0020)
#define BD_ENET_RX_NO (0x0010)
#define BD_ENET_RX_SH (0x0008)
#define BD_ENET_RX_CR (0x0004)
#define BD_ENET_RX_OV (0x0002)
#define BD_ENET_RX_CL (0x0001)
#define BD_ENET_RX_STATS (0x01ff)  

#define BD_ENET_TX_READY (0x8000)
#define BD_ENET_TX_PAD (0x4000)
#define BD_ENET_TX_WRAP (0x2000)
#define BD_ENET_TX_INTR (0x1000)
#define BD_ENET_TX_LAST (0x0800)
#define BD_ENET_TX_TC (0x0400)
#define BD_ENET_TX_DEF (0x0200)
#define BD_ENET_TX_HB (0x0100)
#define BD_ENET_TX_LC (0x0080)
#define BD_ENET_TX_RL (0x0040)
#define BD_ENET_TX_RCMASK (0x003c)
#define BD_ENET_TX_UN (0x0002)
#define BD_ENET_TX_CSL (0x0001)
#define BD_ENET_TX_STATS (0x03ff)  

#define BD_SCC_TX_LAST (0x0800)

#define BD_I2C_START (0x0400)

#endif
