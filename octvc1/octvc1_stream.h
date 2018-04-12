/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_STREAM.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.10.00-B1837 (2018/02/21)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_STREAM_H__
#define __OCTVC1_STREAM_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Stream types
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_STREAM_DIRECTION_ENUM : 	Tap direction.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_STREAM_DIRECTION_ENUM						tOCT_UINT32

#define cOCTVC1_STREAM_DIRECTION_ENUM_TO_HOST				0		
#define cOCTVC1_STREAM_DIRECTION_ENUM_FROM_HOST				1		

/*-------------------------------------------------------------------------------------
	tOCTVC1_STREAM_STATS
 		Stream stats

 Members:
	ulTransferDataSize
	ulDurationUs
	ulSentPacketCnt
	ulRecvPacketCnt
	ulRecvDropCnt
	ulRecvOverflowCnt
	ulRecvRetryCnt
	ulRecvMissCnt
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulTransferDataSize;
	tOCT_UINT32	ulDurationUs;
	tOCT_UINT32	ulSentPacketCnt;
	tOCT_UINT32	ulRecvPacketCnt;
	tOCT_UINT32	ulRecvDropCnt;
	tOCT_UINT32	ulRecvOverflowCnt;
	tOCT_UINT32	ulRecvRetryCnt;
	tOCT_UINT32	ulRecvMissCnt;

} tOCTVC1_STREAM_STATS;


#endif /* __OCTVC1_STREAM_H__ */

