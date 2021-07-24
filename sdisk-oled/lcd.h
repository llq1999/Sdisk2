#include "config.h"

#ifndef __LCD__
#define __LCD__

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <stdlib.h>
#include "string.h"

unsigned char lcd_contrast;

void lcd_port(unsigned char c);
void lcd_cmd(unsigned char c);
void lcd_data(unsigned char c);
void lcd_char(unsigned char c);
void lcd_init();
void lcd_clear();
void lcd_char(unsigned char c);
void lcd_clear();
void lcd_gotoxy(unsigned char x, unsigned char y);
void lcd_put_s(char *str);
void lcd_put_i(unsigned int value);
void lcd_put_l(unsigned long int value);
void lcd_put_p(const prog_char *progmem_s);

/* Definições para o LCD */
#define LCD_ENABLE  				LCD_PORT |= _BV( LCD_ENABLE_PIN )
#define LCD_DISABLE 				LCD_PORT &=~_BV( LCD_ENABLE_PIN )
#define LCD_INSTRUCTION				LCD_PORT &=~_BV( LCD_INSTRUCTION_PIN )
#define LCD_DATA					LCD_PORT |= _BV( LCD_INSTRUCTION_PIN )

#endif