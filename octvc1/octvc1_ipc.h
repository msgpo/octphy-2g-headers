/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_IPC.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.06.00-B964 (2016/05/31)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_IPC_H__
#define __OCTVC1_IPC_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Interprocess communication
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
 	IPC Header Definition
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
	tOCTVC1_IPC_MSG_FLAG_MASK :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_IPC_MSG_FLAG_MASK							tOCT_UINT8

#define cOCTVC1_IPC_MSG_FLAG_MASK_VALID						0x1		
#define cOCTVC1_IPC_MSG_FLAG_MASK_ERROR						0x8		
#define cOCTVC1_IPC_MSG_FLAG_BIT_OFFSET						28		
#define cOCTVC1_IPC_MSG_FLAG_BIT_MASK						0xF0000000	

/*-------------------------------------------------------------------------------------
 	IPC Message Header sequence.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_IPC_MSG_SEQUENCE_BIT_OFFSET					20		
#define cOCTVC1_IPC_MSG_SEQUENCE_BIT_MASK					0x0FF00000	

/*-------------------------------------------------------------------------------------
 	IPC Message Header ID.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_IPC_MSG_ID_BIT_OFFSET						0		
#define cOCTVC1_IPC_MSG_ID_BIT_MASK							0x000FFFFF	
/*-------------------------------------------------------------------------------------
	tOCTVC1_IPC_MSG_HEADER
 		IPC message Header

 Members:
	ulFlag_Seq_Id
 		bits[31:28] = Message flag tOCTVC1_IPC_MSG_FLAG_MASK_.
 		bits[27:20] = Sequence number
 		bits[19:0] = IPC Message Id.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulFlag_Seq_Id;

} tOCTVC1_IPC_MSG_HEADER;


#endif /* __OCTVC1_IPC_H__ */

