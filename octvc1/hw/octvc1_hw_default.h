/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_HW_DEFAULT.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

Description: Contains the event definition of the HW API.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU Affero General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU Affero General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.10.00-B1837 (2018/02/21)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_HW_DEFAULT_H__
#define __OCTVC1_HW_DEFAULT_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_hw_api.h"

/*****************************  COMMAND DEFAULT *****************************/

/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_PCB_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_PCB_INFO_CMD buf_tOCTVC1_HW_MSG_PCB_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_PCB_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_PCB_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_HW_MSG_PCB_INFO_CMD *g_pOctDef_tOCTVC1_HW_MSG_PCB_INFO_CMD =
    &buf_tOCTVC1_HW_MSG_PCB_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_PCB_INFO_CMD *g_pOctDef_tOCTVC1_HW_MSG_PCB_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_PCB_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_PCB_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD buf_tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_CPU_CORE_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulCoreIndex */
};

const tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD *g_pOctDef_tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD =
    &buf_tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD *g_pOctDef_tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_CPU_CORE_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD buf_tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_CPU_CORE_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulCoreIndex */
};

const tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD *g_pOctDef_tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD =
    &buf_tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD *g_pOctDef_tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_CPU_CORE_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD buf_tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_CPU_CORE_LIST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* IndexGet */
       0, /* ulIndex */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD *g_pOctDef_tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD =
    &buf_tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD *g_pOctDef_tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_CPU_CORE_LIST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD buf_tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_ETH_PORT_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulPortIndex */
};

const tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD =
    &buf_tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_ETH_PORT_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD buf_tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_ETH_PORT_LIST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* IndexGet */
       0, /* ulIndex */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD =
    &buf_tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_ETH_PORT_LIST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD buf_tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_ETH_PORT_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   cOCT_FALSE  /* ulResetStatsFlag */
};

const tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD =
    &buf_tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_ETH_PORT_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD buf_tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_ETH_PORT_MODIFY_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   { /* Config */
       { /* MacAddress */
           { /* abyReserved */
               (cOCTVC1_DO_NOT_MODIFY & 0xFF), /* abyReserved[0] */
               (cOCTVC1_DO_NOT_MODIFY & 0xFF)  /* abyReserved[1] */
           },
           { /* abyMacAddress */
               (cOCTVC1_DO_NOT_MODIFY & 0xFF), /* abyMacAddress[0] */
               (cOCTVC1_DO_NOT_MODIFY & 0xFF), /* abyMacAddress[1] */
               (cOCTVC1_DO_NOT_MODIFY & 0xFF), /* abyMacAddress[2] */
               (cOCTVC1_DO_NOT_MODIFY & 0xFF), /* abyMacAddress[3] */
               (cOCTVC1_DO_NOT_MODIFY & 0xFF), /* abyMacAddress[4] */
               (cOCTVC1_DO_NOT_MODIFY & 0xFF)  /* abyMacAddress[5] */
           }
       },
       cOCTVC1_DO_NOT_MODIFY, /* ulPromiscuousModeFlag */
       cOCTVC1_DO_NOT_MODIFY, /* ulAcceptMulticastFlag */
       cOCTVC1_DO_NOT_MODIFY, /* ulAcceptJumboFrameFlag */
       cOCTVC1_DO_NOT_MODIFY, /* ulSgmiiAutoNegotationFlag */
       cOCTVC1_DO_NOT_MODIFY, /* ulLinkSpeed */
       cOCTVC1_DO_NOT_MODIFY  /* ulDuplexMode */
   }
};

const tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD =
    &buf_tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_INFO_CMD buf_tOCTVC1_HW_MSG_RF_PORT_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulPortIndex */
};

const tOCTVC1_HW_MSG_RF_PORT_INFO_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_INFO_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_STATS_CMD buf_tOCTVC1_HW_MSG_RF_PORT_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   0  /* ulResetStatsFlag */
};

const tOCTVC1_HW_MSG_RF_PORT_STATS_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_STATS_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_STATS_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_LIST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_LIST_CMD buf_tOCTVC1_HW_MSG_RF_PORT_LIST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_LIST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_LIST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* IndexGet */
       0, /* ulIndex */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_HW_MSG_RF_PORT_LIST_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_LIST_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_LIST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_LIST_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_LIST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_LIST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_LIST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD buf_tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* SubIndexGet */
       0, /* ulParentIndex */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST, /* ulGetMode */
       0  /* ulSubIndex */
   }
};

const tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD buf_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   0  /* ulAntennaIndex */
};

const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD buf_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   0  /* ulAntennaIndex */
};

const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD buf_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   0  /* ulAntennaIndex */
};

const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CALIB_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD buf_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   0, /* ulAntennaIndex */
   0  /* ulActivateFlag */
};

const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CALIB_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD =
    &buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulResetStatsFlag */
};

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD =
    &buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD buf_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   0, /* ulAntennaIndex */
   0, /* ulRelativeGainFlag */
   cOCTVC1_DO_NOT_MODIFY  /* lRxGaindB */
};

const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_RX_CONFIG_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD buf_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   0, /* ulAntennaIndex */
   0, /* ulRelativeGainFlag */
   cOCTVC1_DO_NOT_MODIFY  /* lTxGaindB */
};

const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_TX_CONFIG_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD buf_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   0  /* ulAntennaIndex */
};

const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_FRONT_END_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD buf_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   0, /* ulAntennaIndex */
   0, /* lTxGaindB */
   0, /* lRxGaindB */
   0, /* ulTxPathDelayNs */
   0  /* ulRxPathDelayNs */
};

const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD =
    &buf_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_RF_PORT_MODIFY_ANTENNA_FRONT_END_CMD; \
    }


#ifdef __cplusplus
}
#endif

#endif /* __OCTVC1_HW_DEFAULT_H__ */

