/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_USER_ID.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.08.00-B1418 (2017/03/21)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_USER_ID_H__
#define __OCTVC1_USER_ID_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "octvc1_base.h"
#include "octvc1_module.h"


/************************  COMMON DEFINITIONS  *******************************/

#define cOCTVC1_USER_ID_MODULE_ID_BIT_SHIFT					24		 	/* Number of bit the module id is shifted in user id. */

/*-------------------------------------------------------------------------------------
 	Base process user id.
 	Octadf_internal Process user id.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_USER_ID_PROCESS_ENUM						tOCT_UINT32

#define cOCTVC1_USER_ID_PROCESS_ENUM_INVALID				0x00000000	
#define cOCTVC1_USER_ID_PROCESS_ENUM_MAIN_APP				((tOCT_UINT32)((0x00000000)|(cOCTVC1_MODULE_ID_ENUM_MAIN<<cOCTVC1_USER_ID_MODULE_ID_BIT_SHIFT)) )	
#define cOCTVC1_USER_ID_PROCESS_ENUM_MAIN_ROUTER			((tOCT_UINT32)((0x00000001)|(cOCTVC1_MODULE_ID_ENUM_MAIN<<cOCTVC1_USER_ID_MODULE_ID_BIT_SHIFT)) )	
#define cOCTVC1_USER_ID_PROCESS_ENUM_GSM_DL_0				((tOCT_UINT32)((0x00000100)|(cOCTVC1_MODULE_ID_ENUM_GSM<<cOCTVC1_USER_ID_MODULE_ID_BIT_SHIFT)) )	
#define cOCTVC1_USER_ID_PROCESS_ENUM_GSM_ULIM_0				((tOCT_UINT32)((0x00000200)|(cOCTVC1_MODULE_ID_ENUM_GSM<<cOCTVC1_USER_ID_MODULE_ID_BIT_SHIFT)) )	
#define cOCTVC1_USER_ID_PROCESS_ENUM_GSM_ULOM_0				((tOCT_UINT32)((0x00000300)|(cOCTVC1_MODULE_ID_ENUM_GSM<<cOCTVC1_USER_ID_MODULE_ID_BIT_SHIFT)) )	
#define cOCTVC1_USER_ID_PROCESS_ENUM_GSM_SCHED_0			((tOCT_UINT32)((0x00000400)|(cOCTVC1_MODULE_ID_ENUM_GSM<<cOCTVC1_USER_ID_MODULE_ID_BIT_SHIFT)) )	


#endif /* __OCTVC1_USER_ID_H__ */

