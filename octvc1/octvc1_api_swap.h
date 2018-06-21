/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_api_swap.h	

Copyright (c) 2018 Octasic Inc. All rights reserved.	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.11.00-B1927 (2018/04/27)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_API_SWAP_H__
#define __OCTVC1_API_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_api.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_API_SESSION_INFO_SWAP( _f_pParms ){ 	tOCTVC1_API_SESSION_INFO * pOCTVC1_API_SESSION_INFO = (_f_pParms); SWAP_UNUSED(pOCTVC1_API_SESSION_INFO)\
	((tOCTVC1_API_SESSION_INFO *)pOCTVC1_API_SESSION_INFO)->ulActiveFlag = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_API_SESSION_INFO *)pOCTVC1_API_SESSION_INFO)->ulActiveFlag); \
	((tOCTVC1_API_SESSION_INFO *)pOCTVC1_API_SESSION_INFO)->ulSessionId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_API_SESSION_INFO *)pOCTVC1_API_SESSION_INFO)->ulSessionId); \
	((tOCTVC1_API_SESSION_INFO *)pOCTVC1_API_SESSION_INFO)->ulTransportSessionIndex = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_API_SESSION_INFO *)pOCTVC1_API_SESSION_INFO)->ulTransportSessionIndex); \
	((tOCTVC1_API_SESSION_INFO *)pOCTVC1_API_SESSION_INFO)->ulTransportSessionId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_API_SESSION_INFO *)pOCTVC1_API_SESSION_INFO)->ulTransportSessionId); \
}
#else
#define mOCTVC1_API_SESSION_INFO_SWAP( pOCTVC1_API_SESSION_INFO )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_API_SESSION_EVT_INFO_SWAP( _f_pParms ){ 	tOCTVC1_API_SESSION_EVT_INFO * pOCTVC1_API_SESSION_EVT_INFO = (_f_pParms); SWAP_UNUSED(pOCTVC1_API_SESSION_EVT_INFO)\
	((tOCTVC1_API_SESSION_EVT_INFO *)pOCTVC1_API_SESSION_EVT_INFO)->ulEvtActiveFlag = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_API_SESSION_EVT_INFO *)pOCTVC1_API_SESSION_EVT_INFO)->ulEvtActiveFlag); \
	((tOCTVC1_API_SESSION_EVT_INFO *)pOCTVC1_API_SESSION_EVT_INFO)->lEvtEnablerCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_API_SESSION_EVT_INFO *)pOCTVC1_API_SESSION_EVT_INFO)->lEvtEnablerCnt); \
	{ mOCTVC1_API_SESSION_EVT_SYSTEM_MODULE_MASK_SWAP( &((tOCTVC1_API_SESSION_EVT_INFO *)pOCTVC1_API_SESSION_EVT_INFO)->ulSystemEvtMask ); }  \
}
#else
#define mOCTVC1_API_SESSION_EVT_INFO_SWAP( pOCTVC1_API_SESSION_EVT_INFO )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_API_VERSION_MASK_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_API_VERSION_MASK_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_API_SWAP_H__ */
