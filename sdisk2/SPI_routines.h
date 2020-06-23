#ifndef _SPI_ROUTINES_H_
#define _SPI_ROUTINES_H_

#include "config.h"
#define WAIT 1

extern unsigned char errorCode;

void              SPI_init(void);
unsigned char     SPI_transmit(unsigned char);
unsigned char     SPI_receive(void);
void              SPI_wait5(unsigned short time);
void              SPI_send_byte_fast(unsigned char byte);
void              SPI_send_byte_slow(unsigned char byte);
unsigned char     SPI_read_byte_fast(void);
unsigned char     SPI_read_byte_slow(void);
void              SPI_clock_pulse_fast();
void              SPI_clock_pulse_slow();
void              SPI_fast();
void              SPI_slow();

#endif

