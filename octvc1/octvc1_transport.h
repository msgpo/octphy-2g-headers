/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_TRANSPORT.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.10.00-B1837 (2018/02/21)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_TRANSPORT_H__
#define __OCTVC1_TRANSPORT_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "octvc1_base.h"
#include "octvc1_eth.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Transport Type
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
	tOCTVC1_TRANSPORT_TYPE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_TRANSPORT_TYPE_ENUM							tOCT_UINT32

#define cOCTVC1_TRANSPORT_TYPE_ENUM_NONE					0		 	/* No transport */
#define cOCTVC1_TRANSPORT_TYPE_ENUM_ETH						1		 	/* Ethernet Tranport */
#define cOCTVC1_TRANSPORT_TYPE_ENUM_UDP						2		 	/* UDP Tranport */
#define cOCTVC1_TRANSPORT_TYPE_ENUM_TCP						1		 	/* TCP Tranport */
#define cOCTVC1_TRANSPORT_TYPE_ENUM_LOCAL					1		 	/* Local Tranport */
#define cOCTVC1_TRANSPORT_TYPE_ENUM_IPC						1		 	/* IPC Tranport */
#define cOCTVC1_TRANSPORT_TYPE_ENUM_USER					10		 	/* User Tranport */

/*-------------------------------------------------------------------------------------
 	Transport Address
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_TRANSPORT_ADDRESS

 Members:
	ulTransportType
		Default:	cOCTVC1_TRANSPORT_TYPE_ENUM_NONE
 		Target file system to file server transport type.
	Eth
 		Ethernet destination information.
 		Only valid if ulTransportType set to cOCTDEV_TRANSPORT_TYPE_ENUM_ETH.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_TRANSPORT_TYPE_ENUM	ulTransportType;
	tOCTVC1_ETH_ADDRESS			Eth;

} tOCTVC1_TRANSPORT_ADDRESS;


#endif /* __OCTVC1_TRANSPORT_H__ */

