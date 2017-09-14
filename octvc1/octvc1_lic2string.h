/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: octvc1_lic2string.h

Copyright (c) 2017 Octasic Inc. All rights reserved.

Description:

This file contains the lic2string implementation for package OCTVC1

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.08.00-B1418 (2017/03/21)

$Revision:  $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/


#ifndef __OCTVC1_LIC2STRING__
#define __OCTVC1_LIC2STRING__

#include "../octdev_types.h"
/* -------------------------------------------------------------------------------------
	OCTVC1_LIC2STRING
   -------------------------------------------------------------------------------------*/
#define mOCTVC1_LIC2STRING( _f_ulLic ) \
	octvc1_lic2string( _f_ulLic )

/* -------------------------------------------------------------------------------------
	OCTVC1_STRING2LIC
   -------------------------------------------------------------------------------------*/
#define mOCTVC1_STRING2LIC( _f_strLic ) \
	octvc1_string2lic( _f_strLic )

#ifndef OCTVC1_LIC2STRING_DECLARE
extern const char * octvc1_lic2string( tOCT_UINT32 f_ulLic );
#endif

#ifndef OCTVC1_STRING2LIC_DECLARE
extern tOCT_UINT32 octvc1_string2lic( const char * f_strLic );
#endif 


#include <stdio.h>
#include <string.h>
#include "gsm/octvc1_gsm_lic.h"


#ifdef OCTVC1_LIC2STRING_DECLARE
/* -------------------------------------------------------------------------------------
	octvc1_lic2string
   -------------------------------------------------------------------------------------*/
const char * octvc1_lic2string( tOCT_UINT32 f_ulLic )
{
	static char g_szUnknownoctvc1_lic2string[32];
	switch( f_ulLic )
	{
		case cOCTVC1_GSM_LIC_RF_BAND_ALL_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_ALL_ENABLE";
		case cOCTVC1_GSM_LIC_RF_BAND_410_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_410_ENABLE";
		case cOCTVC1_GSM_LIC_RF_BAND_450_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_450_ENABLE";
		case cOCTVC1_GSM_LIC_RF_BAND_480_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_480_ENABLE";
		case cOCTVC1_GSM_LIC_RF_BAND_710_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_710_ENABLE";
		case cOCTVC1_GSM_LIC_RF_BAND_750_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_750_ENABLE";
		case cOCTVC1_GSM_LIC_RF_BAND_810_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_810_ENABLE";
		case cOCTVC1_GSM_LIC_RF_BAND_850_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_850_ENABLE";
		case cOCTVC1_GSM_LIC_RF_BAND_900_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_900_ENABLE";
		case cOCTVC1_GSM_LIC_RF_BAND_1800_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_1800_ENABLE";
		case cOCTVC1_GSM_LIC_RF_BAND_1900_ENABLE:
			return "cOCTVC1_GSM_LIC_RF_BAND_1900_ENABLE";
		case cOCTVC1_GSM_LIC_GPRS_EDGE_ENABLE:
			return "cOCTVC1_GSM_LIC_GPRS_EDGE_ENABLE";
		case cOCTVC1_GSM_LIC_MULTI_TRX_ENABLE:
			return "cOCTVC1_GSM_LIC_MULTI_TRX_ENABLE";

		case 0:
		default:
			break;
	}
	sprintf( g_szUnknownoctvc1_lic2string, "0x%.8X", f_ulLic ); 
	return g_szUnknownoctvc1_lic2string;
}
#endif

#ifdef OCTVC1_STRING2LIC_DECLARE
/* -------------------------------------------------------------------------------------
	octvc1_string2lic
   -------------------------------------------------------------------------------------*/
tOCT_UINT32 octvc1_string2lic( const char * f_strLic )
{
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_ALL_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_ALL_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_410_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_410_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_450_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_450_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_480_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_480_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_710_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_710_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_750_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_750_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_810_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_810_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_850_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_850_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_900_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_900_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_1800_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_1800_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_RF_BAND_1900_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_RF_BAND_1900_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_GPRS_EDGE_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_GPRS_EDGE_ENABLE;
	if( strcmp( f_strLic, "cOCTVC1_GSM_LIC_MULTI_TRX_ENABLE" ) == 0 ) return cOCTVC1_GSM_LIC_MULTI_TRX_ENABLE;

	return( 0 );

}
#endif 

#endif /* __OCTVC1_LIC2STRING__ */
