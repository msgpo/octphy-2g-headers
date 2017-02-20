/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_MAIN_DEFAULT.h

Copyright (c) 2017 Octasic Inc. All rights reserved.

Description: Contains the event definition of the MAIN API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.01-B1351 (2017/02/13)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_MAIN_DEFAULT_H__
#define __OCTVC1_MAIN_DEFAULT_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_main_api.h"

/*****************************  COMMAND DEFAULT *****************************/

/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_TARGET_RESET_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_TARGET_RESET_CMD buf_tOCTVC1_MAIN_MSG_TARGET_RESET_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_TARGET_RESET_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_TARGET_RESET_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_TARGET_RESET_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_TARGET_RESET_CMD =
    &buf_tOCTVC1_MAIN_MSG_TARGET_RESET_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_TARGET_RESET_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_TARGET_RESET_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_TARGET_RESET_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_TARGET_RESET_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_TARGET_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_TARGET_INFO_CMD buf_tOCTVC1_MAIN_MSG_TARGET_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_TARGET_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_TARGET_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_TARGET_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_TARGET_INFO_CMD =
    &buf_tOCTVC1_MAIN_MSG_TARGET_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_TARGET_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_TARGET_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_TARGET_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_TARGET_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_ERASE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_ERASE_CMD buf_tOCTVC1_MAIN_MSG_LOG_ERASE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_ERASE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_ERASE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LOG_ERASE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_ERASE_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_ERASE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_ERASE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_ERASE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_ERASE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_ERASE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_INFO_CMD buf_tOCTVC1_MAIN_MSG_LOG_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LOG_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_INFO_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_STATS_CMD buf_tOCTVC1_MAIN_MSG_LOG_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LOG_STATS_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STATS_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_STATS_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD buf_tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_INFO_TRACE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD buf_tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_START_TRACE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCT_FALSE, /* ulFullAutoStopFlag */
   cOCTVC1_LOG_TRACE_MASK_NONE, /* ulTraceMask */
   16384, /* ulFileSize */
   4, /* ulFileNumber */
   { /* Filter */
       cOCT_TRUE, /* ulTraceProcessAllFlag */
       { /* aTraceProcessUserId */
           cOCTVC1_USER_ID_PROCESS_ENUM_INVALID, /* aTraceProcessUserId[0] */
           cOCTVC1_USER_ID_PROCESS_ENUM_INVALID, /* aTraceProcessUserId[1] */
           cOCTVC1_USER_ID_PROCESS_ENUM_INVALID, /* aTraceProcessUserId[2] */
           cOCTVC1_USER_ID_PROCESS_ENUM_INVALID, /* aTraceProcessUserId[3] */
           cOCTVC1_USER_ID_PROCESS_ENUM_INVALID, /* aTraceProcessUserId[4] */
           cOCTVC1_USER_ID_PROCESS_ENUM_INVALID, /* aTraceProcessUserId[5] */
           cOCTVC1_USER_ID_PROCESS_ENUM_INVALID, /* aTraceProcessUserId[6] */
           cOCTVC1_USER_ID_PROCESS_ENUM_INVALID  /* aTraceProcessUserId[7] */
       }
   }
};

const tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_START_TRACE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD buf_tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STOP_TRACE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD buf_tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_ERASE_TRACE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD buf_tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STATS_TRACE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD buf_tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   1  /* hProcess */
};

const tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD =
    &buf_tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_INFO_CPU_USAGE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_FILE_OPEN_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_FILE_OPEN_CMD buf_tOCTVC1_MAIN_MSG_FILE_OPEN_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_FILE_OPEN_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_FILE_OPEN_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* szFileName */
       0, /* szFileName[0..127] */
   },
   cOCTVC1_MAIN_FILE_OPEN_MODE_MASK_READ  /* ulAccessMode */
};

const tOCTVC1_MAIN_MSG_FILE_OPEN_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_OPEN_CMD =
    &buf_tOCTVC1_MAIN_MSG_FILE_OPEN_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_FILE_OPEN_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_OPEN_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_FILE_OPEN_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_OPEN_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD buf_tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_FILE_CLOSE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hFile */
};

const tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD =
    &buf_tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_FILE_CLOSE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_CLOSE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD buf_tOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* szFileName */
       0, /* szFileName[0..127] */
   }
};

const tOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD =
    &buf_tOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD; \
    }

#define mOCTVC1_MAIN_MSG_FILE_SYSTEM_DELETE_FILE_CMD_DEF mOCTVC1_MAIN_MSG_FILE_SYSTEM_REMOVE_FILE_CMD_DEF  /* OCTVC1_RENAMED_API */

/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_FILE_WRITE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_FILE_WRITE_CMD buf_tOCTVC1_MAIN_MSG_FILE_WRITE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_FILE_WRITE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_FILE_WRITE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID, /* hFile */
   0, /* ulNumByteToWrite */
   { /* abyData */
       0, /* abyData[0..1199] */
   }
};

const tOCTVC1_MAIN_MSG_FILE_WRITE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_WRITE_CMD =
    &buf_tOCTVC1_MAIN_MSG_FILE_WRITE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_FILE_WRITE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_WRITE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_FILE_WRITE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_WRITE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_FILE_READ_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_FILE_READ_CMD buf_tOCTVC1_MAIN_MSG_FILE_READ_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_FILE_READ_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_FILE_READ_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID, /* hFile */
   cOCTVC1_MAIN_FILE_MAX_DATA_BYTE_SIZE  /* ulMaxNumByteToRead */
};

const tOCTVC1_MAIN_MSG_FILE_READ_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_READ_CMD =
    &buf_tOCTVC1_MAIN_MSG_FILE_READ_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_FILE_READ_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_READ_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_FILE_READ_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_READ_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_FILE_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_FILE_INFO_CMD buf_tOCTVC1_MAIN_MSG_FILE_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_FILE_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_FILE_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hFile */
};

const tOCTVC1_MAIN_MSG_FILE_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_INFO_CMD =
    &buf_tOCTVC1_MAIN_MSG_FILE_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_FILE_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_FILE_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_FILE_LIST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_FILE_LIST_CMD buf_tOCTVC1_MAIN_MSG_FILE_LIST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_FILE_LIST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_FILE_LIST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_MAIN_MSG_FILE_LIST_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_LIST_CMD =
    &buf_tOCTVC1_MAIN_MSG_FILE_LIST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_FILE_LIST_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_LIST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_FILE_LIST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_LIST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD buf_tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD =
    &buf_tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD buf_tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectGet */
       { /* szFileName */
           0, /* szFileName[0..127] */
       },
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD =
    &buf_tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_INFO_FILE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD buf_tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_PROCESS_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_HANDLE_INVALID  /* hProcess */
};

const tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD =
    &buf_tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_PROCESS_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD buf_tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_PROCESS_LIST_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD =
    &buf_tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_PROCESS_LIST_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_LIST_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD buf_tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   1, /* hProcess */
   98, /* ulAlarmThresholdHighPercent */
   90, /* ulAlarmThresholdLowPercent */
   cOCTVC1_DO_NOT_MODIFY  /* ulMonitorEnableFlag */
};

const tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD =
    &buf_tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_MONITOR_CPU_USAGE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD buf_tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   1  /* hProcess */
};

const tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD =
    &buf_tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_PROCESS_STATS_CPU_USAGE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD buf_tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* IndexGet */
       0, /* ulIndex */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD =
    &buf_tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_LIST_SESSION_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD buf_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT  /* ulSessionIndex */
};

const tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD =
    &buf_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD buf_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT  /* ulSessionIndex */
};

const tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD =
    &buf_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_EVT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD buf_tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT, /* ulSessionIndex */
   cOCTVC1_DO_NOT_MODIFY, /* ulEvtActiveFlag */
   cOCTVC1_DO_NOT_MODIFY  /* ulSystemEvtMask */
};

const tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD =
    &buf_tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_EVT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD buf_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT  /* ulSessionIndex */
};

const tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD =
    &buf_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_INFO_SESSION_HEARTBEAT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD buf_tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT  /* ulSessionIndex */
};

const tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD =
    &buf_tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_STATS_SESSION_HEARTBEAT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD buf_tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT, /* ulSessionIndex */
   { /* Config */
       1000, /* ulWaitTimeMs */
       cOCT_TRUE  /* ulIdleOnlyFlag */
   }
};

const tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD =
    &buf_tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_START_SESSION_HEARTBEAT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD buf_tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT  /* ulSessionIndex */
};

const tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD =
    &buf_tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_STOP_SESSION_HEARTBEAT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD buf_tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_API_SESSION_INDEX_CURRENT_TRANSPORT, /* ulSessionIndex */
   { /* Config */
       1000, /* ulWaitTimeMs */
       cOCT_TRUE  /* ulIdleOnlyFlag */
   }
};

const tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD =
    &buf_tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_API_SYSTEM_MODIFY_SESSION_HEARTBEAT_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD buf_tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_APPLICATION_STOP_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulQuit */
};

const tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD =
    &buf_tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_STOP_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD buf_tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_APPLICATION_INFO_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD =
    &buf_tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_INFO_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD buf_tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD =
    &buf_tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_INFO_SYSTEM_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD buf_tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD =
    &buf_tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_LIST_MODULE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD buf_tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulModuleId */
};

const tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD =
    &buf_tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_INFO_MODULE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD buf_tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0, /* ulModuleId */
   cOCT_FALSE  /* ulResetStatsFlag */
};

const tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD =
    &buf_tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_STATS_MODULE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD buf_tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* szFileName */
       0, /* szFileName[0..127] */
   },
   0  /* ulMaxFilesize */
};

const tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD =
    &buf_tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_FILE_SYSTEM_ADD_FILE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD buf_tOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_INFO_STREAM_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD buf_tOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_START_STREAM_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_START_STREAM_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD buf_tOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD =
    &buf_tOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_STOP_STREAM_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD buf_tOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulModuleId */
};

const tOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD =
    &buf_tOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_START_MODULE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD buf_tOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulModuleId */
};

const tOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD =
    &buf_tOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_STOP_MODULE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LICENSING_STATS_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LICENSING_STATS_CMD buf_tOCTVC1_MAIN_MSG_LICENSING_STATS_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LICENSING_STATS_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LICENSING_STATS_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LICENSING_STATS_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_STATS_CMD =
    &buf_tOCTVC1_MAIN_MSG_LICENSING_STATS_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LICENSING_STATS_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_STATS_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LICENSING_STATS_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_STATS_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD buf_tOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* ulLicenseId */
};

const tOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD =
    &buf_tOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_INFO_FEATURES_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD buf_tOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD =
    &buf_tOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_LIST_FEATURES_CMD; \
    }


/*****************************  MODULE_DATA  *************************************/

/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LOG_DATA_MDA
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LOG_DATA_MDA buf_tOCTVC1_MAIN_MSG_LOG_DATA_MDA =
{
   { /* ModuleData */
       (cOCTVC1_MAIN_MSG_LOG_DATA_MID), /* ulModuleDataId */
       (sizeof(tOCTVC1_MAIN_MSG_LOG_DATA_MDA)), /* ulModuleDataSize */
       0, /* hLogicalObj */
       0  /* ulTimestamp */
   }
};

const tOCTVC1_MAIN_MSG_LOG_DATA_MDA *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_DATA_MDA =
    &buf_tOCTVC1_MAIN_MSG_LOG_DATA_MDA;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LOG_DATA_MDA *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_DATA_MDA;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LOG_DATA_MDA_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LOG_DATA_MDA; \
    }


#endif /* __OCTVC1_MAIN_DEFAULT_H__ */

