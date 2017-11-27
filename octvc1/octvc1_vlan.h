/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_VLAN.h

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

#ifndef __OCTVC1_VLAN_H__
#define __OCTVC1_VLAN_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

#define cOCTVC1_VLAN_MAX_TAG								4		

/*-------------------------------------------------------------------------------------
	tOCTVC1_VLAN_PROTOCOL_ID_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_VLAN_PROTOCOL_ID_ENUM						tOCT_UINT32

#define cOCTVC1_VLAN_PROTOCOL_ID_ENUM_8100					0		
#define cOCTVC1_VLAN_PROTOCOL_ID_ENUM_88A8					1		
#define cOCTVC1_VLAN_PROTOCOL_ID_ENUM_9100					2		
#define cOCTVC1_VLAN_PROTOCOL_ID_ENUM_9200					3		

/*-------------------------------------------------------------------------------------
	tOCTVC1_VLAN_TAG

 Members:
	ulPriority
		Range:		[0..7]
		Default:	5
	ulVlanId
		Range:		[0..4095]
		Default:	0
	ulProtocolId
		Default:	cOCTVC1_VLAN_PROTOCOL_ID_ENUM_8100
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32						ulPriority;
	tOCT_UINT32						ulVlanId;
	tOCTVC1_VLAN_PROTOCOL_ID_ENUM	ulProtocolId;

} tOCTVC1_VLAN_TAG;

/*-------------------------------------------------------------------------------------
	tOCTVC1_VLAN_HEADER_INFO

 Members:
	ulNumVlanTag
		Range:		[0..cOCTVC1_VLAN_MAX_TAG]
		Default:	0
 		Number of Vlan TAGs present in the header. The tag inserted right after the
 		Ethernet header must be located at index 0 of aVlanTag while the one at the
 		highest index is located right before the transport header.
	aVlanTag
 		Array containing the VLAN TAG to present in the header for this member.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32			ulNumVlanTag;
	tOCTVC1_VLAN_TAG	aVlanTag[cOCTVC1_VLAN_MAX_TAG];

} tOCTVC1_VLAN_HEADER_INFO;


#endif /* __OCTVC1_VLAN_H__ */

