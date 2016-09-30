/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_main_evt_swap.h	

Copyright (c) 2016 Octasic Inc. All rights reserved.	

Description:	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.05.00-B780 (2016/01/14)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_MAIN_EVT_SWAP_H__
#define __OCTVC1_MAIN_EVT_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_swap_hdrs.h"
#include "octvc1_main_evt.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MAIN_EVT_PHY_MASK_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_MAIN_EVT_PHY_MASK_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT_SWAP( _f_pParms ){ 	tOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT * pOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT *)pOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT)->Header ); }  \
	((tOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT *)pOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT)->hProcess = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT *)pOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT)->hProcess); \
	{ mOCTVC1_PROCESS_TYPE_ENUM_SWAP( &((tOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT *)pOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT)->ulProcessImageType ); }  \
	((tOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT *)pOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT)->ulProcessCpuUsagePercent = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT *)pOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT)->ulProcessCpuUsagePercent); \
}
#else
#define mOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT_SWAP( pOCTVC1_MAIN_MSG_PROCESS_CPU_USAGE_REPORT_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT_SWAP( _f_pParms ){ 	tOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT * pOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT *)pOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT)->Header ); }  \
	((tOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT *)pOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT)->hProcess = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT *)pOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT)->hProcess); \
}
#else
#define mOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT_SWAP( pOCTVC1_MAIN_MSG_PROCESS_DUMP_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT_SWAP( _f_pParms ){ 	tOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT * pOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT *)pOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT)->Header ); }  \
	((tOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT *)pOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT)->ulSessionIndex = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT *)pOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT)->ulSessionIndex); \
}
#else
#define mOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT_SWAP( pOCTVC1_MAIN_MSG_API_SYSTEM_SESSION_HEARTBEAT_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EVT_SWAP( _f_pParms ){ 	tOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EVT * pOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EVT *)pOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EVT)->Header ); }  \
	{ mOCTVC1_MAIN_APPLICATION_STATE_ENUM_SWAP( &((tOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EVT *)pOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EVT)->ulState ); }  \
}
#else
#define mOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EVT_SWAP( pOCTVC1_MAIN_MSG_APPLICATION_STATE_CHANGE_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_MAIN_EVT_SWAP_H__ */
