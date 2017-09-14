/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_GSM_DEFAULT.h

Copyright (c) 2017 Octasic Inc. All rights reserved.

Description: Contains the event definition of the GSM API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.08.00-B1418 (2017/03/21)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_GSM_DEFAULT_H__
#define __OCTVC1_GSM_DEFAULT_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_gsm_api.h"

/*****************************  COMMAND DEFAULT *****************************/

/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_OPEN_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_OPEN_CMD buf_tOCTVC1_GSM_MSG_TRX_OPEN_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_OPEN_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_OPEN_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulRfPortIndex */
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* Config */
       0, /* ulBand */
       0, /* usTsc */
       0, /* usArfcn */
       0, /* usBcchArfcn */
       0, /* usCentreArfcn */
       0, /* usHsn */
       0, /* usMaio */
       { /* ausReserve */
           0, /* ausReserve[0] */
           0  /* ausReserve[1] */
       },
       0, /* ulHoppingFlag */
       0, /* ulHoppingListLength */
       { /* ausHoppingList */
           0, /* ausHoppingList[0] */
           0, /* ausHoppingList[1] */
           0, /* ausHoppingList[2] */
           0, /* ausHoppingList[3] */
           0, /* ausHoppingList[4] */
           0, /* ausHoppingList[5] */
           0, /* ausHoppingList[6] */
           0, /* ausHoppingList[7] */
           0, /* ausHoppingList[8] */
           0, /* ausHoppingList[9] */
           0, /* ausHoppingList[10] */
           0, /* ausHoppingList[11] */
           0, /* ausHoppingList[12] */
           0, /* ausHoppingList[13] */
           0, /* ausHoppingList[14] */
           0, /* ausHoppingList[15] */
           0, /* ausHoppingList[16] */
           0, /* ausHoppingList[17] */
           0, /* ausHoppingList[18] */
           0, /* ausHoppingList[19] */
           0, /* ausHoppingList[20] */
           0, /* ausHoppingList[21] */
           0, /* ausHoppingList[22] */
           0, /* ausHoppingList[23] */
           0, /* ausHoppingList[24] */
           0, /* ausHoppingList[25] */
           0, /* ausHoppingList[26] */
           0, /* ausHoppingList[27] */
           0, /* ausHoppingList[28] */
           0, /* ausHoppingList[29] */
           0, /* ausHoppingList[30] */
           0, /* ausHoppingList[31] */
           0, /* ausHoppingList[32] */
           0, /* ausHoppingList[33] */
           0, /* ausHoppingList[34] */
           0, /* ausHoppingList[35] */
           0, /* ausHoppingList[36] */
           0, /* ausHoppingList[37] */
           0, /* ausHoppingList[38] */
           0, /* ausHoppingList[39] */
           0, /* ausHoppingList[40] */
           0, /* ausHoppingList[41] */
           0, /* ausHoppingList[42] */
           0, /* ausHoppingList[43] */
           0, /* ausHoppingList[44] */
           0, /* ausHoppingList[45] */
           0, /* ausHoppingList[46] */
           0, /* ausHoppingList[47] */
           0, /* ausHoppingList[48] */
           0, /* ausHoppingList[49] */
           0, /* ausHoppingList[50] */
           0, /* ausHoppingList[51] */
           0, /* ausHoppingList[52] */
           0, /* ausHoppingList[53] */
           0, /* ausHoppingList[54] */
           0, /* ausHoppingList[55] */
           0, /* ausHoppingList[56] */
           0, /* ausHoppingList[57] */
           0, /* ausHoppingList[58] */
           0, /* ausHoppingList[59] */
           0, /* ausHoppingList[60] */
           0, /* ausHoppingList[61] */
           0, /* ausHoppingList[62] */
           0  /* ausHoppingList[63] */
       }
   },
   { /* RfConfig */
       70, /* ulRxGainDb */
       0, /* ulTxAttndB */
       0, /* ulTxAntennaId */
       0  /* ulRxAntennaId */
   }
};

const tOCTVC1_GSM_MSG_TRX_OPEN_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_OPEN_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_OPEN_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_OPEN_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_OPEN_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_OPEN_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_OPEN_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_CLOSE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_CLOSE_CMD buf_tOCTVC1_GSM_MSG_TRX_CLOSE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_CLOSE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_CLOSE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_CLOSE_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_CLOSE_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_CLOSE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_CLOSE_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_CLOSE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_CLOSE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_CLOSE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_STATUS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_STATUS_CMD buf_tOCTVC1_GSM_MSG_TRX_STATUS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_STATUS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_STATUS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   0  /* ulResetFlag */
};

const tOCTVC1_GSM_MSG_TRX_STATUS_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STATUS_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_STATUS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_STATUS_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STATUS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_STATUS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STATUS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_INFO_CMD buf_tOCTVC1_GSM_MSG_TRX_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_INFO_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_INFO_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_RESET_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_RESET_CMD buf_tOCTVC1_GSM_MSG_TRX_RESET_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_RESET_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_RESET_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_RESET_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_RESET_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_RESET_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_RESET_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_RESET_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_RESET_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_RESET_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_MODIFY_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_MODIFY_CMD buf_tOCTVC1_GSM_MSG_TRX_MODIFY_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_MODIFY_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_MODIFY_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* Config */
       cOCTVC1_DO_NOT_MODIFY, /* ulBand */
       (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* usTsc */
       (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* usArfcn */
       (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* usBcchArfcn */
       (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* usCentreArfcn */
       (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* usHsn */
       (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* usMaio */
       { /* ausReserve */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausReserve[0] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF)  /* ausReserve[1] */
       },
       cOCTVC1_DO_NOT_MODIFY, /* ulHoppingFlag */
       cOCTVC1_DO_NOT_MODIFY, /* ulHoppingListLength */
       { /* ausHoppingList */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[0] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[1] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[2] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[3] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[4] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[5] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[6] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[7] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[8] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[9] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[10] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[11] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[12] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[13] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[14] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[15] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[16] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[17] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[18] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[19] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[20] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[21] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[22] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[23] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[24] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[25] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[26] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[27] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[28] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[29] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[30] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[31] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[32] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[33] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[34] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[35] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[36] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[37] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[38] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[39] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[40] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[41] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[42] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[43] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[44] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[45] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[46] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[47] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[48] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[49] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[50] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[51] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[52] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[53] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[54] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[55] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[56] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[57] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[58] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[59] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[60] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[61] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF), /* ausHoppingList[62] */
           (cOCTVC1_DO_NOT_MODIFY & 0xFFFF)  /* ausHoppingList[63] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_MODIFY_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_MODIFY_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_MODIFY_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_MODIFY_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_LIST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_LIST_CMD buf_tOCTVC1_GSM_MSG_TRX_LIST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_LIST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_LIST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxIdCursor */
       { /* TrxId */
           0, /* byTrxId */
           { /* abyPad */
               0, /* abyPad[0] */
               0, /* abyPad[1] */
               0  /* abyPad[2] */
           }
       },
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_GSM_MSG_TRX_LIST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_LIST_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_LIST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_LIST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_LIST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_LIST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_LIST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD buf_tOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_CLOSE_ALL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_START_RECORD_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_START_RECORD_CMD buf_tOCTVC1_GSM_MSG_TRX_START_RECORD_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_START_RECORD_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_START_RECORD_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_START_RECORD_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_START_RECORD_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_START_RECORD_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_START_RECORD_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_START_RECORD_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_START_RECORD_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_START_RECORD_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD buf_tOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_STOP_RECORD_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STOP_RECORD_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   },
   { /* Config */
       0, /* byTimingAdvance */
       0, /* byBSIC */
       0, /* byCmiPhase */
       cOCTVC1_GSM_AMR_CODEC_MODE_ENUM_UNSET, /* byInitRate */
       { /* abyRate */
           cOCTVC1_GSM_AMR_CODEC_MODE_ENUM_UNSET, /* abyRate[0] */
           cOCTVC1_GSM_AMR_CODEC_MODE_ENUM_UNSET, /* abyRate[1] */
           cOCTVC1_GSM_AMR_CODEC_MODE_ENUM_UNSET, /* abyRate[2] */
           cOCTVC1_GSM_AMR_CODEC_MODE_ENUM_UNSET  /* abyRate[3] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_ACTIVATE_LOGICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   }
};

const tOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_DEACTIVATE_LOGICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   }
};

const tOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STATUS_LOGICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   }
};

const tOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_LOGICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* LchIdCursor */
       { /* TrxId */
           0, /* byTrxId */
           { /* abyPad */
               0, /* abyPad[0] */
               0, /* abyPad[1] */
               0  /* abyPad[2] */
           }
       },
       { /* LchId */
           cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
           cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
           0, /* bySAPI */
           0  /* byDirection */
       },
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_LIST_LOGICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD buf_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   },
   0  /* ulFrameNumber */
};

const tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_EMPTY_FRAME_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD buf_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   },
   { /* Data */
       0, /* ulFrameNumber */
       cOCTVC1_GSM_PAYLOAD_TYPE_ENUM_NONE, /* ulPayloadType */
       0, /* ulDataLength */
       { /* abyDataContent */
           0, /* abyDataContent[0] */
           0, /* abyDataContent[1] */
           0, /* abyDataContent[2] */
           0, /* abyDataContent[3] */
           0, /* abyDataContent[4] */
           0, /* abyDataContent[5] */
           0, /* abyDataContent[6] */
           0, /* abyDataContent[7] */
           0, /* abyDataContent[8] */
           0, /* abyDataContent[9] */
           0, /* abyDataContent[10] */
           0, /* abyDataContent[11] */
           0, /* abyDataContent[12] */
           0, /* abyDataContent[13] */
           0, /* abyDataContent[14] */
           0, /* abyDataContent[15] */
           0, /* abyDataContent[16] */
           0, /* abyDataContent[17] */
           0, /* abyDataContent[18] */
           0, /* abyDataContent[19] */
           0, /* abyDataContent[20] */
           0, /* abyDataContent[21] */
           0, /* abyDataContent[22] */
           0, /* abyDataContent[23] */
           0, /* abyDataContent[24] */
           0, /* abyDataContent[25] */
           0, /* abyDataContent[26] */
           0, /* abyDataContent[27] */
           0, /* abyDataContent[28] */
           0, /* abyDataContent[29] */
           0, /* abyDataContent[30] */
           0, /* abyDataContent[31] */
           0, /* abyDataContent[32] */
           0, /* abyDataContent[33] */
           0, /* abyDataContent[34] */
           0, /* abyDataContent[35] */
           0, /* abyDataContent[36] */
           0, /* abyDataContent[37] */
           0, /* abyDataContent[38] */
           0, /* abyDataContent[39] */
           0, /* abyDataContent[40] */
           0, /* abyDataContent[41] */
           0, /* abyDataContent[42] */
           0, /* abyDataContent[43] */
           0, /* abyDataContent[44] */
           0, /* abyDataContent[45] */
           0, /* abyDataContent[46] */
           0, /* abyDataContent[47] */
           0, /* abyDataContent[48] */
           0, /* abyDataContent[49] */
           0, /* abyDataContent[50] */
           0, /* abyDataContent[51] */
           0, /* abyDataContent[52] */
           0, /* abyDataContent[53] */
           0, /* abyDataContent[54] */
           0, /* abyDataContent[55] */
           0, /* abyDataContent[56] */
           0, /* abyDataContent[57] */
           0, /* abyDataContent[58] */
           0, /* abyDataContent[59] */
           0, /* abyDataContent[60] */
           0, /* abyDataContent[61] */
           0, /* abyDataContent[62] */
           0, /* abyDataContent[63] */
           0, /* abyDataContent[64] */
           0, /* abyDataContent[65] */
           0, /* abyDataContent[66] */
           0, /* abyDataContent[67] */
           0, /* abyDataContent[68] */
           0, /* abyDataContent[69] */
           0, /* abyDataContent[70] */
           0, /* abyDataContent[71] */
           0, /* abyDataContent[72] */
           0, /* abyDataContent[73] */
           0, /* abyDataContent[74] */
           0, /* abyDataContent[75] */
           0, /* abyDataContent[76] */
           0, /* abyDataContent[77] */
           0, /* abyDataContent[78] */
           0, /* abyDataContent[79] */
           0, /* abyDataContent[80] */
           0, /* abyDataContent[81] */
           0, /* abyDataContent[82] */
           0, /* abyDataContent[83] */
           0, /* abyDataContent[84] */
           0, /* abyDataContent[85] */
           0, /* abyDataContent[86] */
           0, /* abyDataContent[87] */
           0, /* abyDataContent[88] */
           0, /* abyDataContent[89] */
           0, /* abyDataContent[90] */
           0, /* abyDataContent[91] */
           0, /* abyDataContent[92] */
           0, /* abyDataContent[93] */
           0, /* abyDataContent[94] */
           0, /* abyDataContent[95] */
           0, /* abyDataContent[96] */
           0, /* abyDataContent[97] */
           0, /* abyDataContent[98] */
           0, /* abyDataContent[99] */
           0, /* abyDataContent[100] */
           0, /* abyDataContent[101] */
           0, /* abyDataContent[102] */
           0, /* abyDataContent[103] */
           0, /* abyDataContent[104] */
           0, /* abyDataContent[105] */
           0, /* abyDataContent[106] */
           0, /* abyDataContent[107] */
           0, /* abyDataContent[108] */
           0, /* abyDataContent[109] */
           0, /* abyDataContent[110] */
           0, /* abyDataContent[111] */
           0, /* abyDataContent[112] */
           0, /* abyDataContent[113] */
           0, /* abyDataContent[114] */
           0, /* abyDataContent[115] */
           0, /* abyDataContent[116] */
           0, /* abyDataContent[117] */
           0, /* abyDataContent[118] */
           0, /* abyDataContent[119] */
           0, /* abyDataContent[120] */
           0, /* abyDataContent[121] */
           0, /* abyDataContent[122] */
           0, /* abyDataContent[123] */
           0, /* abyDataContent[124] */
           0, /* abyDataContent[125] */
           0, /* abyDataContent[126] */
           0, /* abyDataContent[127] */
           0, /* abyDataContent[128] */
           0, /* abyDataContent[129] */
           0, /* abyDataContent[130] */
           0, /* abyDataContent[131] */
           0, /* abyDataContent[132] */
           0, /* abyDataContent[133] */
           0, /* abyDataContent[134] */
           0, /* abyDataContent[135] */
           0, /* abyDataContent[136] */
           0, /* abyDataContent[137] */
           0, /* abyDataContent[138] */
           0, /* abyDataContent[139] */
           0, /* abyDataContent[140] */
           0, /* abyDataContent[141] */
           0, /* abyDataContent[142] */
           0, /* abyDataContent[143] */
           0, /* abyDataContent[144] */
           0, /* abyDataContent[145] */
           0, /* abyDataContent[146] */
           0, /* abyDataContent[147] */
           0, /* abyDataContent[148] */
           0, /* abyDataContent[149] */
           0, /* abyDataContent[150] */
           0, /* abyDataContent[151] */
           0, /* abyDataContent[152] */
           0, /* abyDataContent[153] */
           0, /* abyDataContent[154] */
           0, /* abyDataContent[155] */
           0, /* abyDataContent[156] */
           0, /* abyDataContent[157] */
           0, /* abyDataContent[158] */
           0, /* abyDataContent[159] */
           0, /* abyDataContent[160] */
           0, /* abyDataContent[161] */
           0, /* abyDataContent[162] */
           0, /* abyDataContent[163] */
           0, /* abyDataContent[164] */
           0, /* abyDataContent[165] */
           0, /* abyDataContent[166] */
           0, /* abyDataContent[167] */
           0, /* abyDataContent[168] */
           0, /* abyDataContent[169] */
           0, /* abyDataContent[170] */
           0, /* abyDataContent[171] */
           0, /* abyDataContent[172] */
           0, /* abyDataContent[173] */
           0, /* abyDataContent[174] */
           0, /* abyDataContent[175] */
           0, /* abyDataContent[176] */
           0, /* abyDataContent[177] */
           0, /* abyDataContent[178] */
           0, /* abyDataContent[179] */
           0, /* abyDataContent[180] */
           0, /* abyDataContent[181] */
           0, /* abyDataContent[182] */
           0, /* abyDataContent[183] */
           0, /* abyDataContent[184] */
           0, /* abyDataContent[185] */
           0, /* abyDataContent[186] */
           0, /* abyDataContent[187] */
           0, /* abyDataContent[188] */
           0, /* abyDataContent[189] */
           0, /* abyDataContent[190] */
           0, /* abyDataContent[191] */
           0, /* abyDataContent[192] */
           0, /* abyDataContent[193] */
           0, /* abyDataContent[194] */
           0, /* abyDataContent[195] */
           0, /* abyDataContent[196] */
           0, /* abyDataContent[197] */
           0, /* abyDataContent[198] */
           0, /* abyDataContent[199] */
           0, /* abyDataContent[200] */
           0, /* abyDataContent[201] */
           0, /* abyDataContent[202] */
           0, /* abyDataContent[203] */
           0, /* abyDataContent[204] */
           0, /* abyDataContent[205] */
           0, /* abyDataContent[206] */
           0, /* abyDataContent[207] */
           0, /* abyDataContent[208] */
           0, /* abyDataContent[209] */
           0, /* abyDataContent[210] */
           0, /* abyDataContent[211] */
           0, /* abyDataContent[212] */
           0, /* abyDataContent[213] */
           0, /* abyDataContent[214] */
           0, /* abyDataContent[215] */
           0, /* abyDataContent[216] */
           0, /* abyDataContent[217] */
           0, /* abyDataContent[218] */
           0, /* abyDataContent[219] */
           0, /* abyDataContent[220] */
           0, /* abyDataContent[221] */
           0, /* abyDataContent[222] */
           0, /* abyDataContent[223] */
           0, /* abyDataContent[224] */
           0, /* abyDataContent[225] */
           0, /* abyDataContent[226] */
           0, /* abyDataContent[227] */
           0, /* abyDataContent[228] */
           0, /* abyDataContent[229] */
           0, /* abyDataContent[230] */
           0, /* abyDataContent[231] */
           0, /* abyDataContent[232] */
           0, /* abyDataContent[233] */
           0, /* abyDataContent[234] */
           0, /* abyDataContent[235] */
           0, /* abyDataContent[236] */
           0, /* abyDataContent[237] */
           0, /* abyDataContent[238] */
           0, /* abyDataContent[239] */
           0, /* abyDataContent[240] */
           0, /* abyDataContent[241] */
           0, /* abyDataContent[242] */
           0, /* abyDataContent[243] */
           0, /* abyDataContent[244] */
           0, /* abyDataContent[245] */
           0, /* abyDataContent[246] */
           0, /* abyDataContent[247] */
           0, /* abyDataContent[248] */
           0, /* abyDataContent[249] */
           0, /* abyDataContent[250] */
           0, /* abyDataContent[251] */
           0, /* abyDataContent[252] */
           0, /* abyDataContent[253] */
           0, /* abyDataContent[254] */
           0, /* abyDataContent[255] */
           0, /* abyDataContent[256] */
           0, /* abyDataContent[257] */
           0, /* abyDataContent[258] */
           0, /* abyDataContent[259] */
           0, /* abyDataContent[260] */
           0, /* abyDataContent[261] */
           0, /* abyDataContent[262] */
           0, /* abyDataContent[263] */
           0, /* abyDataContent[264] */
           0, /* abyDataContent[265] */
           0, /* abyDataContent[266] */
           0, /* abyDataContent[267] */
           0, /* abyDataContent[268] */
           0, /* abyDataContent[269] */
           0, /* abyDataContent[270] */
           0, /* abyDataContent[271] */
           0, /* abyDataContent[272] */
           0, /* abyDataContent[273] */
           0, /* abyDataContent[274] */
           0, /* abyDataContent[275] */
           0, /* abyDataContent[276] */
           0, /* abyDataContent[277] */
           0, /* abyDataContent[278] */
           0, /* abyDataContent[279] */
           0, /* abyDataContent[280] */
           0, /* abyDataContent[281] */
           0, /* abyDataContent[282] */
           0, /* abyDataContent[283] */
           0, /* abyDataContent[284] */
           0, /* abyDataContent[285] */
           0, /* abyDataContent[286] */
           0, /* abyDataContent[287] */
           0, /* abyDataContent[288] */
           0, /* abyDataContent[289] */
           0, /* abyDataContent[290] */
           0, /* abyDataContent[291] */
           0, /* abyDataContent[292] */
           0, /* abyDataContent[293] */
           0, /* abyDataContent[294] */
           0, /* abyDataContent[295] */
           0, /* abyDataContent[296] */
           0, /* abyDataContent[297] */
           0, /* abyDataContent[298] */
           0, /* abyDataContent[299] */
           0, /* abyDataContent[300] */
           0, /* abyDataContent[301] */
           0, /* abyDataContent[302] */
           0, /* abyDataContent[303] */
           0, /* abyDataContent[304] */
           0, /* abyDataContent[305] */
           0, /* abyDataContent[306] */
           0, /* abyDataContent[307] */
           0, /* abyDataContent[308] */
           0, /* abyDataContent[309] */
           0, /* abyDataContent[310] */
           0, /* abyDataContent[311] */
           0, /* abyDataContent[312] */
           0, /* abyDataContent[313] */
           0, /* abyDataContent[314] */
           0, /* abyDataContent[315] */
           0, /* abyDataContent[316] */
           0, /* abyDataContent[317] */
           0, /* abyDataContent[318] */
           0, /* abyDataContent[319] */
           0, /* abyDataContent[320] */
           0, /* abyDataContent[321] */
           0, /* abyDataContent[322] */
           0, /* abyDataContent[323] */
           0, /* abyDataContent[324] */
           0, /* abyDataContent[325] */
           0, /* abyDataContent[326] */
           0, /* abyDataContent[327] */
           0, /* abyDataContent[328] */
           0, /* abyDataContent[329] */
           0, /* abyDataContent[330] */
           0, /* abyDataContent[331] */
           0, /* abyDataContent[332] */
           0, /* abyDataContent[333] */
           0, /* abyDataContent[334] */
           0, /* abyDataContent[335] */
           0, /* abyDataContent[336] */
           0, /* abyDataContent[337] */
           0, /* abyDataContent[338] */
           0, /* abyDataContent[339] */
           0, /* abyDataContent[340] */
           0, /* abyDataContent[341] */
           0, /* abyDataContent[342] */
           0, /* abyDataContent[343] */
           0, /* abyDataContent[344] */
           0, /* abyDataContent[345] */
           0, /* abyDataContent[346] */
           0, /* abyDataContent[347] */
           0, /* abyDataContent[348] */
           0, /* abyDataContent[349] */
           0, /* abyDataContent[350] */
           0, /* abyDataContent[351] */
           0, /* abyDataContent[352] */
           0, /* abyDataContent[353] */
           0, /* abyDataContent[354] */
           0, /* abyDataContent[355] */
           0, /* abyDataContent[356] */
           0, /* abyDataContent[357] */
           0, /* abyDataContent[358] */
           0, /* abyDataContent[359] */
           0, /* abyDataContent[360] */
           0, /* abyDataContent[361] */
           0, /* abyDataContent[362] */
           0, /* abyDataContent[363] */
           0, /* abyDataContent[364] */
           0, /* abyDataContent[365] */
           0, /* abyDataContent[366] */
           0, /* abyDataContent[367] */
           0, /* abyDataContent[368] */
           0, /* abyDataContent[369] */
           0, /* abyDataContent[370] */
           0, /* abyDataContent[371] */
           0, /* abyDataContent[372] */
           0, /* abyDataContent[373] */
           0, /* abyDataContent[374] */
           0, /* abyDataContent[375] */
           0, /* abyDataContent[376] */
           0, /* abyDataContent[377] */
           0, /* abyDataContent[378] */
           0, /* abyDataContent[379] */
           0, /* abyDataContent[380] */
           0, /* abyDataContent[381] */
           0, /* abyDataContent[382] */
           0, /* abyDataContent[383] */
           0, /* abyDataContent[384] */
           0, /* abyDataContent[385] */
           0, /* abyDataContent[386] */
           0, /* abyDataContent[387] */
           0, /* abyDataContent[388] */
           0, /* abyDataContent[389] */
           0, /* abyDataContent[390] */
           0, /* abyDataContent[391] */
           0, /* abyDataContent[392] */
           0, /* abyDataContent[393] */
           0, /* abyDataContent[394] */
           0, /* abyDataContent[395] */
           0, /* abyDataContent[396] */
           0, /* abyDataContent[397] */
           0, /* abyDataContent[398] */
           0, /* abyDataContent[399] */
           0, /* abyDataContent[400] */
           0, /* abyDataContent[401] */
           0, /* abyDataContent[402] */
           0, /* abyDataContent[403] */
           0, /* abyDataContent[404] */
           0, /* abyDataContent[405] */
           0, /* abyDataContent[406] */
           0, /* abyDataContent[407] */
           0, /* abyDataContent[408] */
           0, /* abyDataContent[409] */
           0, /* abyDataContent[410] */
           0, /* abyDataContent[411] */
           0, /* abyDataContent[412] */
           0, /* abyDataContent[413] */
           0, /* abyDataContent[414] */
           0, /* abyDataContent[415] */
           0, /* abyDataContent[416] */
           0, /* abyDataContent[417] */
           0, /* abyDataContent[418] */
           0, /* abyDataContent[419] */
           0, /* abyDataContent[420] */
           0, /* abyDataContent[421] */
           0, /* abyDataContent[422] */
           0, /* abyDataContent[423] */
           0, /* abyDataContent[424] */
           0, /* abyDataContent[425] */
           0, /* abyDataContent[426] */
           0, /* abyDataContent[427] */
           0, /* abyDataContent[428] */
           0, /* abyDataContent[429] */
           0, /* abyDataContent[430] */
           0, /* abyDataContent[431] */
           0, /* abyDataContent[432] */
           0, /* abyDataContent[433] */
           0, /* abyDataContent[434] */
           0, /* abyDataContent[435] */
           0, /* abyDataContent[436] */
           0, /* abyDataContent[437] */
           0, /* abyDataContent[438] */
           0, /* abyDataContent[439] */
           0, /* abyDataContent[440] */
           0, /* abyDataContent[441] */
           0, /* abyDataContent[442] */
           0, /* abyDataContent[443] */
           0, /* abyDataContent[444] */
           0, /* abyDataContent[445] */
           0, /* abyDataContent[446] */
           0, /* abyDataContent[447] */
           0, /* abyDataContent[448] */
           0, /* abyDataContent[449] */
           0, /* abyDataContent[450] */
           0, /* abyDataContent[451] */
           0, /* abyDataContent[452] */
           0, /* abyDataContent[453] */
           0, /* abyDataContent[454] */
           0, /* abyDataContent[455] */
           0, /* abyDataContent[456] */
           0, /* abyDataContent[457] */
           0, /* abyDataContent[458] */
           0  /* abyDataContent[459] */
       },
       { /* abyEgprsCrc */
           0, /* abyEgprsCrc[0] */
           0  /* abyEgprsCrc[1] */
       },
       { /* abyPadding */
           0, /* abyPadding[0] */
           0, /* abyPadding[1] */
           0, /* abyPadding[2] */
           0, /* abyPadding[3] */
           0, /* abyPadding[4] */
           0  /* abyPadding[5] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_DATA_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* PchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   0, /* ulChannelType */
   0  /* ulPayloadType */
};

const tOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_ACTIVATE_PHYSICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* PchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_DEACTIVATE_PHYSICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* PchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   0  /* ulResetFlag */
};

const tOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STATUS_PHYSICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* PchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_RESET_PHYSICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* PchIdCursor */
       { /* TrxId */
           0, /* byTrxId */
           { /* abyPad */
               0, /* abyPad[0] */
               0, /* abyPad[1] */
               0  /* abyPad[2] */
           }
       },
       { /* PchId */
           cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
           { /* abyPad */
               0, /* abyPad[0] */
               0, /* abyPad[1] */
               0  /* abyPad[2] */
           }
       },
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_LIST_PHYSICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD buf_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* PchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD buf_tOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* PchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   0, /* ulSubchannelNb */
   0, /* ulDirection */
   { /* Config */
       0, /* ulCipherId */
       { /* abyKey */
           0, /* abyKey[0] */
           0, /* abyKey[1] */
           0, /* abyKey[2] */
           0, /* abyKey[3] */
           0, /* abyKey[4] */
           0, /* abyKey[5] */
           0, /* abyKey[6] */
           0  /* abyKey[7] */
       }
   },
   { /* abyPad */
       0, /* abyPad[0] */
       0, /* abyPad[1] */
       0  /* abyPad[2] */
   }
};

const tOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_PHYSICAL_CHANNEL_CIPHERING_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD buf_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* PchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_CIPHERING_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD buf_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* PchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_PHYSICAL_CHANNEL_MEASUREMENT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_INFO_RF_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_INFO_RF_CMD buf_tOCTVC1_GSM_MSG_TRX_INFO_RF_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_INFO_RF_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_INFO_RF_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_INFO_RF_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_RF_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_INFO_RF_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_INFO_RF_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_RF_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_INFO_RF_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_RF_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD buf_tOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_MODIFY_RF_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* RfConfig */
       cOCTVC1_DO_NOT_MODIFY, /* ulRxGainDb */
       cOCTVC1_DO_NOT_MODIFY, /* ulTxAttndB */
       cOCTVC1_DO_NOT_MODIFY, /* ulTxAntennaId */
       cOCTVC1_DO_NOT_MODIFY  /* ulRxAntennaId */
   }
};

const tOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_RF_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD buf_tOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TAP_FILTER_LIST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* IndexGet */
       0, /* ulIndex */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD =
    &buf_tOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_LIST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD buf_tOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TAP_FILTER_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulFilterIndex */
};

const tOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD =
    &buf_tOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD buf_tOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TAP_FILTER_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulFilterIndex */
};

const tOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD =
    &buf_tOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD buf_tOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulFilterIndex */
   { /* Filter */
       cOCTVC1_GSM_TAP_FILTER_TYPE_ENUM_NONE, /* ulType */
       cOCTVC1_GSM_TAP_FILTER_MASK_NONE, /* ulMask */
       { /* Trx */
           cOCT_FALSE, /* ulAllTrxFlag */
           { /* TrxId */
               0, /* byTrxId */
               { /* abyPad */
                   0, /* abyPad[0] */
                   0, /* abyPad[1] */
                   0  /* abyPad[2] */
               }
           }
       },
       { /* PhysicalChannel */
           0, /* ulEntryCnt */
           { /* aEntry */
               { /* aEntry[0] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* PchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   }
               },
               { /* aEntry[1] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* PchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   }
               },
               { /* aEntry[2] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* PchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   }
               },
               { /* aEntry[3] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* PchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   }
               },
               { /* aEntry[4] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* PchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   }
               },
               { /* aEntry[5] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* PchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   }
               },
               { /* aEntry[6] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* PchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   }
               },
               { /* aEntry[7] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* PchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   }
               }
           }
       },
       { /* LogicalChannel */
           0, /* ulEntryCnt */
           { /* aEntry */
               { /* aEntry[0] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* LchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
                       0, /* bySAPI */
                       0  /* byDirection */
                   }
               },
               { /* aEntry[1] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* LchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
                       0, /* bySAPI */
                       0  /* byDirection */
                   }
               },
               { /* aEntry[2] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* LchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
                       0, /* bySAPI */
                       0  /* byDirection */
                   }
               },
               { /* aEntry[3] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* LchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
                       0, /* bySAPI */
                       0  /* byDirection */
                   }
               },
               { /* aEntry[4] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* LchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
                       0, /* bySAPI */
                       0  /* byDirection */
                   }
               },
               { /* aEntry[5] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* LchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
                       0, /* bySAPI */
                       0  /* byDirection */
                   }
               },
               { /* aEntry[6] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* LchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
                       0, /* bySAPI */
                       0  /* byDirection */
                   }
               },
               { /* aEntry[7] */
                   { /* TrxId */
                       0, /* byTrxId */
                       { /* abyPad */
                           0, /* abyPad[0] */
                           0, /* abyPad[1] */
                           0  /* abyPad[2] */
                       }
                   },
                   { /* LchId */
                       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
                       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
                       0, /* bySAPI */
                       0  /* byDirection */
                   }
               }
           }
       }
   }
};

const tOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD =
    &buf_tOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TAP_FILTER_MODIFY_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD buf_tOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   }
};

const tOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_START_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD buf_tOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   }
};

const tOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STOP_LOGICAL_CHANNEL_RAW_DATA_INDICATIONS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD buf_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   },
   0  /* ulResetFlag */
};

const tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_REQUEST_LOGICAL_CHANNEL_CMU_LOOPBACK_TEST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD buf_tOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_STUBB_LOOPBACK_TEST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD buf_tOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* STUB_CHANNEL_ID */
       cOCTVC1_GSM_TIMESLOT_NB_STUB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       cOCTVC1_GSM_SAPI_ENUM_TCHF, /* bySAPI */
       cOCTVC1_GSM_STUB_MODE_ENUM_NONE  /* byStubMode */
   }
};

const tOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_START_STUBB_LOOPBACK_TEST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD buf_tOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   0, /* byTimeslotNb */
   0, /* bySubChannelNb */
   0  /* byStubMode */
};

const tOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_STOP_STUBB_LOOPBACK_TEST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD buf_tOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   0, /* testModeVal */
   0, /* modulation */
   { /* abyBurstType */
       cOCTVC1_GSM_TEST_MODE_BURST_TYPE_ENUM_DATA_RAND, /* abyBurstType[0] */
       cOCTVC1_GSM_TEST_MODE_BURST_TYPE_ENUM_DATA_RAND, /* abyBurstType[1] */
       cOCTVC1_GSM_TEST_MODE_BURST_TYPE_ENUM_DATA_RAND, /* abyBurstType[2] */
       cOCTVC1_GSM_TEST_MODE_BURST_TYPE_ENUM_DATA_RAND, /* abyBurstType[3] */
       cOCTVC1_GSM_TEST_MODE_BURST_TYPE_ENUM_DATA_RAND, /* abyBurstType[4] */
       cOCTVC1_GSM_TEST_MODE_BURST_TYPE_ENUM_DATA_RAND, /* abyBurstType[5] */
       cOCTVC1_GSM_TEST_MODE_BURST_TYPE_ENUM_DATA_RAND, /* abyBurstType[6] */
       cOCTVC1_GSM_TEST_MODE_BURST_TYPE_ENUM_DATA_RAND  /* abyBurstType[7] */
   }
};

const tOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_MODIFY_TEST_MODE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD buf_tOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD =
    &buf_tOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_INFO_TEST_MODE_CMD; \
    }


/*****************************  MODULE_DATA  *************************************/

/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA buf_tOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA =
{
   { /* ModuleData */
       (cOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MID), /* ulModuleDataId */
       (sizeof(tOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA)), /* ulModuleDataSize */
       0, /* hLogicalObj */
       0  /* ulTimestamp */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   },
   0, /* ulAntennaIndex */
   0, /* ulFrameNumber */
   0, /* ulPower */
   0, /* ulDataSizeInBytes */
   0, /* byBadFlag */
   0, /* byBurstId */
   0, /* byReserved0 */
   0  /* byReserved1 */
};

const tOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA *g_pOctDef_tOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA =
    &buf_tOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA *g_pOctDef_tOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_UPLINK_RF_INPUT_DATA_LOGICAL_CHANNEL_MDA; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA buf_tOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA =
{
   { /* ModuleData */
       (cOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MID), /* ulModuleDataId */
       (sizeof(tOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA)), /* ulModuleDataSize */
       0, /* hLogicalObj */
       0  /* ulTimestamp */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   },
   0  /* ulFrameNumber */
};

const tOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA *g_pOctDef_tOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA =
    &buf_tOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA *g_pOctDef_tOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_EMPTY_FRAME_LOGICAL_CHANNEL_MDA; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA buf_tOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA =
{
   { /* ModuleData */
       (cOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MID), /* ulModuleDataId */
       (sizeof(tOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA)), /* ulModuleDataSize */
       0, /* hLogicalObj */
       0  /* ulTimestamp */
   },
   { /* TrxId */
       0, /* byTrxId */
       { /* abyPad */
           0, /* abyPad[0] */
           0, /* abyPad[1] */
           0  /* abyPad[2] */
       }
   },
   { /* LchId */
       cOCTVC1_GSM_ID_TIMESLOT_NB_ENUM_0, /* byTimeslotNb */
       cOCTVC1_GSM_ID_SUB_CHANNEL_NB_ENUM_0, /* bySubChannelNb */
       0, /* bySAPI */
       0  /* byDirection */
   },
   { /* Data */
       0, /* ulFrameNumber */
       cOCTVC1_GSM_PAYLOAD_TYPE_ENUM_NONE, /* ulPayloadType */
       0, /* ulDataLength */
       { /* abyDataContent */
           0, /* abyDataContent[0] */
           0, /* abyDataContent[1] */
           0, /* abyDataContent[2] */
           0, /* abyDataContent[3] */
           0, /* abyDataContent[4] */
           0, /* abyDataContent[5] */
           0, /* abyDataContent[6] */
           0, /* abyDataContent[7] */
           0, /* abyDataContent[8] */
           0, /* abyDataContent[9] */
           0, /* abyDataContent[10] */
           0, /* abyDataContent[11] */
           0, /* abyDataContent[12] */
           0, /* abyDataContent[13] */
           0, /* abyDataContent[14] */
           0, /* abyDataContent[15] */
           0, /* abyDataContent[16] */
           0, /* abyDataContent[17] */
           0, /* abyDataContent[18] */
           0, /* abyDataContent[19] */
           0, /* abyDataContent[20] */
           0, /* abyDataContent[21] */
           0, /* abyDataContent[22] */
           0, /* abyDataContent[23] */
           0, /* abyDataContent[24] */
           0, /* abyDataContent[25] */
           0, /* abyDataContent[26] */
           0, /* abyDataContent[27] */
           0, /* abyDataContent[28] */
           0, /* abyDataContent[29] */
           0, /* abyDataContent[30] */
           0, /* abyDataContent[31] */
           0, /* abyDataContent[32] */
           0, /* abyDataContent[33] */
           0, /* abyDataContent[34] */
           0, /* abyDataContent[35] */
           0, /* abyDataContent[36] */
           0, /* abyDataContent[37] */
           0, /* abyDataContent[38] */
           0, /* abyDataContent[39] */
           0, /* abyDataContent[40] */
           0, /* abyDataContent[41] */
           0, /* abyDataContent[42] */
           0, /* abyDataContent[43] */
           0, /* abyDataContent[44] */
           0, /* abyDataContent[45] */
           0, /* abyDataContent[46] */
           0, /* abyDataContent[47] */
           0, /* abyDataContent[48] */
           0, /* abyDataContent[49] */
           0, /* abyDataContent[50] */
           0, /* abyDataContent[51] */
           0, /* abyDataContent[52] */
           0, /* abyDataContent[53] */
           0, /* abyDataContent[54] */
           0, /* abyDataContent[55] */
           0, /* abyDataContent[56] */
           0, /* abyDataContent[57] */
           0, /* abyDataContent[58] */
           0, /* abyDataContent[59] */
           0, /* abyDataContent[60] */
           0, /* abyDataContent[61] */
           0, /* abyDataContent[62] */
           0, /* abyDataContent[63] */
           0, /* abyDataContent[64] */
           0, /* abyDataContent[65] */
           0, /* abyDataContent[66] */
           0, /* abyDataContent[67] */
           0, /* abyDataContent[68] */
           0, /* abyDataContent[69] */
           0, /* abyDataContent[70] */
           0, /* abyDataContent[71] */
           0, /* abyDataContent[72] */
           0, /* abyDataContent[73] */
           0, /* abyDataContent[74] */
           0, /* abyDataContent[75] */
           0, /* abyDataContent[76] */
           0, /* abyDataContent[77] */
           0, /* abyDataContent[78] */
           0, /* abyDataContent[79] */
           0, /* abyDataContent[80] */
           0, /* abyDataContent[81] */
           0, /* abyDataContent[82] */
           0, /* abyDataContent[83] */
           0, /* abyDataContent[84] */
           0, /* abyDataContent[85] */
           0, /* abyDataContent[86] */
           0, /* abyDataContent[87] */
           0, /* abyDataContent[88] */
           0, /* abyDataContent[89] */
           0, /* abyDataContent[90] */
           0, /* abyDataContent[91] */
           0, /* abyDataContent[92] */
           0, /* abyDataContent[93] */
           0, /* abyDataContent[94] */
           0, /* abyDataContent[95] */
           0, /* abyDataContent[96] */
           0, /* abyDataContent[97] */
           0, /* abyDataContent[98] */
           0, /* abyDataContent[99] */
           0, /* abyDataContent[100] */
           0, /* abyDataContent[101] */
           0, /* abyDataContent[102] */
           0, /* abyDataContent[103] */
           0, /* abyDataContent[104] */
           0, /* abyDataContent[105] */
           0, /* abyDataContent[106] */
           0, /* abyDataContent[107] */
           0, /* abyDataContent[108] */
           0, /* abyDataContent[109] */
           0, /* abyDataContent[110] */
           0, /* abyDataContent[111] */
           0, /* abyDataContent[112] */
           0, /* abyDataContent[113] */
           0, /* abyDataContent[114] */
           0, /* abyDataContent[115] */
           0, /* abyDataContent[116] */
           0, /* abyDataContent[117] */
           0, /* abyDataContent[118] */
           0, /* abyDataContent[119] */
           0, /* abyDataContent[120] */
           0, /* abyDataContent[121] */
           0, /* abyDataContent[122] */
           0, /* abyDataContent[123] */
           0, /* abyDataContent[124] */
           0, /* abyDataContent[125] */
           0, /* abyDataContent[126] */
           0, /* abyDataContent[127] */
           0, /* abyDataContent[128] */
           0, /* abyDataContent[129] */
           0, /* abyDataContent[130] */
           0, /* abyDataContent[131] */
           0, /* abyDataContent[132] */
           0, /* abyDataContent[133] */
           0, /* abyDataContent[134] */
           0, /* abyDataContent[135] */
           0, /* abyDataContent[136] */
           0, /* abyDataContent[137] */
           0, /* abyDataContent[138] */
           0, /* abyDataContent[139] */
           0, /* abyDataContent[140] */
           0, /* abyDataContent[141] */
           0, /* abyDataContent[142] */
           0, /* abyDataContent[143] */
           0, /* abyDataContent[144] */
           0, /* abyDataContent[145] */
           0, /* abyDataContent[146] */
           0, /* abyDataContent[147] */
           0, /* abyDataContent[148] */
           0, /* abyDataContent[149] */
           0, /* abyDataContent[150] */
           0, /* abyDataContent[151] */
           0, /* abyDataContent[152] */
           0, /* abyDataContent[153] */
           0, /* abyDataContent[154] */
           0, /* abyDataContent[155] */
           0, /* abyDataContent[156] */
           0, /* abyDataContent[157] */
           0, /* abyDataContent[158] */
           0, /* abyDataContent[159] */
           0, /* abyDataContent[160] */
           0, /* abyDataContent[161] */
           0, /* abyDataContent[162] */
           0, /* abyDataContent[163] */
           0, /* abyDataContent[164] */
           0, /* abyDataContent[165] */
           0, /* abyDataContent[166] */
           0, /* abyDataContent[167] */
           0, /* abyDataContent[168] */
           0, /* abyDataContent[169] */
           0, /* abyDataContent[170] */
           0, /* abyDataContent[171] */
           0, /* abyDataContent[172] */
           0, /* abyDataContent[173] */
           0, /* abyDataContent[174] */
           0, /* abyDataContent[175] */
           0, /* abyDataContent[176] */
           0, /* abyDataContent[177] */
           0, /* abyDataContent[178] */
           0, /* abyDataContent[179] */
           0, /* abyDataContent[180] */
           0, /* abyDataContent[181] */
           0, /* abyDataContent[182] */
           0, /* abyDataContent[183] */
           0, /* abyDataContent[184] */
           0, /* abyDataContent[185] */
           0, /* abyDataContent[186] */
           0, /* abyDataContent[187] */
           0, /* abyDataContent[188] */
           0, /* abyDataContent[189] */
           0, /* abyDataContent[190] */
           0, /* abyDataContent[191] */
           0, /* abyDataContent[192] */
           0, /* abyDataContent[193] */
           0, /* abyDataContent[194] */
           0, /* abyDataContent[195] */
           0, /* abyDataContent[196] */
           0, /* abyDataContent[197] */
           0, /* abyDataContent[198] */
           0, /* abyDataContent[199] */
           0, /* abyDataContent[200] */
           0, /* abyDataContent[201] */
           0, /* abyDataContent[202] */
           0, /* abyDataContent[203] */
           0, /* abyDataContent[204] */
           0, /* abyDataContent[205] */
           0, /* abyDataContent[206] */
           0, /* abyDataContent[207] */
           0, /* abyDataContent[208] */
           0, /* abyDataContent[209] */
           0, /* abyDataContent[210] */
           0, /* abyDataContent[211] */
           0, /* abyDataContent[212] */
           0, /* abyDataContent[213] */
           0, /* abyDataContent[214] */
           0, /* abyDataContent[215] */
           0, /* abyDataContent[216] */
           0, /* abyDataContent[217] */
           0, /* abyDataContent[218] */
           0, /* abyDataContent[219] */
           0, /* abyDataContent[220] */
           0, /* abyDataContent[221] */
           0, /* abyDataContent[222] */
           0, /* abyDataContent[223] */
           0, /* abyDataContent[224] */
           0, /* abyDataContent[225] */
           0, /* abyDataContent[226] */
           0, /* abyDataContent[227] */
           0, /* abyDataContent[228] */
           0, /* abyDataContent[229] */
           0, /* abyDataContent[230] */
           0, /* abyDataContent[231] */
           0, /* abyDataContent[232] */
           0, /* abyDataContent[233] */
           0, /* abyDataContent[234] */
           0, /* abyDataContent[235] */
           0, /* abyDataContent[236] */
           0, /* abyDataContent[237] */
           0, /* abyDataContent[238] */
           0, /* abyDataContent[239] */
           0, /* abyDataContent[240] */
           0, /* abyDataContent[241] */
           0, /* abyDataContent[242] */
           0, /* abyDataContent[243] */
           0, /* abyDataContent[244] */
           0, /* abyDataContent[245] */
           0, /* abyDataContent[246] */
           0, /* abyDataContent[247] */
           0, /* abyDataContent[248] */
           0, /* abyDataContent[249] */
           0, /* abyDataContent[250] */
           0, /* abyDataContent[251] */
           0, /* abyDataContent[252] */
           0, /* abyDataContent[253] */
           0, /* abyDataContent[254] */
           0, /* abyDataContent[255] */
           0, /* abyDataContent[256] */
           0, /* abyDataContent[257] */
           0, /* abyDataContent[258] */
           0, /* abyDataContent[259] */
           0, /* abyDataContent[260] */
           0, /* abyDataContent[261] */
           0, /* abyDataContent[262] */
           0, /* abyDataContent[263] */
           0, /* abyDataContent[264] */
           0, /* abyDataContent[265] */
           0, /* abyDataContent[266] */
           0, /* abyDataContent[267] */
           0, /* abyDataContent[268] */
           0, /* abyDataContent[269] */
           0, /* abyDataContent[270] */
           0, /* abyDataContent[271] */
           0, /* abyDataContent[272] */
           0, /* abyDataContent[273] */
           0, /* abyDataContent[274] */
           0, /* abyDataContent[275] */
           0, /* abyDataContent[276] */
           0, /* abyDataContent[277] */
           0, /* abyDataContent[278] */
           0, /* abyDataContent[279] */
           0, /* abyDataContent[280] */
           0, /* abyDataContent[281] */
           0, /* abyDataContent[282] */
           0, /* abyDataContent[283] */
           0, /* abyDataContent[284] */
           0, /* abyDataContent[285] */
           0, /* abyDataContent[286] */
           0, /* abyDataContent[287] */
           0, /* abyDataContent[288] */
           0, /* abyDataContent[289] */
           0, /* abyDataContent[290] */
           0, /* abyDataContent[291] */
           0, /* abyDataContent[292] */
           0, /* abyDataContent[293] */
           0, /* abyDataContent[294] */
           0, /* abyDataContent[295] */
           0, /* abyDataContent[296] */
           0, /* abyDataContent[297] */
           0, /* abyDataContent[298] */
           0, /* abyDataContent[299] */
           0, /* abyDataContent[300] */
           0, /* abyDataContent[301] */
           0, /* abyDataContent[302] */
           0, /* abyDataContent[303] */
           0, /* abyDataContent[304] */
           0, /* abyDataContent[305] */
           0, /* abyDataContent[306] */
           0, /* abyDataContent[307] */
           0, /* abyDataContent[308] */
           0, /* abyDataContent[309] */
           0, /* abyDataContent[310] */
           0, /* abyDataContent[311] */
           0, /* abyDataContent[312] */
           0, /* abyDataContent[313] */
           0, /* abyDataContent[314] */
           0, /* abyDataContent[315] */
           0, /* abyDataContent[316] */
           0, /* abyDataContent[317] */
           0, /* abyDataContent[318] */
           0, /* abyDataContent[319] */
           0, /* abyDataContent[320] */
           0, /* abyDataContent[321] */
           0, /* abyDataContent[322] */
           0, /* abyDataContent[323] */
           0, /* abyDataContent[324] */
           0, /* abyDataContent[325] */
           0, /* abyDataContent[326] */
           0, /* abyDataContent[327] */
           0, /* abyDataContent[328] */
           0, /* abyDataContent[329] */
           0, /* abyDataContent[330] */
           0, /* abyDataContent[331] */
           0, /* abyDataContent[332] */
           0, /* abyDataContent[333] */
           0, /* abyDataContent[334] */
           0, /* abyDataContent[335] */
           0, /* abyDataContent[336] */
           0, /* abyDataContent[337] */
           0, /* abyDataContent[338] */
           0, /* abyDataContent[339] */
           0, /* abyDataContent[340] */
           0, /* abyDataContent[341] */
           0, /* abyDataContent[342] */
           0, /* abyDataContent[343] */
           0, /* abyDataContent[344] */
           0, /* abyDataContent[345] */
           0, /* abyDataContent[346] */
           0, /* abyDataContent[347] */
           0, /* abyDataContent[348] */
           0, /* abyDataContent[349] */
           0, /* abyDataContent[350] */
           0, /* abyDataContent[351] */
           0, /* abyDataContent[352] */
           0, /* abyDataContent[353] */
           0, /* abyDataContent[354] */
           0, /* abyDataContent[355] */
           0, /* abyDataContent[356] */
           0, /* abyDataContent[357] */
           0, /* abyDataContent[358] */
           0, /* abyDataContent[359] */
           0, /* abyDataContent[360] */
           0, /* abyDataContent[361] */
           0, /* abyDataContent[362] */
           0, /* abyDataContent[363] */
           0, /* abyDataContent[364] */
           0, /* abyDataContent[365] */
           0, /* abyDataContent[366] */
           0, /* abyDataContent[367] */
           0, /* abyDataContent[368] */
           0, /* abyDataContent[369] */
           0, /* abyDataContent[370] */
           0, /* abyDataContent[371] */
           0, /* abyDataContent[372] */
           0, /* abyDataContent[373] */
           0, /* abyDataContent[374] */
           0, /* abyDataContent[375] */
           0, /* abyDataContent[376] */
           0, /* abyDataContent[377] */
           0, /* abyDataContent[378] */
           0, /* abyDataContent[379] */
           0, /* abyDataContent[380] */
           0, /* abyDataContent[381] */
           0, /* abyDataContent[382] */
           0, /* abyDataContent[383] */
           0, /* abyDataContent[384] */
           0, /* abyDataContent[385] */
           0, /* abyDataContent[386] */
           0, /* abyDataContent[387] */
           0, /* abyDataContent[388] */
           0, /* abyDataContent[389] */
           0, /* abyDataContent[390] */
           0, /* abyDataContent[391] */
           0, /* abyDataContent[392] */
           0, /* abyDataContent[393] */
           0, /* abyDataContent[394] */
           0, /* abyDataContent[395] */
           0, /* abyDataContent[396] */
           0, /* abyDataContent[397] */
           0, /* abyDataContent[398] */
           0, /* abyDataContent[399] */
           0, /* abyDataContent[400] */
           0, /* abyDataContent[401] */
           0, /* abyDataContent[402] */
           0, /* abyDataContent[403] */
           0, /* abyDataContent[404] */
           0, /* abyDataContent[405] */
           0, /* abyDataContent[406] */
           0, /* abyDataContent[407] */
           0, /* abyDataContent[408] */
           0, /* abyDataContent[409] */
           0, /* abyDataContent[410] */
           0, /* abyDataContent[411] */
           0, /* abyDataContent[412] */
           0, /* abyDataContent[413] */
           0, /* abyDataContent[414] */
           0, /* abyDataContent[415] */
           0, /* abyDataContent[416] */
           0, /* abyDataContent[417] */
           0, /* abyDataContent[418] */
           0, /* abyDataContent[419] */
           0, /* abyDataContent[420] */
           0, /* abyDataContent[421] */
           0, /* abyDataContent[422] */
           0, /* abyDataContent[423] */
           0, /* abyDataContent[424] */
           0, /* abyDataContent[425] */
           0, /* abyDataContent[426] */
           0, /* abyDataContent[427] */
           0, /* abyDataContent[428] */
           0, /* abyDataContent[429] */
           0, /* abyDataContent[430] */
           0, /* abyDataContent[431] */
           0, /* abyDataContent[432] */
           0, /* abyDataContent[433] */
           0, /* abyDataContent[434] */
           0, /* abyDataContent[435] */
           0, /* abyDataContent[436] */
           0, /* abyDataContent[437] */
           0, /* abyDataContent[438] */
           0, /* abyDataContent[439] */
           0, /* abyDataContent[440] */
           0, /* abyDataContent[441] */
           0, /* abyDataContent[442] */
           0, /* abyDataContent[443] */
           0, /* abyDataContent[444] */
           0, /* abyDataContent[445] */
           0, /* abyDataContent[446] */
           0, /* abyDataContent[447] */
           0, /* abyDataContent[448] */
           0, /* abyDataContent[449] */
           0, /* abyDataContent[450] */
           0, /* abyDataContent[451] */
           0, /* abyDataContent[452] */
           0, /* abyDataContent[453] */
           0, /* abyDataContent[454] */
           0, /* abyDataContent[455] */
           0, /* abyDataContent[456] */
           0, /* abyDataContent[457] */
           0, /* abyDataContent[458] */
           0  /* abyDataContent[459] */
       },
       { /* abyEgprsCrc */
           0, /* abyEgprsCrc[0] */
           0  /* abyEgprsCrc[1] */
       },
       { /* abyPadding */
           0, /* abyPadding[0] */
           0, /* abyPadding[1] */
           0, /* abyPadding[2] */
           0, /* abyPadding[3] */
           0, /* abyPadding[4] */
           0  /* abyPadding[5] */
       }
   }
};

const tOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA *g_pOctDef_tOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA =
    &buf_tOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA *g_pOctDef_tOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_GSM_MSG_TRX_DATA_LOGICAL_CHANNEL_MDA; \
    }


#endif /* __OCTVC1_GSM_DEFAULT_H__ */

