/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*

File: octvc1_swap_hdrs.h	

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
	

Release: OCTSDR Software Development Kit OCTSDR_GSM-02.09.00-B1607 (2017/08/29)	

\*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/	
#ifndef __OCTVC1_SWAP_HDRS_H__
#define __OCTVC1_SWAP_HDRS_H__

#ifdef __cplusplus
extern "C" {
#endif

/*****************************  INCLUDE FILES  *******************************/
#include "../octdev_macro.h"
#ifndef SWAP_UNUSED
#define SWAP_UNUSED(x) (void)(x);
#endif

/* START OF SWAP FILE HDR */

#include "../octdev_types_swap.h"
#include "../octdev_devices_swap.h"
#include "../octpkt/octpkt_hdr_swap.h"
#include "../octpkt/octpkt_hdrxl_swap.h"
#include "octvocnet_pkt_swap.h"
#include "octvc1_cursor_swap.h"
#include "octvc1_buffer_swap.h"
#include "octvc1_eth_swap.h"
#include "octvc1_handle_swap.h"
#include "octvc1_ip_swap.h"
#include "octvc1_vlan_swap.h"
#include "octvc1_list_swap.h"
#include "octvc1_msg_swap.h"
#include "octvc1_log_swap.h"
#include "octvc1_file_swap.h"
#include "octvc1_module_swap.h"
#include "octvc1_tap_swap.h"
#include "octvc1_ipc_swap.h"
#include "octvc1_process_swap.h"
#include "octvc1_user_id_swap.h"
#include "octvc1_radio_swap.h"
#include "octvc1_api_swap.h"
#include "ctrl/octvc1_ctrl_api_swap.h"
#include "main/octvc1_main_api_swap.h"
#include "main/octvc1_main_evt_swap.h"
#include "job/octvc1_job_api_swap.h"
#include "job/octvc1_job_evt_swap.h"
#include "hw/octvc1_hw_api_swap.h"
#include "hw/octvc1_hw_evt_swap.h"
#include "irsc/octvc1_irsc_api_swap.h"
#include "irsc/octvc1_irsc_evt_swap.h"
#include "gsm/octvc1_gsm_api_swap.h"
#include "gsm/octvc1_gsm_evt_swap.h"
/* END OF SWAP FILE HDR */
#ifdef __cplusplus
}

#endif

#endif /* __OCTVC1_SWAP_HDRS_H__ */
