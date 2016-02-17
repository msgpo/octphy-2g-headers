/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_MODULE.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.04.00-B662 (2015/10/28)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_MODULE_H__
#define __OCTVC1_MODULE_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "octvc1_base.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Last process identifiers
-------------------------------------------------------------------------------------*/

#define cOCTVC1_PROCESS_LAST_OADF_PROCESS_TYPE_ENUM_ID		5		

/*-------------------------------------------------------------------------------------
 	Module ID identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_MODULE_ID_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_MODULE_ID_ENUM								tOCT_UINT32

#define cOCTVC1_MODULE_ID_ENUM_GENERIC						0x00	
#define cOCTVC1_MODULE_ID_ENUM_MAIN							0x01	
#define cOCTVC1_MODULE_ID_ENUM_PKT_API						0x02	
#define cOCTVC1_MODULE_ID_ENUM_CTRL							0x03	
#define cOCTVC1_MODULE_ID_ENUM_LICENSING					0x04	
#define cOCTVC1_MODULE_ID_ENUM_TEST							0x05	
#define cOCTVC1_MODULE_ID_ENUM_HW							0x06	
#define cOCTVC1_MODULE_ID_ENUM_IRSC							0x07	
#define cOCTVC1_MODULE_ID_ENUM_OBM							0x08	
#define cOCTVC1_MODULE_ID_ENUM_SDR							0x0A	
#define cOCTVC1_MODULE_ID_ENUM_GSM							0x0B	
#define cOCTVC1_MODULE_ID_ENUM_LTE							0x0C	
#define cOCTVC1_MODULE_ID_ENUM_UMTS							0x0D	
#define cOCTVC1_MODULE_ID_ENUM_RUS							0x0E	

/*-------------------------------------------------------------------------------------
	tOCTVC1_MODULE_DATA
 		Format Module Data

 Members:
	ulModuleId
 		Module Id.
	ulModuleDataId
 		Module Data Id.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MODULE_ID_ENUM	ulModuleId;
	tOCT_UINT32				ulModuleDataId;

} tOCTVC1_MODULE_DATA;


#endif /* __OCTVC1_MODULE_H__ */

