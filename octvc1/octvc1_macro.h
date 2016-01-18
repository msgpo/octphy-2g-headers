/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_MACRO.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.03.00-B560 (2015/08/07)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_MACRO_H__
#define __OCTVC1_MACRO_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "../octdev_macro.h"
#include "octvc1_handle.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Generic swap macros
-------------------------------------------------------------------------------------*/

                
/*--------------------------------------------------------------------------
	32-bit Endian Swapping when target is Little Endian 
----------------------------------------------------------------------------*/
#if !defined( mOCTVC1_SWAP32_IF_LE )
#define mOCTVC1_SWAP32_IF_LE( f_ulValue )  mOCT_SWAP32_IF_LE( f_ulValue )
#endif /* mOCTVC1_SWAP32_IF_LE */

/*--------------------------------------------------------------------------
	16-bit Endian Swapping when target is Little Endian 
----------------------------------------------------------------------------*/
#if !defined( mOCTVC1_SWAP16_IF_LE )
#define mOCTVC1_SWAP16_IF_LE( f_usValue ) mOCT_SWAP16_IF_LE( f_usValue )
#endif /* mOCTVC1_SWAP16_IF_LE */

/*--------------------------------------------------------------------------
	Create a TSST Identifier 
----------------------------------------------------------------------------*/

#define mOCTVC1_MAKE_TSST_ID( f_ulStream, f_ulTimeslot ) \
		( ( ((f_ulStream) & 0x1f) << 10 ) + \
			((f_ulTimeslot) & 0x3ff) )

/*--------------------------------------------------------------------------
	Get Vocoder Mask from a Vocoder Type Value
----------------------------------------------------------------------------*/
/* what 32-bit DWORD index the bit mask corresponds to */
#define mOCTVC1_GET_VOCMASK_INDEX( f_ulEncoderType ) \
	(  (((f_ulEncoderType) >> 5) & 0x3) )

/* The actual bit mask for the 32-bit index */
#define mOCTVC1_GET_VOCMASK_BIT( f_ulEncoderType ) \
	(  (1 << ((f_ulEncoderType) & 0x1F))  )
            
              

#endif /* __OCTVC1_MACRO_H__ */

