#include "config.h"

#ifndef __LCD_NOKIA__
#define __LCD_NOKIA__

#define false 0
#define true  1
#define LOW 0
#define HIGH 1
#define MIN_CONTRAST 30
#define MAX_CONTRAST 60

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>
#include <stdlib.h>
#include "string.h"

unsigned char lcd_contrast;
unsigned char inverse;
unsigned char under;
unsigned char over;

void lcd_write(unsigned char dc, unsigned char data);
void lcd_icon(int icon);
void lcd_char(unsigned char c);
void lcd_init();
void lcd_config();
void lcd_border(void);
void lcd_clear();
void lcd_char(unsigned char c);
void lcd_clear();
void lcd_gotoxy(unsigned char x, unsigned char y);
void lcd_put_s(char *str);
void lcd_put_i(unsigned int value);
void lcd_put_l(unsigned long int value);
void lcd_put_p(const prog_char *progmem_s);
void lcd_icon(int icon);
void lcd_inverse();
void lcd_underline();
void lcd_overline();

/* Definições para o LCD */

#define LCD_C     LOW
#define LCD_D     HIGH

#define LCD_X     84
#define LCD_Y     48
#define LCD_CMD   0

#define LCD_ENABLE  				LCD_PORT |= _BV(LCD_SCE_PIN)
#define LCD_DISABLE 				LCD_PORT &=~_BV(LCD_SCE_PIN)
#define LCD_INSTRUCTION				LCD_PORT &=~_BV(LCD_SCLK_PIN)
#define LCD_DATA					LCD_PORT |= _BV(LCD_SCLK_PIN)

#endif