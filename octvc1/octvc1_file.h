/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_FILE.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.07.01-B1351 (2017/02/13)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_FILE_H__
#define __OCTVC1_FILE_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	File Header magic - indicates if file should be swapped because
 	different endianness.
 	"\x7F""OCT".
 	0x7F4F4354 the magic word
 	0x54434F7F the magic word backwards ( file needs to be swapped)
-------------------------------------------------------------------------------------*/
#define cOCTVC1_FILE_ENDIAN_MAGIC_WORD						0x7F4F4354	
#define cOCTVC1_FILE_ENDIAN_MAGIC_WORD_SWAPPED				0x54434F7F	

/*-------------------------------------------------------------------------------------
 	File name string length restriction.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_FILE_NAME_MAX_LENGTH						127		
/*-------------------------------------------------------------------------------------
	tOCTVC1_FILE_TYPE_ENUM : 	File Type description
-------------------------------------------------------------------------------------*/
#define tOCTVC1_FILE_TYPE_ENUM								tOCT_UINT32

#define cOCTVC1_FILE_TYPE_ENUM_NONE							0		
#define cOCTVC1_FILE_TYPE_ENUM_TEXT							1		
#define cOCTVC1_FILE_TYPE_ENUM_BIN							2		

/*-------------------------------------------------------------------------------------
	tOCTVC1_FILE_FORMAT_ENUM : 	File Type description
-------------------------------------------------------------------------------------*/
#define tOCTVC1_FILE_FORMAT_ENUM							tOCT_UINT32

#define cOCTVC1_FILE_FORMAT_ENUM_NONE						0		
#define cOCTVC1_FILE_FORMAT_ENUM_LOG						1		

/*-------------------------------------------------------------------------------------
 	File Header Type
-------------------------------------------------------------------------------------*/
#define cOCTVC1_FILE_TYPE_BIT_OFFSET						24		
#define cOCTVC1_FILE_TYPE_BIT_MASK							0xFF000000	

/*-------------------------------------------------------------------------------------
 	File Header Format Version
-------------------------------------------------------------------------------------*/
#define cOCTVC1_FILE_FORMAT_VERSION_BIT_OFFSET				16		
#define cOCTVC1_FILE_FORMAT_VERSION_BIT_MASK				0x00FF0000	

/*-------------------------------------------------------------------------------------
 	File Header Format
-------------------------------------------------------------------------------------*/
#define cOCTVC1_FILE_FORMAT_BIT_OFFSET						0		
#define cOCTVC1_FILE_FORMAT_BIT_MASK						0x0000FFFF	

/*-------------------------------------------------------------------------------------
 	File Header Size
-------------------------------------------------------------------------------------*/
#define cOCTVC1_FILE_HEADER_SIZE_BIT_OFFSET					0		
#define cOCTVC1_FILE_HEADER_SIZE_BIT_MASK					0x0000FFFF	

/*-------------------------------------------------------------------------------------
 	Minimum alignment in bytes.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_FILE_MIN_ALIGN_BIT_OFFSET					16		
#define cOCTVC1_FILE_MIN_ALIGN_BIT_MASK						0x00FF0000	
/*-------------------------------------------------------------------------------------
	tOCTVC1_FILE_HEADER
 		Generic file header

 Members:
	ulMagic
		Default:	cOCTVC1_FILE_ENDIAN_MAGIC_WORD
 		Magic file number.
 		"\x7F""OCT".
 		0x54434F7F on little endian machine.
 		0x7F4F4354 on big endian machine
	ul_Type_Ver
 		bits[31:24] = File Type.
 		bits[23:16] = File Format Version.
 		bits[15:0] = File Format.
	ulTimeStamp
 		Time Stamp of when file was first written.
	ul_Align_HdrSize
 		Minimum alignment in bytes. This indicates the minumum size of a payload in the
 		file,
 		that was used to ensure proper alignment (depends on architecture).
 		Header size with padding. This indicate where the file payload start (in byte).
 		bits[31:24] = Reserved.
 		bits[23:16] = Minimum alignment in bytes.
 		bits[15:0] = Header Size with padding.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulMagic;
	tOCT_UINT32	ul_Type_Ver;
	tOCT_UINT32	ulTimeStamp;
	tOCT_UINT32	ul_Align_HdrSize;

} tOCTVC1_FILE_HEADER;


#endif /* __OCTVC1_FILE_H__ */

