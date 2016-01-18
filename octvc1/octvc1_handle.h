/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_HANDLE.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.03.00-B560 (2015/08/07)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_HANDLE_H__
#define __OCTVC1_HANDLE_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Handle Type Definitions
-------------------------------------------------------------------------------------*/

#define cOCTVC1_HANDLE_TYPE_OBJECT							0x00000000	
#define cOCTVC1_HANDLE_TYPE_SPECIAL							0xC0000000	

/*-------------------------------------------------------------------------------------
 	Special Object Handle.
 	These handle are used by setting
 	tOCTVC1_HANDLE.aulHandle[0] to the selected value.
-------------------------------------------------------------------------------------*/

#define cOCTVC1_HANDLE_INVALID								0xFFFFFFFF	
#define cOCTVC1_HANDLE_TX_ETHERNET							0xFFFFFFFE	
#define cOCTVC1_HANDLE_RX_ETHERNET							0xFFFFFFFD	

/*-------------------------------------------------------------------------------------
 	Generic Definitions
-------------------------------------------------------------------------------------*/

#define cOCTVC1_DO_NOT_MODIFY								0xEEEEEEEE	
#define cOCTVC1_INDEX_INVALID								0xFFFFFFFF	
#define cOCTVC1_HANDLE_OBJECT_LIST_MAX_ENTRY				100		
#define cOCTVC1_HANDLE_OBJECT32_NAME_LIST_MAX_ENTRY			25		
#define cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH				31		

/*-------------------------------------------------------------------------------------
 	Base Object Type, for MAIN API
-------------------------------------------------------------------------------------*/

#define cOCTVC1_HANDLE_BASE_OBJ_TYPE_MAIN_MASK				0xFF00	
#define cOCTVC1_HANDLE_BASE_OBJ_TYPE_INVALID				0x0000	
#define cOCTVC1_HANDLE_BASE_OBJ_TYPE_MAIN					(cOCTVC1_MAIN_UID<<8)	

/*-------------------------------------------------------------------------------------
 	Generic Vocallo Object Handle
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_HANDLE_OBJECT : 	Handle Object Definitions
 	bits[31:20] = Object Type
 	bits[19:0] = Object Instance bits
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HANDLE_OBJECT								tOCT_UINT32


/*-------------------------------------------------------------------------------------
	tOCTVC1_OBJECT32_NAME

 Members:
	ulObject32
 		32 bits object identifier
 		May be tOCTVC1_HANDLE_OBJECT, tOCTVC1_SUB_OBJECT_ID, tOCTVC1_INDEX or any 32bits
	szDisplayName
 		Name given to the object. Normally use for display name threw populate
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulObject32;
	tOCT_UINT8	szDisplayName[(cOCTVC1_HANDLE_OBJECT32_NAME_MAX_LENGTH+1)];

} tOCTVC1_OBJECT32_NAME;

/*-------------------------------------------------------------------------------------
	tOCTVC1_SUB_OBJECT_ID : 	Identifier specific to a child.
 	Implementation is specific for every parent.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_SUB_OBJECT_ID								tOCT_UINT32


/*-------------------------------------------------------------------------------------
	tOCTVC1_INDEX : 	Index specific to an object.
 	Implementation is specific for every object.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_INDEX										tOCT_UINT32



#endif /* __OCTVC1_HANDLE_H__ */

