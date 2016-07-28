/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_CURSOR.h

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.06.00-B964 (2016/05/31)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_CURSOR_H__
#define __OCTVC1_CURSOR_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_types.h"
#include "octvc1_base.h"
#include "octvc1_handle.h"


/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	Object Get Mode
-------------------------------------------------------------------------------------*/
/*-------------------------------------------------------------------------------------
	tOCTVC1_OBJECT_CURSOR_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_OBJECT_CURSOR_ENUM							tOCT_UINT32

#define cOCTVC1_OBJECT_CURSOR_ENUM_DONE						0		
#define cOCTVC1_OBJECT_CURSOR_ENUM_SPECIFIC					1		
#define cOCTVC1_OBJECT_CURSOR_ENUM_FIRST					2		
#define cOCTVC1_OBJECT_CURSOR_ENUM_NEXT						3		
#define cOCTVC1_OBJECT_CURSOR_ENUM_SUB_OBJECT_FIRST			4		
#define cOCTVC1_OBJECT_CURSOR_ENUM_SUB_OBJECT_NEXT			5		

/*-------------------------------------------------------------------------------------
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET
 		Generic Handle Object Get structure,
 		Use when the object is identified by a tOCTVC1_HANDLE_OBJECT.

 Members:
	hObject
 		Object handle
	ulGetMode
		Default:	cOCTVC1_OBJECT_CURSOR_ENUM_FIRST
 		Get mode
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_HANDLE_OBJECT		hObject;
	tOCTVC1_OBJECT_CURSOR_ENUM	ulGetMode;

} tOCTVC1_CURSOR_HANDLE_OBJECT_GET;

/*-------------------------------------------------------------------------------------
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET_HANDLE_OBJECT
 		Handle object get structure when the parent is identified by a
 		tOCTVC1_HANDLE_OBJECT

 Members:
	hObject
 		Object handle of the parent
	ulGetMode
		Default:	cOCTVC1_OBJECT_CURSOR_ENUM_FIRST
 		Get mode
	hHandleObjectGet
 		Handle object to get
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_HANDLE_OBJECT		hObject;
	tOCTVC1_OBJECT_CURSOR_ENUM	ulGetMode;
	tOCTVC1_HANDLE_OBJECT		hHandleObjectGet;

} tOCTVC1_CURSOR_HANDLE_OBJECT_GET_HANDLE_OBJECT;

/*-------------------------------------------------------------------------------------
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET_SUB_OBJECT_ID
 		Sub-object get structure when the parent is identified by a
 		tOCTVC1_HANDLE_OBJECT

 Members:
	hObject
 		Object handle
	ulGetMode
		Default:	cOCTVC1_OBJECT_CURSOR_ENUM_FIRST
 		Get mode
	ulSubObjectId
 		Sub Object Id
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_HANDLE_OBJECT		hObject;
	tOCTVC1_OBJECT_CURSOR_ENUM	ulGetMode;
	tOCTVC1_SUB_OBJECT_ID		ulSubObjectId;

} tOCTVC1_CURSOR_HANDLE_OBJECT_GET_SUB_OBJECT_ID;

/*-------------------------------------------------------------------------------------
	tOCTVC1_CURSOR_INDEX_GET
 		Generic Index Object Get structure,
 		Use when the object is identified by a tOCTVC1_INDEX.

 Members:
	ulIndex
 		Object index
	ulGetMode
		Default:	cOCTVC1_OBJECT_CURSOR_ENUM_FIRST
 		Get mode
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_INDEX				ulIndex;
	tOCTVC1_OBJECT_CURSOR_ENUM	ulGetMode;

} tOCTVC1_CURSOR_INDEX_GET;

/*-------------------------------------------------------------------------------------
	tOCTVC1_CURSOR_INDEX_GET_SUB_INDEX
 		Generic Index Object Get structure,
 		when the parent is identified by tOCTVC1_INDEX.

 Members:
	ulParentIndex
 		Parent index
	ulGetMode
		Default:	cOCTVC1_OBJECT_CURSOR_ENUM_FIRST
 		Get mode
	ulSubIndex
 		Object index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_INDEX				ulParentIndex;
	tOCTVC1_OBJECT_CURSOR_ENUM	ulGetMode;
	tOCTVC1_INDEX				ulSubIndex;

} tOCTVC1_CURSOR_INDEX_GET_SUB_INDEX;

/*-------------------------------------------------------------------------------------
 	Legacy types. Please use the new cursors.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
	tOCTVC1_INDEX_CURSOR :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_INDEX_CURSOR								tOCTVC1_CURSOR_INDEX_GET



#endif /* __OCTVC1_CURSOR_H__ */

