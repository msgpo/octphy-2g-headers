/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTDEV_MACRO.h

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

#ifndef __OCTDEV_MACRO_H__
#define __OCTDEV_MACRO_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Generic swap macros
-------------------------------------------------------------------------------------*/

                
/*--------------------------------------------------------------------------
	64-bit Endian Swapping when target is Little Endian 
----------------------------------------------------------------------------*/
#if !defined( mOCT_SWAP64_IF_LE )
		
#if defined( _OCT_ENDIAN_TYPE_LE_ )

#if defined( __linux__ )
/* Linux (and probably other unices') htonl implementation is far more
 * efficient than our own; Win32 implementation, howerever is similar to
 * our own BUT with the added cost of a function call */
		
#include <arpa/inet.h>
#define mOCT_SWAP64_IF_LE( f_ullValue )	(((uint64_t)ntohl(f_ullValue)) << 32 | ntohl(f_ullValue>>32))
		
#else /* __linux__ */
		
#define mOCT_SWAP64_IF_LE( f_ullValue ) \
			(((tOCT_UINT64)(f_ullValue) << 56) | \
      (((tOCT_UINT64)(f_ullValue) << 40) & 0xff000000000000ULL) | \
      (((tOCT_UINT64)(f_ullValue) << 24) & 0xff0000000000ULL) | \
      (((tOCT_UINT64)(f_ullValue) << 8)  & 0xff00000000ULL) | \
      (((tOCT_UINT64)(f_ullValue) >> 8)  & 0xff000000ULL) | \
      (((tOCT_UINT64)(f_ullValue) >> 24) & 0xff0000ULL) | \
      (((tOCT_UINT64)(f_ullValue) >> 40) & 0xff00ULL) | \
      ((tOCT_UINT64)(f_ullValue)  >> 56))          
#endif /* __linux__ */
#else

#define mOCT_SWAP64_IF_LE( f_ullValue )	(f_ullValue)

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#endif /* mOCT_SWAP64_IF_LE */
                
/*--------------------------------------------------------------------------
	32-bit Endian Swapping when target is Little Endian 
----------------------------------------------------------------------------*/
#if !defined( mOCT_SWAP32_IF_LE )
#if defined( __linux__ )
/* Linux (and probably other unices') htonl implementation is far more
 * efficient than our own; Win32 implementation, howerever is similar to
 * our own BUT with the added cost of a function call */
		
#include <arpa/inet.h>
#define mOCT_SWAP32_IF_LE	htonl
		
#else /* __linux__ */
		
#if defined( _OCT_ENDIAN_TYPE_LE_ )
		
#define mOCT_SWAP32_IF_LE( f_ulValue ) \
		    ( (((f_ulValue) & 0xff000000 ) >> 24) | \
		      (((f_ulValue) & 0x00ff0000 ) >> 8) | \
		      (((f_ulValue) & 0x0000ff00 ) << 8) | \
		      (((f_ulValue) & 0x000000ff ) << 24)  )
#else
		
#define mOCT_SWAP32_IF_LE( f_ulValue )	(f_ulValue)
		
#endif /* _OCT_ENDIAN_TYPE_LE_ */
#endif /* __linux__ */
#endif /* mOCT_SWAP32_IF_LE */

/*--------------------------------------------------------------------------
	16-bit Endian Swapping when target is Little Endian 
----------------------------------------------------------------------------*/
#if !defined( mOCT_SWAP16_IF_LE )
#if defined( __linux__ )
/* Linux (and probably other unices') htons implementation is far more
 * efficient than our own; Win32 implementation, howerever is similar to
 * our own BUT with the added cost of a function call */
		
#include <arpa/inet.h>
#define mOCT_SWAP16_IF_LE	htons
		
#else /* __linux__ */
		
#if defined( _OCT_ENDIAN_TYPE_LE_ )
		
#define mOCT_SWAP16_IF_LE( f_usValue ) \
		    ( (((f_usValue) & 0x00ff ) << 8) | \
		      (((f_usValue) & 0xff00 ) >> 8) ) 
#else
	
#define mOCT_SWAP16_IF_LE( f_usValue )	(f_usValue)
		
#endif /* _OCT_ENDIAN_TYPE_LE_ */
#endif /* __linux__ */
#endif /* mOCT_SWAP16_IF_LE */
            
              

#endif /* __OCTDEV_MACRO_H__ */

