/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_IP.h

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

#ifndef __OCTVC1_IP_H__
#define __OCTVC1_IP_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
	tOCTVC1_IP_VERSION_ENUM : 	IP versions
-------------------------------------------------------------------------------------*/
#define tOCTVC1_IP_VERSION_ENUM								tOCTDEV_IP_VERSION_ENUM

#define cOCTVC1_IP_VERSION_ENUM_4							cOCTDEV_IP_VERSION_ENUM_4	
#define cOCTVC1_IP_VERSION_ENUM_6							cOCTDEV_IP_VERSION_ENUM_6	
#define cOCTVC1_IP_VERSION_ENUM_INVALID						cOCTDEV_IP_VERSION_ENUM_INVALID	

/*-------------------------------------------------------------------------------------
	tOCTVC1_IP_ADDRESS : 	IP address structure
-------------------------------------------------------------------------------------*/
#define tOCTVC1_IP_ADDRESS									tOCTDEV_IP_ADDRESS


                
/*--------------------------------------------------------------------------
	SWAP directive (for compatibility reason)
----------------------------------------------------------------------------*/
#define mOCTVC1_IP_ADDRESS_SWAP mOCTDEV_IP_ADDRESS_SWAP
            
              

#endif /* __OCTVC1_IP_H__ */

