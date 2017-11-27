/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_TAP.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.09.00-B1607 (2017/08/29)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_TAP_H__
#define __OCTVC1_TAP_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Tap
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_TAP_DIRECTION_ENUM : 	Tap direction.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_TAP_DIRECTION_ENUM							tOCT_UINT32

#define cOCTVC1_TAP_DIRECTION_ENUM_TX						0		
#define cOCTVC1_TAP_DIRECTION_ENUM_RX						1		

/*-------------------------------------------------------------------------------------
	tOCTVC1_TAP_ID : 	TAP_ID : [ApplicationModuleId|Direction|Index].
 	ModuleId (16bits)-> Application Module Id[tOCTVC1_MODULE_ID_ENUM|index] .
 	Direction -> cOCTVC1_TAP_DIRECTION_ENUM_ .
-------------------------------------------------------------------------------------*/
#define tOCTVC1_TAP_ID										tOCT_UINT32

#define cOCTVC1_TAP_ID_MASK_MODULE_ID_BIT					0x0000FFFF	
#define cOCTVC1_TAP_ID_MASK_MODULE_ID_BIT_OFFSET			16		
#define cOCTVC1_TAP_ID_MASK_MODULE_ID						((tOCT_UINT32)(cOCTVC1_TAP_ID_MASK_MODULE_ID_BIT<<cOCTVC1_TAP_ID_MASK_MODULE_ID_BIT_OFFSET) )	

#define cOCTVC1_TAP_ID_MASK_DIRECTION_BIT					0x000000FF	
#define cOCTVC1_TAP_ID_MASK_DIRECTION_BIT_OFFSET			8		
#define cOCTVC1_TAP_ID_MASK_DIRECTION						((tOCT_UINT32)(cOCTVC1_TAP_ID_MASK_DIRECTION_BIT<<cOCTVC1_TAP_ID_MASK_DIRECTION_BIT_OFFSET) )	

#define cOCTVC1_TAP_ID_MASK_INDEX_BIT						0x000000FF	
#define cOCTVC1_TAP_ID_MASK_INDEX_BIT_OFFSET				0		
#define cOCTVC1_TAP_ID_MASK_INDEX							((tOCT_UINT32)(cOCTVC1_TAP_ID_MASK_INDEX_BIT<<cOCTVC1_TAP_ID_MASK_INDEX_BIT_OFFSET) )	


#endif /* __OCTVC1_TAP_H__ */

