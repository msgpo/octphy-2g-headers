/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTDEV_OPUS_REV.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.00-B1314 (2017/01/18)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTDEV_OPUS_REV_H__
#define __OCTDEV_OPUS_REV_H__


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Revision history
-------------------------------------------------------------------------------------*/

                
#ifdef _M_OPUS1  
#define	OCT1010_REV_B
#endif /* _M_OPUS1 */

#ifdef	OCT1010_REV_A
	#define d1jnsrc		d1jnsrp
	#define d2jnsrc		d2jnsrp
	#define d4jnsrc		d4jnsrp
	#define d8jnsrc		d8jnsrp
	#define d16jnsrc	d16jnsrp
	#define d32jnsrc	d32jnsrp
	#define d64jnsrc	d64jnsrp
	#define d128jnsrc	d128jnsrp
	#define d1jnsc		d1jnsrp
	#define d2jnsc		d2jnsrp
	#define d4jnsc		d4jnsrp
	#define d8jnsc		d8jnsrp
	#define d16jnsc		d16jnsrp
	#define d32jnsc		d32jnsrp
	#define d64jnsc		d64jnsrp
	#define d128jnsc	d128jnsrp

	/* need for the migration from Rev A to Rev B
	 */
	#define mOCTDEV_OPUS_RDTSC_CORRECTION( f_ulTimestamp ) \
		_asm and 	f_ulTimestamp, 0x7FFFFFFF

	#define mOCTDEV_OPUS_RDTSC_CORRECTION_C( f_ulTimestamp ) \
		f_ulTimestamp &= 0x7FFFFFFF;

	#define mOCTDEV_OPUS_UNSEIZABLE_FIX( f_ulRegister ) \
		_asm { halt ( ( f_ulRegister & 0 ) != 0 ) }

	#define mOCTDEV_OPUS_UNSEIZABLE_FIX_C( f_ulRegister ) \
		{_chalt(( f_ulRegister & 0 ) != 0 );}

#endif /* OCT1010_REV_A */

#ifdef	OCT1010_REV_B
	#define mOCTDEV_OPUS_RDTSC_CORRECTION( f_ulTimestamp ) \
		_asm and 	f_ulTimestamp, 0x7FFFFFFF

	#define mOCTDEV_OPUS_RDTSC_CORRECTION_C( f_ulTimestamp ) \
		f_ulTimestamp &= 0x7FFFFFFF;

	#define mOCTDEV_OPUS_UNSEIZABLE_FIX( f_ulRegister ) \
		_asm { halt ( ( f_ulRegister & 0 ) != 0 ) }

	#define mOCTDEV_OPUS_UNSEIZABLE_FIX_C( f_ulRegister ) \
		{_chalt(( f_ulRegister & 0 ) != 0 );}

#endif /* OCT1010_REV_B */

#ifdef _M_OPUS2
	#define	OCT2200_REV_B
#endif /* _M_OPUS2 */
	
#ifdef OCT2200_REV_A
	#define mOCTDEV_OPUS_RDTSC_CORRECTION( f_ulTimestamp )
  #define mOCTDEV_OPUS_RDTSC_CORRECTION_C( f_ulTimestamp )
	
	#define mOCTDEV_OPUS_UNSEIZABLE_FIX( f_ulRegister )
  #define mOCTDEV_OPUS_UNSEIZABLE_FIX_C( f_ulRegister )
        
#endif /* OCT2200_REV_A */

#ifdef OCT2200_REV_B
	#define mOCTDEV_OPUS_RDTSC_CORRECTION( f_ulTimestamp )
  #define mOCTDEV_OPUS_RDTSC_CORRECTION_C( f_ulTimestamp )
	
	#define mOCTDEV_OPUS_UNSEIZABLE_FIX( f_ulRegister )
  #define mOCTDEV_OPUS_UNSEIZABLE_FIX_C( f_ulRegister )
        
#endif /* OCT2200_REV_B */
            
              
#endif /* __OCTDEV_OPUS_REV_H__ */

