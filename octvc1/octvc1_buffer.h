/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_BUFFER.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.05.00-B818 (2016/02/11)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_BUFFER_H__
#define __OCTVC1_BUFFER_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "octvc1_module.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
	tOCTVC1_BUFFER_FORMAT_ENUM : 	Buffer format
 	Bits[31:16] Reserved
 	Bits[15:12] Specify the API type of a buffer.
 	Bits[11: 0] Specify the content type of a buffer.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_BUFFER_FORMAT_ENUM							tOCT_UINT32

#define cOCTVC1_BUFFER_FORMAT_ENUM_UNKNOWN					0x0000	
#define cOCTVC1_BUFFER_FORMAT_ENUM_MAIN						((tOCT_UINT32)(cOCTVC1_MODULE_ID_ENUM_MAIN<<12) )	

/*-------------------------------------------------------------------------------------
	tOCTVC1_BUFFER_FORMAT_MAIN_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_BUFFER_FORMAT_MAIN_ENUM						tOCTVC1_BUFFER_FORMAT_ENUM

#define cOCTVC1_BUFFER_FORMAT_MAIN_ENUM_PCAP_TRACE			((tOCTVC1_BUFFER_FORMAT_ENUM)(0x0001|cOCTVC1_BUFFER_FORMAT_ENUM_MAIN) )	
#define cOCTVC1_BUFFER_FORMAT_MAIN_ENUM_FILE_SYS			((tOCTVC1_BUFFER_FORMAT_ENUM)(0x0002|cOCTVC1_BUFFER_FORMAT_ENUM_MAIN) )	


#endif /* __OCTVC1_BUFFER_H__ */

