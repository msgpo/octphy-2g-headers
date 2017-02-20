/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_IRSC_VERSION.h

Copyright (c) 2017 Octasic Inc. All rights reserved.

Description: Contains the version of the IRSC API interface.

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

$Octasic_Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_IRSC_VERSION_H__
#define __OCTVC1_IRSC_VERSION_H__


/* The version ID is separated into the following sections:

      bit[31:25]:    Major version
      bit[24:18]:    Minor version
      bit[17:11]:    Bug fix version
      bit[10:0]:     Build number
*/
#define cOCTVC1_IRSC_VERSION_MAJOR              2
#define cOCTVC1_IRSC_VERSION_MINOR		7
#define cOCTVC1_IRSC_VERSION_MAINTENANCE	1
#define cOCTVC1_IRSC_VERSION_BUILD		1351

#define cOCTVC1_IRSC_VERSION_ID                 ( (cOCTVC1_IRSC_VERSION_MAJOR << 25) + \
                                                  (cOCTVC1_IRSC_VERSION_MINOR << 18) + \
                                                  (cOCTVC1_IRSC_VERSION_MAINTENANCE << 11) + \
                                                  cOCTVC1_IRSC_VERSION_BUILD )

#endif /* __OCTVC1_IRSC_VERSION_H__ */

