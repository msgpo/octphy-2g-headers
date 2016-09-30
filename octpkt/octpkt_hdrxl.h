/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTPKT_HDRXL.h

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

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTPKT_HDRXL_H__
#define __OCTPKT_HDRXL_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "octpkt_hdr.h"


/************************  COMMON DEFINITIONS  *******************************/

#define cOCTPKT_HDRXL_ETHERTYPE								0x5201	

/*-------------------------------------------------------------------------------------
 	OctPkt-Packet Format Values
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
	tOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK :
-------------------------------------------------------------------------------------*/
#define tOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK									tOCT_UINT32

#define cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_FORMAT_BIT_MASK					0x000000FF	
#define cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_FORMAT_BIT_OFFSET					16		
#define cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_FORMAT								((tOCT_UINT32)(cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_FORMAT_BIT_MASK<<cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_FORMAT_BIT_OFFSET) )	

#define cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_CONTROL_PROTOCOL_TYPE_BIT_MASK		0x0000000F	
#define cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_CONTROL_PROTOCOL_TYPE_BIT_OFFSET	28		
#define cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_CONTROL_PROTOCOL_TYPE				((tOCT_UINT32)(cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_CONTROL_PROTOCOL_TYPE_BIT_MASK<<cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_CONTROL_PROTOCOL_TYPE_BIT_OFFSET) )	

#define cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_LENGTH_BIT_MASK					0x0000FFFF	
#define cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_LENGTH_BIT_OFFSET					0		
#define cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_LENGTH								((tOCT_UINT32)(cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_LENGTH_BIT_MASK<<cOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK_LENGTH_BIT_OFFSET) )	


/*-------------------------------------------------------------------------------------
	tOCTPKT_HDRXL
 		COMMON Packet Header Extended Length
 		32-bit value
 		bits[31:28] = Control Protocol Type
 		bits[27:24] = Reserved
 		bits[23:16] = Format (depend of the Protocol)
 		bits[15:0] = Total Packet Length (size in bytes)

 Members:
	ul_Proto_Format_Length
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTPKT_HDRXL_FORMAT_PROTO_TYPE_LEN_MASK	ul_Proto_Format_Length;

} tOCTPKT_HDRXL;

/*-------------------------------------------------------------------------------------
	tOCTPKT_HDRXL_ETH
 		Ethernet alignement header

 Members:
	usReserved
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT16	usReserved;

} tOCTPKT_HDRXL_ETH;


#endif /* __OCTPKT_HDRXL_H__ */

