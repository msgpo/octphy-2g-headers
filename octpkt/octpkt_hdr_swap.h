/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octpkt_hdr_swap.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.04.00-B662 (2015/10/28)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTPKT_HDR_SWAP_H__
#define __OCTPKT_HDR_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1/octvc1_swap_hdrs.h"
#include "octpkt_hdr.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTPKT_HDR_CONTROL_PROTOCOL_TYPE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTPKT_HDR_CONTROL_PROTOCOL_TYPE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTPKT_HDR_SWAP( _f_pParms ){ 	tOCTPKT_HDR * pOCTPKT_HDR = (_f_pParms); SWAP_UNUSED(pOCTPKT_HDR)\
	{ mOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_SWAP( &((tOCTPKT_HDR *)pOCTPKT_HDR)->ul_Format_Trace_Length ); }  \
}
#else
#define mOCTPKT_HDR_SWAP( pOCTPKT_HDR )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTPKT_HDR_TYPE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTPKT_HDR_TYPE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTPKT_HDR_SWAP_H__ */
