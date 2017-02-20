/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvocnet_pkt_swap.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.01-B1351 (2017/02/13)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVOCNET_PKT_SWAP_H__
#define __OCTVOCNET_PKT_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvocnet_pkt.h"

/*********************************  MACROS  **********************************/



#define mOCTVOCNET_PKT_CONTROL_PROTOCOL_TYPE_ENUM_SWAP  mOCTPKT_HDR_CONTROL_PROTOCOL_TYPE_ENUM_SWAP

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVOCNET_PKT_CTL_HEADER_SWAP( _f_pParms ){ 	tOCTVOCNET_PKT_CTL_HEADER * pOCTVOCNET_PKT_CTL_HEADER = (_f_pParms); SWAP_UNUSED(pOCTVOCNET_PKT_CTL_HEADER)\
	((tOCTVOCNET_PKT_CTL_HEADER *)pOCTVOCNET_PKT_CTL_HEADER)->ulDestFifoId = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_CTL_HEADER *)pOCTVOCNET_PKT_CTL_HEADER)->ulDestFifoId); \
	((tOCTVOCNET_PKT_CTL_HEADER *)pOCTVOCNET_PKT_CTL_HEADER)->ulSourceFifoId = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_CTL_HEADER *)pOCTVOCNET_PKT_CTL_HEADER)->ulSourceFifoId); \
	((tOCTVOCNET_PKT_CTL_HEADER *)pOCTVOCNET_PKT_CTL_HEADER)->ulSocketId = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_CTL_HEADER *)pOCTVOCNET_PKT_CTL_HEADER)->ulSocketId); \
}
#else
#define mOCTVOCNET_PKT_CTL_HEADER_SWAP( pOCTVOCNET_PKT_CTL_HEADER )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVOCNET_PKT_DATA_HEADER_SWAP( _f_pParms ){ 	tOCTVOCNET_PKT_DATA_HEADER * pOCTVOCNET_PKT_DATA_HEADER = (_f_pParms); SWAP_UNUSED(pOCTVOCNET_PKT_DATA_HEADER)\
	((tOCTVOCNET_PKT_DATA_HEADER *)pOCTVOCNET_PKT_DATA_HEADER)->hLogicalObj = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_HEADER *)pOCTVOCNET_PKT_DATA_HEADER)->hLogicalObj); \
	((tOCTVOCNET_PKT_DATA_HEADER *)pOCTVOCNET_PKT_DATA_HEADER)->ulLogicalObjPktPort = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_HEADER *)pOCTVOCNET_PKT_DATA_HEADER)->ulLogicalObjPktPort); \
	((tOCTVOCNET_PKT_DATA_HEADER *)pOCTVOCNET_PKT_DATA_HEADER)->ulDestFifoId = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_HEADER *)pOCTVOCNET_PKT_DATA_HEADER)->ulDestFifoId); \
}
#else
#define mOCTVOCNET_PKT_DATA_HEADER_SWAP( pOCTVOCNET_PKT_DATA_HEADER )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVOCNET_PKT_DATA_F_HEADER_SWAP( _f_pParms ){ 	tOCTVOCNET_PKT_DATA_F_HEADER * pOCTVOCNET_PKT_DATA_F_HEADER = (_f_pParms); SWAP_UNUSED(pOCTVOCNET_PKT_DATA_F_HEADER)\
	{ mOCTVOCNET_PKT_DATA_HEADER_SWAP( &((tOCTVOCNET_PKT_DATA_F_HEADER *)pOCTVOCNET_PKT_DATA_F_HEADER)->VocNetHeader ); }  \
	((tOCTVOCNET_PKT_DATA_F_HEADER *)pOCTVOCNET_PKT_DATA_F_HEADER)->ulTimestamp = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_F_HEADER *)pOCTVOCNET_PKT_DATA_F_HEADER)->ulTimestamp); \
	((tOCTVOCNET_PKT_DATA_F_HEADER *)pOCTVOCNET_PKT_DATA_F_HEADER)->ulSubType = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_F_HEADER *)pOCTVOCNET_PKT_DATA_F_HEADER)->ulSubType); \
}
#else
#define mOCTVOCNET_PKT_DATA_F_HEADER_SWAP( pOCTVOCNET_PKT_DATA_F_HEADER )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVOCNET_PKT_DATA_FRAGMENT_HEADER_SWAP( _f_pParms ){ 	tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER * pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER = (_f_pParms); SWAP_UNUSED(pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)\
	{ mOCTVOCNET_PKT_DATA_F_HEADER_SWAP( &((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->DataHeader ); }  \
	((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulSequenceId = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulSequenceId); \
	((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulTransfertTotalSize = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulTransfertTotalSize); \
	((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulFragmentTotalCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulFragmentTotalCnt); \
	((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulFragmentId = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulFragmentId); \
	((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulFragmentDataOffset = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulFragmentDataOffset); \
	((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulFragmentDataSize = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulFragmentDataSize); \
	((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulUserId = \
		mOCT_SWAP32_IF_LE(((tOCTVOCNET_PKT_DATA_FRAGMENT_HEADER *)pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER)->ulUserId); \
}
#else
#define mOCTVOCNET_PKT_DATA_FRAGMENT_HEADER_SWAP( pOCTVOCNET_PKT_DATA_FRAGMENT_HEADER )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVOCNET_PKT_SWAP_H__ */
