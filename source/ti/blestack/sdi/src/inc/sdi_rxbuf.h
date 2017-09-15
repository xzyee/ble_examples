/******************************************************************************

 @file  npi_rxbuf.h

  SDI RX Buffer and utilities

 Group: CMCU, LPC, SCS
 Target Device: CC2640R2

 ******************************************************************************

 Copyright (c) 2015-2017, Texas Instruments Incorporated
 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:

 *  Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.

 *  Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.

 *  Neither the name of Texas Instruments Incorporated nor the names of
    its contributors may be used to endorse or promote products derived
    from this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

 ******************************************************************************
 Release Name: simplelink_cc2640r2_sdk_1_30_00_25
 Release Date: 2017-03-02 20:08:35
 *****************************************************************************/
#ifndef SDIRXBUF_H
#define SDIRXBUF_H

#ifdef __cplusplus
extern "C"
{
#endif

// ****************************************************************************
// includes
// ****************************************************************************
#include "hal_types.h"
#include "osal.h"
#include "sdi_config.h"

// ****************************************************************************
// defines
// ****************************************************************************

// ****************************************************************************
// typedefs
// ****************************************************************************

//*****************************************************************************
// globals
//*****************************************************************************

//*****************************************************************************
// function prototypes
//*****************************************************************************

// -----------------------------------------------------------------------------
//! \brief      SDIRxBuf_Read
//!
//! \param[in]  len -
//!
//! \return     uint16 -
// -----------------------------------------------------------------------------
uint16 SDIRxBuf_Read(uint16);

// -----------------------------------------------------------------------------
//! \brief      Returns number of bytes that are unparsed in RxBuf
//!
//! \return     uint16 -
// -----------------------------------------------------------------------------
uint16 SDIRxBuf_GetRxBufCount();

// -----------------------------------------------------------------------------
//! \brief      Returns number of bytes that are available in RxBuf
//!
//! \return     uint16 -
// -----------------------------------------------------------------------------
uint16 SDIRxBuf_GetRxBufAvail();
//! \brief      SDIRxBuf_ReadFromRxBuf
//!
//! \return     uint16 -
// -----------------------------------------------------------------------------
uint16 SDIRxBuf_ReadFromRxBuf(uint8_t *buf, uint16 len);

#ifdef __cplusplus
}
#endif

#endif /* SDIRXBUF_H */