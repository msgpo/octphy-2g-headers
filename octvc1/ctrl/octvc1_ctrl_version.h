/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_CTRL_VERSION.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

Description: Contains the version of the CTRL API interface.

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

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_CTRL_VERSION_H__
#define __OCTVC1_CTRL_VERSION_H__

#include "../octvc1_api.h"

/* The version ID is separated into the following sections:

      bit[31:27]:    Major version
      bit[26:21]:    Minor version
      bit[20:15]:    Bug fix version
      bit[14:0]:     Build number
*/
#define cOCTVC1_CTRL_VERSION_MAJOR		2
#define cOCTVC1_CTRL_VERSION_MINOR		11
#define cOCTVC1_CTRL_VERSION_MAINTENANCE	0
#define cOCTVC1_CTRL_VERSION_BUILD		1927

#define cOCTVC1_CTRL_VERSION_ID                 ( (cOCTVC1_CTRL_VERSION_MAJOR << cOCTVC1_API_VERSION_MASK_MAJOR_BIT_OFFSET) + \
                                                  (cOCTVC1_CTRL_VERSION_MINOR << cOCTVC1_API_VERSION_MASK_MINOR_BIT_OFFSET) + \
                                                  (cOCTVC1_CTRL_VERSION_MAINTENANCE << cOCTVC1_API_VERSION_MASK_MAINTENANCE_BIT_OFFSET) + \
                                                  (cOCTVC1_CTRL_VERSION_BUILD << cOCTVC1_API_VERSION_MASK_BUILD_BIT_OFFSET ) )

#endif /* __OCTVC1_CTRL_VERSION_H__ */

