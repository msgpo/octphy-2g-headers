/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\

File: OCTVC1_HW_API.h

Copyright (c) 2016 Octasic Inc. All rights reserved.

Description: Contains the definition of the HW API.

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


Release: OCTSDR Software Development Kit OCTSDR_GSM-02.05.00-B818 (2016/02/11)

$Revision: $

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#ifndef __OCTVC1_HW_API_H__
#define __OCTVC1_HW_API_H__


/*****************************  INCLUDE FILES  *******************************/
#include "../../octdev_types.h"
#include "../../octdev_devices.h"
#include "../octvc1_msg.h"
#include "../octvc1_handle.h"
#include "../octvc1_fifo.h"
#include "../octvc1_buffer.h"
#include "../octvc1_eth.h"
#include "../octvc1_mac.h"
#include "../octvc1_cursor.h"
#include "../octvc1_list.h"
#include "../octvc1_log.h"
#include "../octvc1_process.h"
#include "../octvc1_user_id.h"
#include "../octvc1_radio.h"

#include "octvc1_hw_id.h"
#include "octvc1_hw_rc.h"

/************************  COMMON DEFINITIONS  *******************************/


/*-------------------------------------------------------------------------------------
 	PCB related definitions.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
 	PCB source information state.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_PCB_INFO_SOURCE_ENUM						tOCT_UINT32

#define cOCTVC1_HW_PCB_INFO_SOURCE_ENUM_USER_HW_CONFIG		0		
#define cOCTVC1_HW_PCB_INFO_SOURCE_ENUM_DATA_SECTION		1		
#define cOCTVC1_HW_PCB_INFO_SOURCE_ENUM_EEPROM				2		
#define cOCTVC1_HW_PCB_INFO_SOURCE_ENUM_INI_FILE			3		

/*-------------------------------------------------------------------------------------
 	PCB information state.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_PCB_INFO_STATE_ENUM						tOCT_UINT32

#define cOCTVC1_HW_PCB_INFO_STATE_ENUM_PARSED_ERROR			0		
#define cOCTVC1_HW_PCB_INFO_STATE_ENUM_PARSED_OK			1		

/*-------------------------------------------------------------------------------------
 	PCB max field definitions.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_HW_PCB_NAME_MAX_LENGTH						23		 	/* Device PCB name. */
#define cOCTVC1_HW_PCB_SERIAL_MAX_LENGTH					23		 	/* Device PCB serial number. */
#define cOCTVC1_HW_PCB_FILENAME_MAX_LENGTH					23		 	/* Device PCB name. */
#define cOCTVC1_HW_PCB_GPS_NAME_MAX_LENGTH					23		 	/* GPS name. */
#define cOCTVC1_HW_PCB_WIFI_NAME_MAX_LENGTH					23		 	/* WIFI name. */

/*-------------------------------------------------------------------------------------
 	CPU CORE related definitions.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
 	Cpu Core Mask.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_CPU_CORE_MASK							tOCT_UINT32

#define cOCTVC1_HW_CPU_CORE_MASK_1							((tOCT_UINT32)(1<<1) )	
#define cOCTVC1_HW_CPU_CORE_MASK_2							((tOCT_UINT32)(1<<2) )	
#define cOCTVC1_HW_CPU_CORE_MASK_3							((tOCT_UINT32)(1<<3) )	
#define cOCTVC1_HW_CPU_CORE_MASK_4							((tOCT_UINT32)(1<<4) )	
#define cOCTVC1_HW_CPU_CORE_MASK_5							((tOCT_UINT32)(1<<5) )	
#define cOCTVC1_HW_CPU_CORE_MASK_6							((tOCT_UINT32)(1<<6) )	
#define cOCTVC1_HW_CPU_CORE_MASK_7							((tOCT_UINT32)(1<<7) )	
#define cOCTVC1_HW_CPU_CORE_MASK_8							((tOCT_UINT32)(1<<8) )	
#define cOCTVC1_HW_CPU_CORE_MASK_9							((tOCT_UINT32)(1<<9) )	
#define cOCTVC1_HW_CPU_CORE_MASK_10							((tOCT_UINT32)(1<<10) )	
#define cOCTVC1_HW_CPU_CORE_MASK_11							((tOCT_UINT32)(1<<11) )	
#define cOCTVC1_HW_CPU_CORE_MASK_12							((tOCT_UINT32)(1<<12) )	
#define cOCTVC1_HW_CPU_CORE_MASK_13							((tOCT_UINT32)(1<<13) )	
#define cOCTVC1_HW_CPU_CORE_MASK_14							((tOCT_UINT32)(1<<14) )	
#define cOCTVC1_HW_CPU_CORE_MASK_15							((tOCT_UINT32)(1<<15) )	
#define cOCTVC1_HW_CPU_CORE_MASK_16							((tOCT_UINT32)(1<<16) )	
#define cOCTVC1_HW_CPU_CORE_MASK_17							((tOCT_UINT32)(1<<17) )	
#define cOCTVC1_HW_CPU_CORE_MASK_18							((tOCT_UINT32)(1<<18) )	
#define cOCTVC1_HW_CPU_CORE_MASK_19							((tOCT_UINT32)(1<<19) )	
#define cOCTVC1_HW_CPU_CORE_MASK_20							((tOCT_UINT32)(1<<20) )	
#define cOCTVC1_HW_CPU_CORE_MASK_21							((tOCT_UINT32)(1<<21) )	
#define cOCTVC1_HW_CPU_CORE_MASK_22							((tOCT_UINT32)(1<<22) )	
#define cOCTVC1_HW_CPU_CORE_MASK_23							((tOCT_UINT32)(1<<23) )	
#define cOCTVC1_HW_CPU_CORE_MASK_24							((tOCT_UINT32)(1<<24) )	

/*-------------------------------------------------------------------------------------
 	Core Status.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_CPU_CORE_STATUS_ENUM						tOCT_UINT32

#define cOCTVC1_HW_CPU_CORE_STATUS_ENUM_RESET				0		 	/* The core is in reset mode. */
 																	/* This is the state of cores that have not been started. */
#define cOCTVC1_HW_CPU_CORE_STATUS_ENUM_RUNNING				1		 	/* The core is executing code. */
 																	/* This is the typical state of cores that have been started in target. */
#define cOCTVC1_HW_CPU_CORE_STATUS_ENUM_HALT				2		 	/* The core has reached an instruction that caused the core to stop executing code. */
 																	/* This is an error condition. */
#define cOCTVC1_HW_CPU_CORE_STATUS_ENUM_TRAP				3		 	/* The core has reached an instruction that caused the core to stop executing code. */
 																	/* This is an error condition. */
#define cOCTVC1_HW_CPU_CORE_STATUS_ENUM_ACCESS_VIOLATION	4		 	/* The core has stopped execution because the code it is hosting caused an access */
 																	/* violation. */
 																	/* This is an error condition. */
#define cOCTVC1_HW_CPU_CORE_STATUS_ENUM_NOT_PRESENT			5		 	/* The core is not present on the device. */
#define cOCTVC1_HW_CPU_CORE_STATUS_ENUM_FAILURE_DETECTED	6		 	/* A failure has been detected and this core cannot be used anymore. */
 																	/* Contact Octasic Support. */

/*-------------------------------------------------------------------------------------
 	Cpu Core Failure Mask.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_CPU_CORE_FAILURE_MASK					tOCT_UINT32

#define cOCTVC1_HW_CPU_CORE_FAILURE_MASK_NONE				0		 	/* No failures have been detected. */
#define cOCTVC1_HW_CPU_CORE_FAILURE_MASK_MEMORY				((tOCT_UINT32)(1<<1) )	 	/* A memory failure has been detected on the core */

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_CPU_CORE_STATS

 Members:
	ulCoreStatus
	ulProgramCounter
	ulFailureMask
 		Valid when ulCoreStatus = FAILURE_DETECTED.
 		Contact Octasic Support.
	ulAccessViolationAddress
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_HW_CPU_CORE_STATUS_ENUM		ulCoreStatus;
	tOCT_UINT32							ulProgramCounter;
	tOCTVC1_HW_CPU_CORE_FAILURE_MASK	ulFailureMask;
	tOCT_UINT32							ulAccessViolationAddress;

} tOCTVC1_HW_CPU_CORE_STATS;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_CPU_CORE_INFO

 Members:
	hProcess
		Default:	cOCTVC1_HANDLE_INVALID
 		Process handle identifier. Value INVALID means no process running on this core.
	ulPhysicalCoreId
		Default:	0
 		Physical core index. Value 0 means no core is running for this logical
 		identifier.
	ulProcessUserId
		Default:	cOCTVC1_USER_ID_PROCESS_ENUM_INVALID
 		Process Type identifier. Value INVALID means no process running on this core.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32						hProcess;
	tOCT_UINT32						ulPhysicalCoreId;
	tOCTVC1_USER_ID_PROCESS_ENUM	ulProcessUserId;

} tOCTVC1_HW_CPU_CORE_INFO;

/*-------------------------------------------------------------------------------------
 	ETH port related definitions.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
 	Ethernet port mode of operation.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_ETH_MODE_ENUM							tOCT_UINT32

#define cOCTVC1_HW_ETH_MODE_ENUM_INVALID					0xFFFFFFFF	
#define cOCTVC1_HW_ETH_MODE_ENUM_MII						0		
#define cOCTVC1_HW_ETH_MODE_ENUM_RMII						1		
#define cOCTVC1_HW_ETH_MODE_ENUM_GMII						2		
#define cOCTVC1_HW_ETH_MODE_ENUM_RGMII						3		
#define cOCTVC1_HW_ETH_MODE_ENUM_SGMII						4		

/*-------------------------------------------------------------------------------------
 	Ethernet link speed (MBits).
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_ETH_LINK_SPEED_ENUM						tOCT_UINT32

#define cOCTVC1_HW_ETH_LINK_SPEED_ENUM_INVALID				0xFFFFFFFF	
#define cOCTVC1_HW_ETH_LINK_SPEED_ENUM_10					10		
#define cOCTVC1_HW_ETH_LINK_SPEED_ENUM_100					100		
#define cOCTVC1_HW_ETH_LINK_SPEED_ENUM_1000					1000	

/*-------------------------------------------------------------------------------------
 	Ethernet duplex mode.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_ETH_DUPLEX_MODE_ENUM						tOCT_UINT32

#define cOCTVC1_HW_ETH_DUPLEX_MODE_ENUM_INVALID				0		
#define cOCTVC1_HW_ETH_DUPLEX_MODE_ENUM_FULL				1		
#define cOCTVC1_HW_ETH_DUPLEX_MODE_ENUM_HALF				2		

/*-------------------------------------------------------------------------------------
 	ETH port.
-------------------------------------------------------------------------------------*/
#define cOCTVC1_HW_ETH_PORT_PHY_ADDRESS_INVALID				63		 	/* Invalid Phy Address */
 																		/* This definition indicates that either no PHY is present or */
 																		/* that communication with the phy is not allowed. */

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_ETH_PORT_CONFIG

 Members:
	MacAddress
	ulPromiscuousModeFlag
 		When set, all frames are accepted
	ulAcceptMulticastFlag
 		When set, multicast and broadcast frames are accepted
	ulAcceptJumboFrameFlag
 		When set, Jumbo frames are accepted.
 		See hardware documentation for interface maximum payload size.
	ulSgmiiAutoNegotationFlag
 		When set, sGMII auto-negotiation is enable
	ulLinkSpeed
	ulDuplexMode
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MAC_ADDRESS				MacAddress;
	tOCT_BOOL32						ulPromiscuousModeFlag;
	tOCT_BOOL32						ulAcceptMulticastFlag;
	tOCT_BOOL32						ulAcceptJumboFrameFlag;
	tOCT_BOOL32						ulSgmiiAutoNegotationFlag;
	tOCTVC1_HW_ETH_LINK_SPEED_ENUM	ulLinkSpeed;
	tOCTVC1_HW_ETH_DUPLEX_MODE_ENUM	ulDuplexMode;

} tOCTVC1_HW_ETH_PORT_CONFIG;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_ETH_PORT_TX_ERROR_STATS

 Members:
	ulTxUnderflowCnt
 		Number of frames aborted due to frame underflow error.
	ulTxLateCollisionCnt
 		Number of frames aborted due to late collision error.
	ulTxExcessCollisionCnt
 		Number of frames aborted due to excessive collision errors.
	ulTxExcessDeferralCnt
 		Number of frames aborted due to excessive deferral error.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulTxUnderflowCnt;
	tOCT_UINT32	ulTxLateCollisionCnt;
	tOCT_UINT32	ulTxExcessCollisionCnt;
	tOCT_UINT32	ulTxExcessDeferralCnt;

} tOCTVC1_HW_ETH_PORT_TX_ERROR_STATS;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_ETH_PORT_TX_STATS

 Members:
	ulTxFrameCnt
 		Number of frames transmitted.
 		This number includes good and bad frames but excludes retried frames.
	ulTxByteCnt
 		Number of bytes transmitted in good and bad frames.
 		This number excludes preamble and retried bytes.
	ulTxPauseFrameCnt
 		Number of times Ethernet port sent a PAUSE frame.
	ulTxVlanFrameCnt
 		Number of times Ethernet port sent a VLAN frame.
	ulTxJumboFrameCnt
 		Number of frames transmitted with byte length over 1,024.
	TxErrorStat
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32							ulTxFrameCnt;
	tOCT_UINT32							ulTxByteCnt;
	tOCT_UINT32							ulTxPauseFrameCnt;
	tOCT_UINT32							ulTxVlanFrameCnt;
	tOCT_UINT32							ulTxJumboFrameCnt;
	tOCTVC1_HW_ETH_PORT_TX_ERROR_STATS	TxErrorStat;

} tOCTVC1_HW_ETH_PORT_TX_STATS;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_ETH_PORT_RX_ERROR_STATS

 Members:
	ulRxCrcErrorCnt
 		Number of times the Ethernet port detected packets with an invalid Cyclic
 		Redundancy Check (CRC).
	ulRxAlignmentErrorCnt
 		Number of frames received with alignment (dribble) error. Valid only in 10/100
 		mode.
	ulRxJabberErrorCnt
 		Number of giant frames received with length (including CRC) greater than 1,518
 		bytes (1,522 bytes for VLAN tagged) and with CRC error.
	ulRxUndersizeCnt
 		Number of frames received with a byte length of less than 64. This number
 		includes good frames only.
	ulRxOversizeCnt
 		Number of frames received with byte length greater than the maximum size.
	ulRxLengthCnt
 		Number of frames received with a valid Length Type field, but the size of the
 		received frame does not match the value in the Length Type field.
	ulRxOutOfRangeCnt
 		Number of frames received with length field not equal to the valid frame size
 		(between 1,500 and 1,536 bytes, inclusive).
	ulRxFifoOverflowCnt
 		Number of received frames missed due to FIFO overflow.
	ulRxWatchdogCnt
 		Number of frames received with an error due to watchdog timeout (frames with a
 		data load larger than 2,048 bytes.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulRxCrcErrorCnt;
	tOCT_UINT32	ulRxAlignmentErrorCnt;
	tOCT_UINT32	ulRxJabberErrorCnt;
	tOCT_UINT32	ulRxUndersizeCnt;
	tOCT_UINT32	ulRxOversizeCnt;
	tOCT_UINT32	ulRxLengthCnt;
	tOCT_UINT32	ulRxOutOfRangeCnt;
	tOCT_UINT32	ulRxFifoOverflowCnt;
	tOCT_UINT32	ulRxWatchdogCnt;

} tOCTVC1_HW_ETH_PORT_RX_ERROR_STATS;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_ETH_PORT_RX_STATS

 Members:
	ulRxFrameCnt
 		Number of frames received. This number includes good and bad frames.
	ulRxByteCnt
 		Number of bytes received in good and bad frames. This number excludes preamble.
	ulRxJumboFrameCnt
 		Number of frames received with byte length over 1,024.
	ulRxPauseFrameCnt
 		Number of times Ethernet port detected a PAUSE frame.
	ulRxVlanFrameCnt
 		Number of good and bad VLAN frames received.
	RxErrorStat
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32							ulRxFrameCnt;
	tOCT_UINT32							ulRxByteCnt;
	tOCT_UINT32							ulRxJumboFrameCnt;
	tOCT_UINT32							ulRxPauseFrameCnt;
	tOCT_UINT32							ulRxVlanFrameCnt;
	tOCTVC1_HW_ETH_PORT_RX_ERROR_STATS	RxErrorStat;

} tOCTVC1_HW_ETH_PORT_RX_STATS;

/*-------------------------------------------------------------------------------------
 	RF_PORT related definitions.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_RF_PORT_RX_STATS

 Members:
	ulRxByteCnt
 		Number of bytes received. Attentions 32-bits counter
	ulRxOverflowCnt
 		Count the number overflow
 		Counter increase by 1 each time an overflow is detected between two receive
	ulRxAverageBytePerSecond
 		Average byte receive per seconds
	ulRxAveragePeriodUs
 		Average Time in micro second between two receive
	ulFrequencyKhz
 		Current frequency in Khz
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulRxByteCnt;
	tOCT_UINT32	ulRxOverflowCnt;
	tOCT_UINT32	ulRxAverageBytePerSecond;
	tOCT_UINT32	ulRxAveragePeriodUs;
	tOCT_UINT32	ulFrequencyKhz;

} tOCTVC1_HW_RF_PORT_RX_STATS;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_RF_PORT_TX_STATS

 Members:
	ulTxByteCnt
 		Number of bytes received. Attentions 32-bits counter
	ulTxUnderflowCnt
 		Count the number underflow
 		Counter increase by 1 each time an overflow is detected between two send
	ulTxAverageBytePerSecond
 		Average byte receive per seconds
	ulTxAveragePeriodUs
 		Average Time in micro second between two send
	ulFrequencyKhz
 		Current frequency in Khz
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCT_UINT32	ulTxByteCnt;
	tOCT_UINT32	ulTxUnderflowCnt;
	tOCT_UINT32	ulTxAverageBytePerSecond;
	tOCT_UINT32	ulTxAveragePeriodUs;
	tOCT_UINT32	ulFrequencyKhz;

} tOCTVC1_HW_RF_PORT_TX_STATS;

/*-------------------------------------------------------------------------------------
 	Clock Sync Manager related definitions.
-------------------------------------------------------------------------------------*/

/*-------------------------------------------------------------------------------------
 	Clock Sync Manager Source
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM				tOCT_UINT32

#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM_FREQ_1HZ			0		
#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM_FREQ_10MHZ		1		
#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM_FREQ_30_72MHZ		2		
#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM_FREQ_1HZ_EXT		3		
#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM_NONE				4		 	/* Clock Sync Manager is not initialized. */
 																		/* Base on config file informations. */

/*-------------------------------------------------------------------------------------
 	Clock Sync Manager Source Selection.
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_SELECTION_ENUM						tOCT_UINT32

#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_SELECTION_ENUM_AUTOSELECT			0		 	/* Clock Source is selected by the PHY. */
 																					/* Base on config file informations. */
#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_SELECTION_ENUM_CONFIG_FILE			1		 	/* Clock Source should be selected by the host application. */
 																					/* Host did not specify the source yet. */
 																					/* Expecting rate is defined by config file. */
#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_SELECTION_ENUM_HOST_APPLICATION	2		 	/* Clock Source was selected by the host application. */
 																					/* Host did specify the source through API call. */

/*-------------------------------------------------------------------------------------
 	Clock Sync manager sync source state
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_STATE_ENUM				tOCT_UINT32

#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_STATE_ENUM_INVALID			0		 	/* The clock source is not valid. */
 																			/* (Ex: GPS is not available). */
#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_STATE_ENUM_VALID			1		 	/* The clock source is valid. */
#define cOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_STATE_ENUM_UNSPECIFIED		2		 	/* The clock source state was never specified by the host application. */

/*-------------------------------------------------------------------------------------
 	Clock Sync manager state
-------------------------------------------------------------------------------------*/
#define tOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM				tOCT_UINT32

#define cOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_UNINITIALIZE		0		
#define cOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_IDLE				1		
#define cOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_NO_EXT_CLOCK		2		 	/* Never detect any clock. */
#define cOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_LOCKED				3		
#define cOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_UNLOCKED			4		
#define cOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_ERROR				5		
#define cOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_DISABLE			6		 	/* The actual PCB does not supporte this service. */
#define cOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM_LOSS_EXT_CLOCK		7		 	/* No more clock detected. */

/*****************************  METHODS  *************************************/
/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_PCB_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_HW_MSG_PCB_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_PCB_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	szName
 		PCB name/model
	ulDeviceId
 		PCB device order (Primary=0/Secondary=1...)
	szSerial
 		PCB serial number
	szFilename
 		File containing raw PCB info
	ulInfoSource
 		PCB information source.
	ulInfoState
 		PCB information state.
	szGpsName
 		GPS name
	szWifiName
 		WIFI name
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER				Header;
	tOCT_INT8						szName[(cOCTVC1_HW_PCB_NAME_MAX_LENGTH+1)];
	tOCT_UINT32						ulDeviceId;
	tOCT_INT8						szSerial[(cOCTVC1_HW_PCB_SERIAL_MAX_LENGTH+1)];
	tOCT_INT8						szFilename[(cOCTVC1_HW_PCB_FILENAME_MAX_LENGTH+1)];
	tOCTVC1_HW_PCB_INFO_SOURCE_ENUM	ulInfoSource;
	tOCTVC1_HW_PCB_INFO_STATE_ENUM	ulInfoState;
	tOCT_INT8						szGpsName[(cOCTVC1_HW_PCB_GPS_NAME_MAX_LENGTH+1)];
	tOCT_INT8						szWifiName[(cOCTVC1_HW_PCB_WIFI_NAME_MAX_LENGTH+1)];

} tOCTVC1_HW_MSG_PCB_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulCoreIndex
 		Cpu Core identifier
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulCoreIndex;

} tOCTVC1_HW_MSG_CPU_CORE_STATS_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CPU_CORE_STATS_RSP

 Members:
	Header
 		OCTVC1 Message Header
	CoreStats
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_HW_CPU_CORE_STATS	CoreStats;

} tOCTVC1_HW_MSG_CPU_CORE_STATS_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulCoreIndex
 		Cpu Core identifier
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulCoreIndex;

} tOCTVC1_HW_MSG_CPU_CORE_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CPU_CORE_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	CoreInfo
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_HW_CPU_CORE_INFO	CoreInfo;

} tOCTVC1_HW_MSG_CPU_CORE_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD

 Members:
	Header
	IndexGet
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_CURSOR_INDEX_GET	IndexGet;

} tOCTVC1_HW_MSG_CPU_CORE_LIST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CPU_CORE_LIST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	IndexGet
 		Object cursor
	IndexList
 		Object name list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_CURSOR_INDEX_GET	IndexGet;
	tOCTVC1_LIST_INDEX_GET		IndexList;

} tOCTVC1_HW_MSG_CPU_CORE_LIST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique ETH port identifier
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulPortIndex;

} tOCTVC1_HW_MSG_ETH_PORT_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_ETH_PORT_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique ETH port identifier
	ulInterfaceId
 		Interface ID
	ulMode
	ulTxPktQueuesByteSize
	ulRxPktQueuesByteSize
	ulRestrictedApiFlag
 		Set to TRUE when this port can be configure by control port.
	ulEnableFlag
 		Set to TRUE when this port is used by the target application.
	Config
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_INDEX				ulPortIndex;
	tOCT_UINT32					ulInterfaceId;
	tOCTVC1_HW_ETH_MODE_ENUM	ulMode;
	tOCT_UINT32					ulTxPktQueuesByteSize;
	tOCT_UINT32					ulRxPktQueuesByteSize;
	tOCT_BOOL32					ulRestrictedApiFlag;
	tOCT_BOOL32					ulEnableFlag;
	tOCTVC1_HW_ETH_PORT_CONFIG	Config;

} tOCTVC1_HW_MSG_ETH_PORT_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD

 Members:
	Header
	IndexGet
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_CURSOR_INDEX_GET	IndexGet;

} tOCTVC1_HW_MSG_ETH_PORT_LIST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_ETH_PORT_LIST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	IndexGet
 		Object cursor
	IndexList
 		Object name list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_CURSOR_INDEX_GET	IndexGet;
	tOCTVC1_LIST_INDEX_GET		IndexList;

} tOCTVC1_HW_MSG_ETH_PORT_LIST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique ETH port identifier
	ulResetStatsFlag
		Default:	cOCT_FALSE
 		Statistics counters will be reset to zero after the current values are returned.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulPortIndex;
	tOCT_BOOL32			ulResetStatsFlag;

} tOCTVC1_HW_MSG_ETH_PORT_STATS_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_ETH_PORT_STATS_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique ETH port identifier
	RxStats
	TxStats
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER				Header;
	tOCTVC1_INDEX					ulPortIndex;
	tOCTVC1_HW_ETH_PORT_RX_STATS	RxStats;
	tOCTVC1_HW_ETH_PORT_TX_STATS	TxStats;

} tOCTVC1_HW_MSG_ETH_PORT_STATS_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique ETH port identifier
	Config
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_INDEX				ulPortIndex;
	tOCTVC1_HW_ETH_PORT_CONFIG	Config;

} tOCTVC1_HW_MSG_ETH_PORT_MODIFY_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_ETH_PORT_MODIFY_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique ETH port identifier
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulPortIndex;

} tOCTVC1_HW_MSG_ETH_PORT_MODIFY_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique RF port identifier
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulPortIndex;

} tOCTVC1_HW_MSG_RF_PORT_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique RF port identifier
	ulInService
 		Main Rf port is in service.
	hOwner
 		Main Rf port owner identifier.
	ulPortInterfaceId
 		PCB Port Interface Id
	ulFrequencyMinKhz
 		RF minimum frequency (Khz)
	ulFrequencyMaxKhz
 		RF maximum frequency (Khz)
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER		Header;
	tOCTVC1_INDEX			ulPortIndex;
	tOCT_BOOL32				ulInService;
	tOCTVC1_HANDLE_OBJECT	hOwner;
	tOCT_UINT32				ulPortInterfaceId;
	tOCT_UINT32				ulFrequencyMinKhz;
	tOCT_UINT32				ulFrequencyMaxKhz;

} tOCTVC1_HW_MSG_RF_PORT_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_STATS_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique RF port identifier
	ulResetStatsFlag
 		Statistics counters will be reset to zero after the current values are returned.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulPortIndex;
	tOCT_BOOL32			ulResetStatsFlag;

} tOCTVC1_HW_MSG_RF_PORT_STATS_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_STATS_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		Unique RF port identifier
	ulRadioStandard
 		Radio standard
	RxStats
 		Main Rf Rx stats
	TxStats
 		Main Rf Tx stats
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_INDEX				ulPortIndex;
	tOCTVC1_RADIO_STANDARD_ENUM	ulRadioStandard;
	tOCTVC1_HW_RF_PORT_RX_STATS	RxStats;
	tOCTVC1_HW_RF_PORT_TX_STATS	TxStats;

} tOCTVC1_HW_MSG_RF_PORT_STATS_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_LIST_CMD

 Members:
	Header
	IndexGet
 		Object cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_CURSOR_INDEX_GET	IndexGet;

} tOCTVC1_HW_MSG_RF_PORT_LIST_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_LIST_RSP

 Members:
	Header
 		OCTVC1 Message Header
	IndexGet
 		Object cursor
	IndexList
 		Object name list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER			Header;
	tOCTVC1_CURSOR_INDEX_GET	IndexGet;
	tOCTVC1_LIST_INDEX_GET		IndexList;

} tOCTVC1_HW_MSG_RF_PORT_LIST_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD

 Members:
	Header
	SubIndexGet
 		Index cursor
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_INDEX_GET_SUB_INDEX	SubIndexGet;

} tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_RSP

 Members:
	Header
 		OCTVC1 Message Header
	SubIndexGet
 		Index cursor
	SubIndexList
 		Object name list.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER					Header;
	tOCTVC1_CURSOR_INDEX_GET_SUB_INDEX	SubIndexGet;
	tOCTVC1_LIST_INDEX_GET_SUB_INDEX	SubIndexList;

} tOCTVC1_HW_MSG_RF_PORT_LIST_ANTENNA_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		RF PORT index
	ulAntennaIndex
 		Antenna index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulPortIndex;
	tOCTVC1_INDEX		ulAntennaIndex;

} tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		RF PORT index
	ulAntennaIndex
 		Antenna index
	ulEnableFlag
	lRxGaindB
	ulRxGainMode
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER						Header;
	tOCTVC1_INDEX							ulPortIndex;
	tOCTVC1_INDEX							ulAntennaIndex;
	tOCT_BOOL32								ulEnableFlag;
	tOCT_INT32								lRxGaindB;
	tOCTVC1_RADIO_RX_GAIN_CTRL_MODE_ENUM	ulRxGainMode;

} tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_RX_CONFIG_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		RF PORT index
	ulAntennaIndex
 		Antenna index
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulPortIndex;
	tOCTVC1_INDEX		ulAntennaIndex;

} tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulPortIndex
 		RF PORT index
	ulAntennaIndex
 		Antenna index
	ulEnableFlag
	lTxGaindB
 		Q9 value
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCTVC1_INDEX		ulPortIndex;
	tOCTVC1_INDEX		ulAntennaIndex;
	tOCT_BOOL32			ulEnableFlag;
	tOCT_INT32			lTxGaindB;

} tOCTVC1_HW_MSG_RF_PORT_INFO_ANTENNA_TX_CONFIG_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulClkSourceRef
 		Selected source for reference clock
	ulClkSourceSelection
 		Clock source selection mode
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER								Header;
	tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM			ulClkSourceRef;
	tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_SELECTION_ENUM	ulClkSourceSelection;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulResetStatsFlag
 		Statistics counters will be reset to zero after the current values are returned.
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;
	tOCT_BOOL32			ulResetStatsFlag;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulState
 		Clock sync manager state
	lClockError
 		Curent error on the tracked clock's control loop
	lDroppedCycles
 		Number of cycles (at ulPllFreqHz) that have been dropped by the control loop
 		This occurs when there a big gaps of the reference clock in the frequency
 		measurement unit,
 		which are likely caused by changes in the reference clock.
	ulPllFreqHz
 		Frequency provided to the comparator and generators.
	ulPllFractionalFreqHz
 		Fractional part of ulPllFreqHz.
	ulSlipCnt
 		Number of times values exceeded the synchronization threshold while in the sync
 		state
	ulSyncLosseCnt
 		Number of times the clock manager left the synchronized state
	ulSourceState
 		Clock source state
	ulDacValue
 		Curent DAC value
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER							Header;
	tOCTVC1_HW_CLOCK_SYNC_MGR_STATE_ENUM		ulState;
	tOCT_INT32									lClockError;
	tOCT_INT32									lDroppedCycles;
	tOCT_UINT32									ulPllFreqHz;
	tOCT_UINT32									ulPllFractionalFreqHz;
	tOCT_UINT32									ulSlipCnt;
	tOCT_UINT32									ulSyncLosseCnt;
	tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_STATE_ENUM	ulSourceState;
	tOCT_UINT32									ulDacValue;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_STATS_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_SOURCE_CMD

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_SOURCE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_SOURCE_RSP

 Members:
	Header
 		OCTVC1 Message Header
	ulClkSourceRef
 		Selected source for reference clock
	ulSourceState
 		Selected source for reference clock
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER							Header;
	tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM		ulClkSourceRef;
	tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_STATE_ENUM	ulSourceState;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_INFO_SOURCE_RSP;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SOURCE_CMD

 Members:
	Header
 		OCTVC1 Message Header
	ulClkSourceRef
		Default:	cOCTVC1_DO_NOT_MODIFY
 		Selected source for reference clock
	ulSourceState
		Default:	cOCTVC1_DO_NOT_MODIFY
 		Selected source for reference clock
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER							Header;
	tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_ENUM		ulClkSourceRef;
	tOCTVC1_HW_CLOCK_SYNC_MGR_SOURCE_STATE_ENUM	ulSourceState;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SOURCE_CMD;

/*-------------------------------------------------------------------------------------
	tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SOURCE_RSP

 Members:
	Header
 		OCTVC1 Message Header
-------------------------------------------------------------------------------------*/
typedef struct
{
	tOCTVC1_MSG_HEADER	Header;

} tOCTVC1_HW_MSG_CLOCK_SYNC_MGR_MODIFY_SOURCE_RSP;


/***************  INCLUDE FILES WITH DEPENDENCIES ON THIS FILE  **************/
#include "octvc1_hw_evt.h"

#endif /* __OCTVC1_HW_API_H__ */

