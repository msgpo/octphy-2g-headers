/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_log_swap.h	

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
#ifndef __OCTVC1_LOG_SWAP_H__
#define __OCTVC1_LOG_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_log.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LOG_TYPE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_LOG_TYPE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LOG_LEVEL_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_LOG_LEVEL_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LOG_PAYLOAD_TYPE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_LOG_PAYLOAD_TYPE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LOG_TRACE_MASK_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_LOG_TRACE_MASK_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_LOG_HEADER_SWAP( _f_pParms ){ 	tOCTVC1_LOG_HEADER * pOCTVC1_LOG_HEADER = (_f_pParms); SWAP_UNUSED(pOCTVC1_LOG_HEADER)\
	((tOCTVC1_LOG_HEADER *)pOCTVC1_LOG_HEADER)->ulId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LOG_HEADER *)pOCTVC1_LOG_HEADER)->ulId); \
	((tOCTVC1_LOG_HEADER *)pOCTVC1_LOG_HEADER)->ulTime = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LOG_HEADER *)pOCTVC1_LOG_HEADER)->ulTime); \
	((tOCTVC1_LOG_HEADER *)pOCTVC1_LOG_HEADER)->hProcess = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LOG_HEADER *)pOCTVC1_LOG_HEADER)->hProcess); \
	((tOCTVC1_LOG_HEADER *)pOCTVC1_LOG_HEADER)->ul_Type_Info_Length = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_LOG_HEADER *)pOCTVC1_LOG_HEADER)->ul_Type_Info_Length); \
}
#else
#define mOCTVC1_LOG_HEADER_SWAP( pOCTVC1_LOG_HEADER )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_LOG_SWAP_H__ */
