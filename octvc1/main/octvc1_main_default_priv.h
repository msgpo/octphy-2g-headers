/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_MAIN_DEFAULT_PRIV.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.11.00-B1927 (2018/04/27)

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_MAIN_DEFAULT_PRIV_H__
#define __OCTVC1_MAIN_DEFAULT_PRIV_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_main_api_priv.h"
#include "octvc1_main_default.h"

/*****************************  COMMAND DEFAULT *****************************/

/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD buf_tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   0  /* hInfraction */
};

const tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD =
    &buf_tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD buf_tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   { /* ObjectCursor */
       0, /* hObject */
       cOCTVC1_OBJECT_CURSOR_ENUM_FIRST  /* ulGetMode */
   }
};

const tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD =
    &buf_tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD buf_tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD =
    &buf_tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD buf_tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_DO_NOT_MODIFY  /* ulSendStateChangeEvtFlag */
};

const tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD =
    &buf_tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD buf_tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   }
};

const tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD =
    &buf_tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD; \
    }


/*--------------------------------------------------------------------------
    tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD
----------------------------------------------------------------------------*/
#ifdef OCTVC1_OPT_DECLARE_DEFAULTS

const tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD buf_tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD =
{
   { /* Header */
       ((sizeof(tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD)<<cOCTVC1_MSG_LENGTH_BIT_OFFSET)&cOCTVC1_MSG_LENGTH_BIT_MASK), /* ulLength */
       0, /* ulTransactionId */
       ((cOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CID<<cOCTVC1_MSG_ID_BIT_OFFSET)&cOCTVC1_MSG_ID_BIT_MASK), /* ul_Type_R_CmdId */
       0, /* ulSessionId */
       0, /* ulReturnCode */
       0  /* ulUserInfo */
   },
   cOCTVC1_DO_NOT_MODIFY  /* ulApplyHiddenFlag */
};

const tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD =
    &buf_tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD;

#else /* OCTVC1_OPT_DECLARE_DEFAULTS */
extern const tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD;
#endif /* OCTVC1_OPT_DECLARE_DEFAULTS */

#define mOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD_DEF(pSt) \
    { \
        *pSt = *g_pOctDef_tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD; \
    }


/*****************************  MODULE_DATA  *************************************/

#ifdef __cplusplus
}
#endif

#endif /* __OCTVC1_MAIN_DEFAULT_PRIV_H__ */

