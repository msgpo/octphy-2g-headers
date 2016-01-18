/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_hw_evt_swap.h	

Copyright (c) 2015 Octasic Inc. All rights reserved.	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.03.00-B560 (2015/08/07)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_HW_EVT_SWAP_H__
#define __OCTVC1_HW_EVT_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_swap_hdrs.h"
#include "octvc1_hw_evt.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT * pOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT *)pOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT)->Header ); }  \
	((tOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT *)pOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT)->ulCoreIndex = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT *)pOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT)->ulCoreIndex); \
	{ mOCTVC1_HW_CPU_CORE_MASK_SWAP( &((tOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT *)pOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT)->ulCoreUseMask ); }  \
	{ mOCTVC1_HW_CPU_CORE_MASK_SWAP( &((tOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT *)pOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT)->ulCoreHaltMask ); }  \
}
#else
#define mOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT_SWAP( pOCTVC1_HW_MSG_CPU_CORE_EXEC_REPORT_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT_SWAP( _f_pParms ){ 	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT * pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT)->Header ); }  \
	{ mOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT)->ulState ); }  \
	{ mOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_SWAP( &((tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT *)pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT)->ulPreviousState ); }  \
}
#else
#define mOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT_SWAP( pOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATUS_CHANGE_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_HW_EVT_SWAP_H__ */
