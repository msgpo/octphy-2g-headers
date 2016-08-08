/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_UDP.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.00-B1039 (2016/07/22)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_UDP_H__
#define __OCTVC1_UDP_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

#define cOCTVC1_UDP_PORT_INVALID							cOCTDEV_UDP_PORT_INVALID	 	/* Invalid UDP port specification. */

/*-------------------------------------------------------------------------------------
	tOCTVC1_UDP_ADDRESS : 	UDP address structure
-------------------------------------------------------------------------------------*/
#define tOCTVC1_UDP_ADDRESS									tOCTDEV_UDP_ADDRESS


                
/*--------------------------------------------------------------------------
	SWAP directive (for compatibility reason)
----------------------------------------------------------------------------*/
#define mOCTVC1_UDP_ADDRESS_SWAP mOCTDEV_UDP_ADDRESS_SWAP
            
              

#endif /* __OCTVC1_UDP_H__ */

