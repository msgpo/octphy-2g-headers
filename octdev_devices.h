/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTDEV_DEVICES.h

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

#ifndef __OCTDEV_DEVICES_H__
#define __OCTDEV_DEVICES_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
	tOCTDEV_DEVICES_TYPE_ENUM : 	Octasic Device type.
-------------------------------------------------------------------------------------*/
#define tOCTDEV_DEVICES_TYPE_ENUM							tOCT_UINT32

#define cOCTDEV_DEVICES_TYPE_ENUM_INVALID					0x0		
#define cOCTDEV_DEVICES_TYPE_ENUM_OCT1010					0x1		
#define cOCTDEV_DEVICES_TYPE_ENUM_OCT2200					0x2		
#define cOCTDEV_DEVICES_TYPE_ENUM_CPU						0xF		

/*-------------------------------------------------------------------------------------
	tOCTDEV_DEVICES_DSP_CORE_TYPE_ENUM : 	Octasic DSP Core type.
-------------------------------------------------------------------------------------*/
#define tOCTDEV_DEVICES_DSP_CORE_TYPE_ENUM					tOCT_UINT32

#define cOCTDEV_DEVICES_DSP_CORE_TYPE_ENUM_INVALID			0x0		
#define cOCTDEV_DEVICES_DSP_CORE_TYPE_ENUM_OPUS1			0x1		
#define cOCTDEV_DEVICES_DSP_CORE_TYPE_ENUM_OPUS2			0x2		

/*-------------------------------------------------------------------------------------
 	OCT1010 specific definitions.
-------------------------------------------------------------------------------------*/
#define cOCTDEV_DEVICES_OCT1010_MAX_CORE_NUMBER				15		 	/* Maximum number of core in the OCT1010. */
#define cOCTDEV_DEVICES_OCT1010_MAX_VSPMGR_THREADS			12		 	/* Maximum number of VSP Mgr threads that can be started on the OCT1010. */
#define cOCTDEV_DEVICES_OCT1010_CORE_TYPE					cOCTDEV_DEVICES_DSP_CORE_TYPE_ENUM_OPUS1	 	/* Type of DSP Core in the OCT1010. */
#define cOCTDEV_DEVICES_OCT1010_MAX_ETH_PORT_NUMBER			2		 	/* Maximum number of Ethernet port in the OCT1010. */

/*-------------------------------------------------------------------------------------
 	OCT2200 specific definitions.
-------------------------------------------------------------------------------------*/
#define cOCTDEV_DEVICES_OCT2200_MAX_CORE_NUMBER				24		 	/* Maximum number of core in the OCT2200. */
#define cOCTDEV_DEVICES_OCT2200_MAX_VSPMGR_THREADS			21		 	/* Maximum number of VSP Mgr threads that can be started on the OCT2200. */
#define cOCTDEV_DEVICES_OCT2200_CORE_TYPE					cOCTDEV_DEVICES_DSP_CORE_TYPE_ENUM_OPUS2	 	/* Type of DSP Core in the OCT2200. */
#define cOCTDEV_DEVICES_OCT2200_MAX_ETH_PORT_NUMBER			4		 	/* Maximum number of Ethernet port in the OCT2200. */


#endif /* __OCTDEV_DEVICES_H__ */

