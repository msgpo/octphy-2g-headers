/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_radio_swap.h	

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

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_RADIO_SWAP_H__
#define __OCTVC1_RADIO_SWAP_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_swap_hdrs.h"
#include "octvc1_radio.h"

/*********************************  MACROS  **********************************/


#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_FREQ_UNIT_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_RADIO_FREQ_UNIT_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_STANDARD_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_RADIO_STANDARD_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_RADIO_STANDARD_FREQ_BAND_GSM_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_RADIO_STANDARD_FREQ_BAND_UMTS_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_RADIO_STANDARD_FREQ_BAND_LTE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_RADIO_STANDARD_FREQ_BAND_CDMA2000_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_STANDARD_FREQ_BAND_ID_SWAP( _f_pParms ){ 	tOCTVC1_RADIO_STANDARD_FREQ_BAND_ID * pOCTVC1_RADIO_STANDARD_FREQ_BAND_ID = (_f_pParms); SWAP_UNUSED(pOCTVC1_RADIO_STANDARD_FREQ_BAND_ID)\
	{ mOCTVC1_RADIO_STANDARD_ENUM_SWAP( &((tOCTVC1_RADIO_STANDARD_FREQ_BAND_ID *)pOCTVC1_RADIO_STANDARD_FREQ_BAND_ID)->ulStandard ); }  \
	((tOCTVC1_RADIO_STANDARD_FREQ_BAND_ID *)pOCTVC1_RADIO_STANDARD_FREQ_BAND_ID)->ulBandNumber = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_RADIO_STANDARD_FREQ_BAND_ID *)pOCTVC1_RADIO_STANDARD_FREQ_BAND_ID)->ulBandNumber); \
}
#else
#define mOCTVC1_RADIO_STANDARD_FREQ_BAND_ID_SWAP( pOCTVC1_RADIO_STANDARD_FREQ_BAND_ID )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_FREQUENCY_VALUE_SWAP( _f_pParms ){ 	tOCTVC1_RADIO_FREQUENCY_VALUE * pOCTVC1_RADIO_FREQUENCY_VALUE = (_f_pParms); SWAP_UNUSED(pOCTVC1_RADIO_FREQUENCY_VALUE)\
	{ mOCTVC1_RADIO_FREQ_UNIT_ENUM_SWAP( &((tOCTVC1_RADIO_FREQUENCY_VALUE *)pOCTVC1_RADIO_FREQUENCY_VALUE)->ulUnit ); }  \
	((tOCTVC1_RADIO_FREQUENCY_VALUE *)pOCTVC1_RADIO_FREQUENCY_VALUE)->ulValue = \
		mOCT_SWAP32_IF_LE(((tOCTVC1_RADIO_FREQUENCY_VALUE *)pOCTVC1_RADIO_FREQUENCY_VALUE)->ulValue); \
}
#else
#define mOCTVC1_RADIO_FREQUENCY_VALUE_SWAP( pOCTVC1_RADIO_FREQUENCY_VALUE )
#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_RADIO_CONFIG_SCRIPT_TYPE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_ID_DIRECTION_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_RADIO_ID_DIRECTION_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_RADIO_STANDARD_BANDWIDTH_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#if defined( _OCT_ENDIAN_TYPE_LE_ )
#define mOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM_SWAP( pType ){ \
		*((tOCT_UINT32 *)pType) = mOCT_SWAP32_IF_LE( *((tOCT_UINT32 *)pType) ); }
#else

#define mOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM_SWAP( pType )

#endif /* _OCT_ENDIAN_TYPE_LE_ */

#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_RADIO_SWAP_H__ */
