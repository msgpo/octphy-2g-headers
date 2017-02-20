/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTPKT_HDR.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.00-B1314 (2017/01/18)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTPKT_HDR_H__
#define __OCTPKT_HDR_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

#define cOCTPKT_HDR_ETHERTYPE								0x5200	

/*-------------------------------------------------------------------------------------
 	OctPkt-Packet Format Values
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
	tOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK :
-------------------------------------------------------------------------------------*/
#define tOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK									tOCT_UINT32

#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_FORMAT_BIT_MASK						0x000000FF	
#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_FORMAT_BIT_OFFSET					24		
#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_FORMAT								((tOCT_UINT32)(cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_FORMAT_BIT_MASK<<cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_FORMAT_BIT_OFFSET) )	

#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_TRACE_BIT_MASK						0x00000001	
#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_TRACE_BIT_OFFSET						23		
#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_TRACE								((tOCT_UINT32)(cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_TRACE_BIT_MASK<<cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_TRACE_BIT_OFFSET) )	

#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_CONTROL_PROTOCOL_TYPE_BIT_MASK		0x0000000F	
#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_CONTROL_PROTOCOL_TYPE_BIT_OFFSET		11		
#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_CONTROL_PROTOCOL_TYPE				((tOCT_UINT32)(cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_CONTROL_PROTOCOL_TYPE_BIT_MASK<<cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_CONTROL_PROTOCOL_TYPE_BIT_OFFSET) )	

#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_LENGTH_BIT_MASK						0x000007FF	
#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_LENGTH_BIT_OFFSET					0		
#define cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_LENGTH								((tOCT_UINT32)(cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_LENGTH_BIT_MASK<<cOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK_LENGTH_BIT_OFFSET) )	


/*-------------------------------------------------------------------------------------
	tOCTPKT_HDR_CONTROL_PROTOCOL_TYPE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTPKT_HDR_CONTROL_PROTOCOL_TYPE_ENUM				tOCT_UINT32

#define cOCTPKT_HDR_CONTROL_PROTOCOL_TYPE_ENUM_OCTVOCNET	0x0		 	/* Vocallo MGW Control Protocol */
#define cOCTPKT_HDR_CONTROL_PROTOCOL_TYPE_ENUM_OCTMFA		0x1		 	/* Media Flow Aggregator Control Protocol */
#define cOCTPKT_HDR_CONTROL_PROTOCOL_TYPE_ENUM_LTE_FAPI		0x2		 	/* SDR LTE femtocells API Protocol */
#define cOCTPKT_HDR_CONTROL_PROTOCOL_TYPE_ENUM_TEST			0xE		 	/* TEST Protocol */
#define cOCTPKT_HDR_CONTROL_PROTOCOL_TYPE_ENUM_NONE			0xFFFFFFFF	 	/* Not used */


/*-------------------------------------------------------------------------------------
	tOCTPKT_HDR
 		COMMON Packet Header
 		32-bit value
 		bits[31:24] = Format
 		bit[23] = Trace Flag
 		bits[22:15] = 0=Reserved
 		bits[14:11] = Control Protocol Type
 		bits[10:0] = Total Packet Size in bytes

 Members:
	ul_Format_Trace_Length
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTPKT_HDR_FORMAT_PROTO_TYPE_LEN_MASK	ul_Format_Trace_Length;

} tOCTPKT_HDR;


/*-------------------------------------------------------------------------------------
	tOCTPKT_HDR_TYPE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTPKT_HDR_TYPE_ENUM								tOCT_UINT32

#define cOCTPKT_HDR_TYPE_ENUM_NONE							0		 	/* Unused PktHdr */
#define cOCTPKT_HDR_TYPE_ENUM_NORMAL						1		 	/* Normal OctPktHdr */
#define cOCTPKT_HDR_TYPE_ENUM_XL							2		 	/* XL OctPktHdr */


#endif /* __OCTPKT_HDR_H__ */

