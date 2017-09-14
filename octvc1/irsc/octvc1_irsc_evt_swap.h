/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_irsc_evt_swap.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.08.00-B1418 (2017/03/21)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_IRSC_EVT_SWAP_H__
#define __OCTVC1_IRSC_EVT_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1_swap_hdrs.h"
#include "octvc1_irsc_evt.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT_SWAP( _f_pParms ){ 	tOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT * pOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT *)pOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT)->Header ); }  \
	((tOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT *)pOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT)->hProcess = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT *)pOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT)->hProcess); \
}
#else
#define mOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT_SWAP( pOCTVC1_IRSC_MSG_PROCESS_DUMP_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT_SWAP( _f_pParms ){ 	tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT * pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT = (_f_pParms); SWAP_UNUSED(pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)\
	{ mOCTVC1_EVENT_HEADER_SWAP( &((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->Header ); }  \
	((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->hTapId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->hTapId); \
	((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->ulDataSize = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->ulDataSize); \
	((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->hLogicalObj = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->hLogicalObj); \
	((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->ulSequenceId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->ulSequenceId); \
	((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->ulRetryFlag = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT *)pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT)->ulRetryFlag); \
}
#else
#define mOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT_SWAP( pOCTVC1_IRSC_MSG_APPLICATION_TAP_DATA_REQUEST_EVT )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_IRSC_EVT_SWAP_H__ */
