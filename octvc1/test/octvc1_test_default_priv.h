/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_TEST_DEFAULT_PRIV.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

Description: Contains the event definition of the TEST API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.03.00-B560 (2015/08/07)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_TEST_DEFAULT_PRIV_H__
#define __OCTVC1_TEST_DEFAULT_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_test_api_priv.h"
#include "octvc1_test_default.h"

/*****************************  COMMAND DEFAULT *****************************/

/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_DESCR_LIST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_DESCR_LIST_CMD buf_tOCTVC1_TEST_MSG_DESCR_LIST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_DESCR_LIST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_DESCR_LIST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_TEST_MSG_DESCR_LIST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_LIST_CMD =
    &buf_tOCTVC1_TEST_MSG_DESCR_LIST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_DESCR_LIST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_LIST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_DESCR_LIST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_LIST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_DESCR_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_DESCR_INFO_CMD buf_tOCTVC1_TEST_MSG_DESCR_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_DESCR_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_DESCR_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* hDescr */
};

const tOCTVC1_TEST_MSG_DESCR_INFO_CMD *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_INFO_CMD =
    &buf_tOCTVC1_TEST_MSG_DESCR_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_DESCR_INFO_CMD *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_DESCR_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD buf_tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* szName */
       0, /* szName[0..31] */
   }
};

const tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD =
    &buf_tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_INFO_BY_NAME_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_DESCR_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_DESCR_STATS_CMD buf_tOCTVC1_TEST_MSG_DESCR_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_DESCR_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_DESCR_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* hDescr */
};

const tOCTVC1_TEST_MSG_DESCR_STATS_CMD *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_STATS_CMD =
    &buf_tOCTVC1_TEST_MSG_DESCR_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_DESCR_STATS_CMD *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_DESCR_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_DESCR_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_START_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_START_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID, /* hDescr */
   { /* Parms */
       { /* ahObj */
           0, /* ahObj[0] */
           0, /* ahObj[1] */
           0, /* ahObj[2] */
           0, /* ahObj[3] */
           0, /* ahObj[4] */
           0, /* ahObj[5] */
           0, /* ahObj[6] */
           0  /* ahObj[7] */
       },
       { /* szParms */
           0, /* szParms[0..511] */
       }
   }
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_ADD_TEST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hTest */
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_REMOVE_TEST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_LIST_TEST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hTest */
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_INFO_TEST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hTest */
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STATS_TEST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hTest */
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_START_TEST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hTest */
};

const tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD =
    &buf_tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_TEST_MSG_RUNNER_SERVER_STOP_TEST_CMD; \
    }


#endif /* __OCTVC1_TEST_DEFAULT_PRIV_H__ */

