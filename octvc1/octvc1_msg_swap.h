/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_msg_swap.h	

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
#ifndef __OCTVC1_MSG_SWAP_H__
#define __OCTVC1_MSG_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_msg.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MSG_FLAGS_MASK_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_MSG_FLAGS_MASK_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_MSG_HEADER_SWAP( _f_pParms ){ 	tOCTVC1_MSG_HEADER * pOCTVC1_MSG_HEADER = (_f_pParms); SWAP_UNUSED(pOCTVC1_MSG_HEADER)\
	((tOCTVC1_MSG_HEADER *)pOCTVC1_MSG_HEADER)->ulLength = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MSG_HEADER *)pOCTVC1_MSG_HEADER)->ulLength); \
	((tOCTVC1_MSG_HEADER *)pOCTVC1_MSG_HEADER)->ulTransactionId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MSG_HEADER *)pOCTVC1_MSG_HEADER)->ulTransactionId); \
	((tOCTVC1_MSG_HEADER *)pOCTVC1_MSG_HEADER)->ul_Type_R_CmdId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MSG_HEADER *)pOCTVC1_MSG_HEADER)->ul_Type_R_CmdId); \
	((tOCTVC1_MSG_HEADER *)pOCTVC1_MSG_HEADER)->ulSessionId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MSG_HEADER *)pOCTVC1_MSG_HEADER)->ulSessionId); \
	((tOCTVC1_MSG_HEADER *)pOCTVC1_MSG_HEADER)->ulReturnCode = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_MSG_HEADER *)pOCTVC1_MSG_HEADER)->ulReturnCode); \
}
#else
#define mOCTVC1_MSG_HEADER_SWAP( pOCTVC1_MSG_HEADER )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_EVENT_HEADER_SWAP( _f_pParms ){ 	tOCTVC1_EVENT_HEADER * pOCTVC1_EVENT_HEADER = (_f_pParms); SWAP_UNUSED(pOCTVC1_EVENT_HEADER)\
	((tOCTVC1_EVENT_HEADER *)pOCTVC1_EVENT_HEADER)->ulLength = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_EVENT_HEADER *)pOCTVC1_EVENT_HEADER)->ulLength); \
	((tOCTVC1_EVENT_HEADER *)pOCTVC1_EVENT_HEADER)->ulEventId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_EVENT_HEADER *)pOCTVC1_EVENT_HEADER)->ulEventId); \
	((tOCTVC1_EVENT_HEADER *)pOCTVC1_EVENT_HEADER)->ulUserEventId = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_EVENT_HEADER *)pOCTVC1_EVENT_HEADER)->ulUserEventId); \
}
#else
#define mOCTVC1_EVENT_HEADER_SWAP( pOCTVC1_EVENT_HEADER )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_MSG_SWAP_H__ */
