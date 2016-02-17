/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_buffer_swap.h	

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

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_BUFFER_SWAP_H__
#define __OCTVC1_BUFFER_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_buffer.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_BUFFER_FORMAT_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_BUFFER_FORMAT_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */


#define mOCTVC1_BUFFER_FORMAT_MAIN_ENUM_SWAP  mOCTVC1_BUFFER_FORMAT_ENUM_SWAP

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_BUFFER_SWAP_H__ */
