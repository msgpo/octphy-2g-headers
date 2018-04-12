/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_MAIN_API_PRIV.h

Copyright (c) 2018 Octasic Inc. All rights reserved.

Description: Contains the definition of the MAIN API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.10.00-B1837 (2018/02/21)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_MAIN_API_PRIV_H__
#define __OCTVC1_MAIN_API_PRIV_H__


/*****************************  INCLUDE FILES  *******************************/
#include "octvc1_main_api.h"
#include "octvc1_main_id_priv.h"
#include "octvc1_main_rc_priv.h"

/************************  COMMON DEFINITIONS  *******************************/

/*-------------------------------------------------------------------------------------
 	MAIN API private definitions
-------------------------------------------------------------------------------------*/
#define cOCTVC1_MAIN_PRIVATE_API_CMD_PASSWORD				0x1FE75CB2	

/*-------------------------------------------------------------------------------------
 	Infraction related definitions.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_LICENSE_INFRACTION_TYPE_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_MAIN_LICENSE_INFRACTION_TYPE_ENUM			tOCT_UINT32

#define cOCTVC1_MAIN_LICENSE_INFRACTION_TYPE_ENUM_NONE		0		
#define cOCTVC1_MAIN_LICENSE_INFRACTION_TYPE_ENUM_MCC		1		

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_LICENSE_INFRACTION_FILE_HEADER_VERSION_ENUM :
-------------------------------------------------------------------------------------*/
#define tOCTVC1_MAIN_LICENSE_INFRACTION_FILE_HEADER_VERSION_ENUM	tOCT_UINT8

#define cOCTVC1_MAIN_LICENSE_INFRACTION_FILE_HEADER_VERSION_ENUM_1	0x01	 	/* Header size is 16 bytes */

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_LICENSE_INFRACTION_FILE_HEADER
 		Infraction file header

 Members:
	ulModuleId
 		Associated module ID: tOCTVC1_MODULE_ID_ENUM
	ulInfractionType
 		Infraction type
	usInfractionIndex
 		Specify the index of the infraction based on the DSP total infraction number.
	usInfractionMax
 		Specify the maximum number of the infraction.
	ulPayloadLength
 		File infraction payload length.
	ulOadfVersionId
 		OADF version Id.
	aulReserved
 		Reserved for padding.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MODULE_ID_ENUM						ulModuleId;
	tOCTVC1_MAIN_LICENSE_INFRACTION_TYPE_ENUM	ulInfractionType;
	tOCT_UINT16									usInfractionIndex;
	tOCT_UINT16									usInfractionMax;
	tOCT_UINT32									ulPayloadLength;
	tOCT_UINT32									ulOadfVersionId;
	tOCT_UINT32									aulReserved[cOCTVC1_ETH_PORT_ID_ENUM_3];

} tOCTVC1_MAIN_LICENSE_INFRACTION_FILE_HEADER;










/*****************************  METHODS  *************************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD

 Members:
	Header
 		OCTVC1 Message Header
	hInfraction
 		Infraction identifier.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_HANDLE_OBJECT	hInfraction;

} tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_RSP

 Members:
	Header
 		OCTVC1 Message Header
	hInfraction
	ulInfractionType
	ulIndex
 		Specify the index of the infraction based on the DSP total infraction number.
	szFileName
 		NULL terminated name of the file associated to this infraction.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER							Header;
	tOCTVC1_HANDLE_OBJECT						hInfraction;
	tOCTVC1_MAIN_LICENSE_INFRACTION_TYPE_ENUM	ulInfractionType;
	tOCT_UINT32									ulIndex;
	tOCT_INT8									szFileName[(cOCTVC1_MAIN_FILE_NAME_MAX_LENGTH+1)];

} tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD
 		List the license infraction that occurs since the application start.

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;

} tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ObjectCursor
 		Object cursor
	ObjectNameList
 		Object32 named list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_HANDLE_OBJECT_GET	ObjectCursor;
	tOCTVC1_LIST_NAME_OBJECT32_GET		ObjectNameList;

} tOCTVC1_MAIN_MSG_LICENSING_LIST_INFRACTION_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulSendStateChangeEvtFlag
 		Specify to send infraction state change events.
	ulSessionIndex
 		Session index where to send infraction state change events.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_BOOL32			ulSendStateChangeEvtFlag;
	tOCTVC1_INDEX		ulSessionIndex;

} tOCTVC1_MAIN_MSG_LICENSING_INFO_INFRACTION_CONFIG_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulSendStateChangeEvtFlag
		Default:	cOCTVC1_DO_NOT_MODIFY
 		Specify to send infraction state change events.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_BOOL32			ulSendStateChangeEvtFlag;

} tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_LICENSING_MODIFY_INFRACTION_CONFIG_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulApplyHiddenFlag
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_BOOL32			ulApplyHiddenFlag;

} tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_INFO_MODULE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulApplyHiddenFlag
		Default:	cOCTVC1_DO_NOT_MODIFY
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_BOOL32			ulApplyHiddenFlag;

} tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_MAIN_MSG_APPLICATION_CONFIG_MODIFY_MODULE_RSP;


/*****************************  MODULE_DATA  *************************************/

/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/
#include "octvc1_main_evt_priv.h"

#endif /* __OCTVC1_MAIN_API_PRIV_H__ */

