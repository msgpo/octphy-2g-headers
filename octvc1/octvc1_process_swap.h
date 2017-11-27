/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_process_swap.h	

Copyright (c) 2017 Octasic Inc. All rights reserved.	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.09.00-B1607 (2017/08/29)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_PROCESS_SWAP_H__
#define __OCTVC1_PROCESS_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_process.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_PROCESS_TYPE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_PROCESS_TYPE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_PROCESS_STATE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_PROCESS_STATE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_PROCESS_ERROR_SWAP( _f_pParms ){ 	tOCTVC1_PROCESS_ERROR * pOCTVC1_PROCESS_ERROR = (_f_pParms); SWAP_UNUSED(pOCTVC1_PROCESS_ERROR)\
	((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulInputOverflowCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulInputOverflowCnt); \
	((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulInputUnderflowCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulInputUnderflowCnt); \
	((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulOutputOverflowCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulOutputOverflowCnt); \
	((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulOutputUnderflowCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulOutputUnderflowCnt); \
	((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulIpcMsgMissCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulIpcMsgMissCnt); \
	((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulLastErrorRc = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_ERROR *)pOCTVC1_PROCESS_ERROR)->ulLastErrorRc); \
}
#else
#define mOCTVC1_PROCESS_ERROR_SWAP( pOCTVC1_PROCESS_ERROR )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_PROCESS_TASK_STATE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_PROCESS_TASK_STATE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_PROCESS_TASK_STATS_SWAP( _f_pParms ){ 	tOCTVC1_PROCESS_TASK_STATS * pOCTVC1_PROCESS_TASK_STATS = (_f_pParms); SWAP_UNUSED(pOCTVC1_PROCESS_TASK_STATS)\
	((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulUserData = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulUserData); \
	((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulMaxExecTimeUs = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulMaxExecTimeUs); \
	((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulAvgExecTimeUs = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulAvgExecTimeUs); \
	((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulLastExecTimeUs = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulLastExecTimeUs); \
	((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulMaxExecCacheMissCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulMaxExecCacheMissCnt); \
	((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulLastExecCacheMissCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulLastExecCacheMissCnt); \
	((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulTotalCacheMissCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulTotalCacheMissCnt); \
	((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulExecCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulExecCnt); \
	((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulDoneCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulDoneCnt); \
	((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulErrorCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->ulErrorCnt); \
	{ mOCTVC1_PROCESS_TASK_STATE_ENUM_SWAP( &((tOCTVC1_PROCESS_TASK_STATS *)pOCTVC1_PROCESS_TASK_STATS)->State ); }  \
}
#else
#define mOCTVC1_PROCESS_TASK_STATS_SWAP( pOCTVC1_PROCESS_TASK_STATS )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_PROCESS_CPU_USAGE_STATS_SWAP( _f_pParms ){ 	tOCTVC1_PROCESS_CPU_USAGE_STATS * pOCTVC1_PROCESS_CPU_USAGE_STATS = (_f_pParms); SWAP_UNUSED(pOCTVC1_PROCESS_CPU_USAGE_STATS)\
	((tOCTVC1_PROCESS_CPU_USAGE_STATS *)pOCTVC1_PROCESS_CPU_USAGE_STATS)->ulProcessCpuUsagePercent = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_CPU_USAGE_STATS *)pOCTVC1_PROCESS_CPU_USAGE_STATS)->ulProcessCpuUsagePercent); \
	((tOCTVC1_PROCESS_CPU_USAGE_STATS *)pOCTVC1_PROCESS_CPU_USAGE_STATS)->ulProcessCpuUsageMinPercent = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_CPU_USAGE_STATS *)pOCTVC1_PROCESS_CPU_USAGE_STATS)->ulProcessCpuUsageMinPercent); \
	((tOCTVC1_PROCESS_CPU_USAGE_STATS *)pOCTVC1_PROCESS_CPU_USAGE_STATS)->ulProcessCpuUsageMaxPercent = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_PROCESS_CPU_USAGE_STATS *)pOCTVC1_PROCESS_CPU_USAGE_STATS)->ulProcessCpuUsageMaxPercent); \
}
#else
#define mOCTVC1_PROCESS_CPU_USAGE_STATS_SWAP( pOCTVC1_PROCESS_CPU_USAGE_STATS )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_PROCESS_SWAP_H__ */
