/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octpkt_hdrxl_swap.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.00-B1039 (2016/07/22)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTPKT_HDRXL_SWAP_H__
#define __OCTPKT_HDRXL_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octvc1/octvc1_swap_hdrs.h"
#include "octpkt_hdrxl.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTPKT_HDRXL_SWAP( _f_pParms ){ 	tOCTPKT_HDRXL * pOCTPKT_HDRXL = (_f_pParms); SWAP_UNUSED(pOCTPKT_HDRXL)\
	{ mOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_SWAP( &((tOCTPKT_HDRXL *)pOCTPKT_HDRXL)->ul_Proto_Format_Length ); }  \
}
#else
#define mOCTPKT_HDRXL_SWAP( pOCTPKT_HDRXL )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTPKT_HDRXL_ETH_SWAP( _f_pParms ){ 	tOCTPKT_HDRXL_ETH * pOCTPKT_HDRXL_ETH = (_f_pParms); SWAP_UNUSED(pOCTPKT_HDRXL_ETH)\
	((tOCTPKT_HDRXL_ETH *)pOCTPKT_HDRXL_ETH)->usReserved = \
		mOCT_SWAP16_IF_LE(((tOCTPKT_HDRXL_ETH *)pOCTPKT_HDRXL_ETH)->usReserved);  \
}
#else
#define mOCTPKT_HDRXL_ETH_SWAP( pOCTPKT_HDRXL_ETH )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTPKT_HDRXL_SWAP_H__ */
