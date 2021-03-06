/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_HW_DEFAULT_PRIV.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.11.00-B1927 (2018/04/27)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_HW_DEFAULT_PRIV_H__
#define __OCTVC1_HW_DEFAULT_PRIV_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_hw_api_priv.h"
#include "octvc1_hw_default.h"

/*****************************  COMMAND DEFAULT *****************************/

/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD buf_tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulPortIndex */
   cOCTVC1_HW_PRIVATE_API_CMD_PASSWORD  /* ulPassword */
};

const tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD =
    &buf_tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_ETH_PORT_RESTRICTED_UNBLOCK_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulClkSourceRef */
   0x00007600, /* ulDacInitValue */
   7, /* ulSyncWindowSize */
   10, /* lSyncThreshold */
   0, /* ulFrequencyCorrectionFlag */
   40  /* ulMaxDriftDurationUs */
};

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD =
    &buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_START_SYNCHRO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD =
    &buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STOP_SYNCHRO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulState */
   0  /* ulDacState */
};

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD =
    &buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SYNCHRO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulResetStatsFlag */
};

const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD =
    &buf_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_EXT_CMD; \
    }


#ifdef __cplusplus
}
#endif

#endif /* __OCTVC1_HW_DEFAULT_PRIV_H__ */

