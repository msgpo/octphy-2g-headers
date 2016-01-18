/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_IRSC_DEFAULT.h

Copyright (c) 2015 Octasic Inc. All rights reserved.

Description: Contains the event definition of the IRSC API.

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

#ifndef __OCTVC1_IRSC_DEFAULT_H__
#define __OCTVC1_IRSC_DEFAULT_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_irsc_api.h"

/*****************************  COMMAND DEFAULT *****************************/

/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD buf_tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_PROCESS_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hProcess */
};

const tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD =
    &buf_tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_PROCESS_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD buf_tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_PROCESS_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID, /* hProcess */
   0, /* ulResetProcessStatsFlag */
   0, /* ulResetIpcStatsFlag */
   0  /* ulResetTaskStatsFlag */
};

const tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD =
    &buf_tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_PROCESS_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD buf_tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_PROCESS_LIST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD =
    &buf_tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_PROCESS_LIST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_LIST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD buf_tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* hProcess */
   0  /* ulPortId */
};

const tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD =
    &buf_tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_INFO_IPC_PORT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD buf_tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* hProcess */
   0, /* ulPortId */
   0  /* ulResetStatsFlag */
};

const tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD =
    &buf_tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_STATS_IPC_PORT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD buf_tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* SubObjectIdGet */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST, /* ulGetMode */
       0  /* ulSubObjectId */
   }
};

const tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD =
    &buf_tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_LIST_IPC_PORT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD buf_tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* hProcess */
   0  /* ulTaskIndex */
};

const tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD =
    &buf_tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_INFO_TASK_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD buf_tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* hProcess */
   0, /* ulTaskIndex */
   0  /* ulResetStatsFlag */
};

const tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD =
    &buf_tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_STATS_TASK_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD buf_tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* SubObjectIdGet */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST, /* ulGetMode */
       0  /* ulSubObjectId */
   }
};

const tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD =
    &buf_tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_PROCESS_LIST_TASK_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD buf_tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_OBJMGR_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* ulObjType */
};

const tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD =
    &buf_tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_OBJMGR_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD buf_tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_OBJMGR_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulObjType */
};

const tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD =
    &buf_tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_OBJMGR_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD buf_tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_OBJMGR_LIST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD =
    &buf_tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_OBJMGR_LIST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD buf_tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCT_TRUE  /* ulResetStatsFlag */
};

const tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD =
    &buf_tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_START_MONITORING_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD buf_tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD =
    &buf_tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STOP_MONITORING_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD buf_tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD =
    &buf_tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_COMMAND_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD buf_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* hCmdId */
   cOCT_FALSE  /* ulResetStatsFlag */
};

const tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD =
    &buf_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_COMMAND_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD buf_tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* IndexGet */
       0, /* ulIndex */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD =
    &buf_tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_LIST_SESSION_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD buf_tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT  /* ulSessionIndex */
};

const tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD =
    &buf_tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD buf_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT, /* ulSessionIndex */
   cOCT_FALSE  /* ulResetStatsFlag */
};

const tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD =
    &buf_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD buf_tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT  /* ulSessionIndex */
};

const tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD =
    &buf_tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD buf_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT  /* ulSessionIndex */
};

const tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD =
    &buf_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_API_SYSTEM_STATS_SESSION_EVT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD buf_tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD =
    &buf_tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_LIST_TAP_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD buf_tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hTapId */
};

const tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD =
    &buf_tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_INFO_TAP_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD buf_tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hTapId */
};

const tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD =
    &buf_tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_STATS_TAP_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD buf_tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID, /* hTapId */
   { /* Start */
       cOCTVC1_IRSC_APPLICATION_TAP_MODE_ENUM_STREAM, /* ulMode */
       cOCTVC1_IRSC_APPLICATION_TRANSPORT_MAX_DATA_SIZE, /* ulMaxTransportDataSize */
       cOCTVC1_INDEX_INVALID, /* ulFilterIndex */
       0  /* ulUserId */
   }
};

const tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD =
    &buf_tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_START_TAP_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD buf_tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hTapId */
};

const tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD =
    &buf_tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_IRSC_MSG_APPLICATION_STOP_TAP_CMD; \
    }


#endif /* __OCTVC1_IRSC_DEFAULT_H__ */

