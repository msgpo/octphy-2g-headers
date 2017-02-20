/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_ETH.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.01-B1351 (2017/02/13)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_ETH_H__
#define __OCTVC1_ETH_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "octvc1_base.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Ethernet port identifiers
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_ETH_PORT_ID_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_ETH_PORT_ID_ENUM							tOCT_UINT32

#define cOCTVC1_ETH_PORT_ID_ENUM_0							0		
#define cOCTVC1_ETH_PORT_ID_ENUM_1							1		
#define cOCTVC1_ETH_PORT_ID_ENUM_2							2		
#define cOCTVC1_ETH_PORT_ID_ENUM_3							3		
#define cOCTVC1_ETH_PORT_ID_ENUM_INVALID					0xFFFFFFFF	

#define cOCTVC1_ETH_802_1_PQ_TCI_INVALID					0xFFFFFFFF	 	/* Ethernet 802.1 pq definition */


#endif /* __OCTVC1_ETH_H__ */

