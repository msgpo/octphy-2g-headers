/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_MODULE.h

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

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_MODULE_H__
#define __OCTVC1_MODULE_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "octvc1_base.h"
#include "octvc1_handle.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Resource
-------------------------------------------------------------------------------------*/
#define cOCTVC1_RESOURCE_DESCRIPTION_MAX_LENGTH				15		

/*-------------------------------------------------------------------------------------
	tOCTVC1_RESOURCE
 		System memory

 Members:
	szDescription
 		Resource description
	ulModuleId
 		Module Id.
	ulLocalMemorySize
 		Local Memory size in bytes.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_INT8	szDescription[(cOCTVC1_RESOURCE_DESCRIPTION_MAX_LENGTH+1)];/* NOSWAPMAC */
	tOCT_UINT32	ulModuleId;
	tOCT_UINT32	ulLocalMemorySize;

} tOCTVC1_RESOURCE;

/*-------------------------------------------------------------------------------------
 	Last process identifiers
-------------------------------------------------------------------------------------*/

#define cOCTVC1_PROCESS_LAST_OADF_PROCESS_TYPE_ENUM_ID		5		

/*-------------------------------------------------------------------------------------
 	Module Data Header Definition
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_MODULE_ID_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_MODULE_ID_ENUM								tOCT_UINT32

#define cOCTVC1_MODULE_ID_ENUM_GENERIC						0x00	
#define cOCTVC1_MODULE_ID_ENUM_MAIN							0x01	
#define cOCTVC1_MODULE_ID_ENUM_PKT_API						0x02	
#define cOCTVC1_MODULE_ID_ENUM_CTRL							0x03	
#define cOCTVC1_MODULE_ID_ENUM_RESERVED						0x04	
#define cOCTVC1_MODULE_ID_ENUM_JOB							0x05	
#define cOCTVC1_MODULE_ID_ENUM_HW							0x06	
#define cOCTVC1_MODULE_ID_ENUM_IRSC							0x07	

/*-------------------------------------------------------------------------------------
 	Application modules definitions.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_MODULE_ID_ENUM_OBM							0x08	
#define cOCTVC1_MODULE_ID_ENUM_APP_TEST						0x09	
#define cOCTVC1_MODULE_ID_ENUM_SDR							0x0A	
#define cOCTVC1_MODULE_ID_ENUM_GSM							0x0B	
#define cOCTVC1_MODULE_ID_ENUM_LTE							0x0C	
#define cOCTVC1_MODULE_ID_ENUM_3G_NODEB						0x0D	
#define cOCTVC1_MODULE_ID_ENUM_RUS							0x0E	
#define cOCTVC1_MODULE_ID_ENUM_LIB_TOOLKIT					0x0F	
#define cOCTVC1_MODULE_ID_ENUM_UE3G							0x10	
#define cOCTVC1_MODULE_ID_ENUM_TOOLBOX						0x11	
#define cOCTVC1_MODULE_ID_ENUM_LTE_UE						0x12	
#define cOCTVC1_MODULE_ID_ENUM_GSM_UE						0x13	
#define cOCTVC1_MODULE_ID_ENUM_CDMA2K						0x14	

#define cOCTVC1_MODULE_ID_BIT_OFFSET						24		
#define cOCTVC1_MODULE_ID_BIT_MASK							0xFF	

/*-------------------------------------------------------------------------------------
 	Module Application ID
-------------------------------------------------------------------------------------*/

                
/*----------------------------------------------------------------------------
	tOCTVC1_MODULE_APPLICATION_ID
	
	[cOCTVC1_MODULE_ID|Value]
	[31:16] : reserved
	[15:8] : API Module ID tOCTVC1_MODULE_ID_ENUM: 
	[7:0]  : Index 
----------------------------------------------------------------------------*/
typedef tOCT_UINT32	tOCTVC1_MODULE_APPLICATION_ID;
                
              
#define cOCTVC1_MODULE_APPLICATION_ID_MODULE_BIT_OFFSET		8		
#define cOCTVC1_MODULE_APPLICATION_ID_MODULE_BIT_MASK		0x000000FF	
#define cOCTVC1_MODULE_APPLICATION_ID_INDEX_BIT_OFFSET		0		
#define cOCTVC1_MODULE_APPLICATION_ID_INDEX_BIT_MASK		0x000000FF	

/*-------------------------------------------------------------------------------------
 	Main Application Module Id
-------------------------------------------------------------------------------------*/

#define cOCTVC1_MODULE_APPLICATION_ID_MAIN_SYSTEM			((0x00)|(cOCTVC1_MODULE_ID_ENUM_MAIN<<cOCTVC1_MODULE_APPLICATION_ID_MODULE_BIT_OFFSET))	

/*-------------------------------------------------------------------------------------
 	Module Data ID
-------------------------------------------------------------------------------------*/

#define cOCTVC1_MODULE_DATA_ID_BIT_OFFSET					0		
#define cOCTVC1_MODULE_DATA_ID_BIT_MASK						0x0000FFFF	

/*-------------------------------------------------------------------------------------
	tOCTVC1_MODULE_DATA
 		Format Module Data

 Members:
	ulModuleDataId
 		bits[31:24] = ModuleId -> cOCTVC1_MODULE_ID_ENUM_.
 		bits[23:16] = Reserved
 		bits[15:0] = DataId -> Module specific data exchange.
	ulModuleDataSize
 		Size of Module Data structure.
	hLogicalObj
 		Associated object.
	ulTimestamp
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32				ulModuleDataId;
	tOCT_UINT32				ulModuleDataSize;
	tOCTVC1_HANDLE_OBJECT	hLogicalObj;
	tOCT_UINT32				ulTimestamp;

} tOCTVC1_MODULE_DATA;


#endif /* __OCTVC1_MODULE_H__ */

