//*****************************************************************************
//
// DTC-1200 Digital Transport Controller Boot Loader for Ampex MM-1200
//
// Copyright (C) 2016-2018, RTZ Professional Audio, LLC
// All Rights Reserved
//
// RTZ is registered trademark of RTZ Professional Audio, LLC
//
//*****************************************************************************

#ifndef __CUSTOM_H
#define __CUSTOM_H

/*** DTC-1200 Hardware Constants ***********************************************/

#define HW_REV			0			/* 0=A, 1=B, 2=C, 3=D etc  */

/*******************************************************************************
 * MCP23017 Register Addresses (IOCON.BANK = 0)
 ******************************************************************************/

#define MCP_IODIRA      0x00		// I/O DIRECTION REGISTER
#define MCP_IODIRB      0x01		// I/O DIRECTION REGISTER
#define MCP_IOPOLA      0x02		// INPUT POLARITY REGISTER
#define MCP_IOPOLB      0x03		// INPUT POLARITY REGISTER
#define MCP_GPINTENA    0x04		// INTERRUPT-ON-CHANGE CONTROL REGISTER
#define MCP_GPINTENB    0x05		// INTERRUPT-ON-CHANGE CONTROL REGISTER
#define MCP_DEFVALA     0x06		// DEFAULT COMPARE REGISTER FOR INT-ON-CHANGE
#define MCP_DEFVALB     0x07		// DEFAULT COMPARE REGISTER FOR INT-ON-CHANGE
#define MCP_INTCONA     0x08		// INTERRUPT CONTROL REGISTER
#define MCP_INTCONB     0x09		// INTERRUPT CONTROL REGISTER
#define MCP_IOCONA      0x0A		// I/O EXPANDER CONFIGURATION REGISTER
#define MCP_IOCONB      0x0B		// I/O EXPANDER CONFIGURATION REGISTER
#define MCP_GPPUA       0x0C		// GPIO PULL-UP RESISTOR REGISTER
#define MCP_GPPUB       0x0D		// GPIO PULL-UP RESISTOR REGISTER
#define MCP_INTFA       0x0E		// INTERRUPT FLAG REGISTER
#define MCP_INTFB       0x0F		// INTERRUPT FLAG REGISTER
#define MCP_INTCAPA     0x10		// INTERRUPT CAPTURED VALUE FOR PORT REGISTER
#define MCP_INTCAPB     0x11		// INTERRUPT CAPTURED VALUE FOR PORT REGISTER
#define MCP_GPIOA       0x12		// GENERAL PURPOSE I/O PORT REGISTER
#define MCP_GPIOB       0x13		// GENERAL PURPOSE I/O PORT REGISTER
#define MCP_OLATA       0x14		// OUTPUT LATCH REGISTER
#define MCP_OLATB       0x15		// OUTPUT LATCH REGISTER

/* IOCON Configuration Register Bits */
#define C_INTPOL        0x02	/* INT output 1=Active-high, 0=Active-low. */
#define C_ODR           0x04	/* INT pin as an open-drain output         */
#define C_HAEN          0x08	/* Hardware address enable (N/A for I2C)   */
#define C_DISSLW        0x10	/* Slew rate disable bit                   */
#define C_SEQOP         0x20	/* Disable address pointer auto-increment  */
#define C_MIRROR        0x40	/* INT A/B pins mirrored                   */
#define C_BANK          0x80	/* port registers are in different banks   */

#endif /* __CUSTOM_H */
