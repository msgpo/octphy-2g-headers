/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_stream_swap.h	

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
#ifndef __OCTVC1_STREAM_SWAP_H__
#define __OCTVC1_STREAM_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_stream.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_STREAM_DIRECTION_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_STREAM_DIRECTION_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_STREAM_STATS_SWAP( _f_pParms ){ 	tOCTVC1_STREAM_STATS * pOCTVC1_STREAM_STATS = (_f_pParms); SWAP_UNUSED(pOCTVC1_STREAM_STATS)\
	((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulTransferDataSize = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulTransferDataSize); \
	((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulDurationUs = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulDurationUs); \
	((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulSentPacketCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulSentPacketCnt); \
	((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulRecvPacketCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulRecvPacketCnt); \
	((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulRecvDropCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulRecvDropCnt); \
	((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulRecvOverflowCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulRecvOverflowCnt); \
	((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulRecvRetryCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulRecvRetryCnt); \
	((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulRecvMissCnt = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_STREAM_STATS *)pOCTVC1_STREAM_STATS)->ulRecvMissCnt); \
}
#else
#define mOCTVC1_STREAM_STATS_SWAP( pOCTVC1_STREAM_STATS )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_STREAM_SWAP_H__ */
