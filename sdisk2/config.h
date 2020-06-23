#ifndef CONFIG_H_
#define CONFIG_H_

#define nop() __asm__ __volatile__ ("nop")
#define clear_bit(a,z) (a &= ~_BV(z))
#define set_bit(a,z) (a |= _BV(z))
#define LCD_FLIP_ADD 0

/*
This is the original SDISK II version from Nishida that was updated
to receive a 16x2 LCD from Victor Trucco and Fabio Belavenuto

DO NOT CHANGE THIS unless you really know what you are doing
*/
#ifdef _SDISK_ORIGINAL_

	#define _LCD_

	// LCD pins
	#define LCD_PORT PORTC
	#define LCD_PORTD DDRC
	#define LCD_ENABLE_PIN 5
	#define LCD_INSTRUCTION_PIN 4

	// SPI (SD SLOT) pins
	#define SPI_MISO  0
	#define SPI_CLOCK 5
	#define SPI_MOSI  4
	#define SPI_CS    1
	#define SD_EJECT  3
	#define SPI_DDR   DDRD
	#define SPI_PIN   PIND
	#define SPI_PORT  PORTD
	#define _CLK_DI_CS	0b00110010
	#define _CLKNDI_CS	0b00100010
	#define NCLK_DI_CS	0b00010010
	#define NCLKNDI_CS	0b00000010
	#define _CLK_DINCS	0b00110000
	#define _CLKNDINCS	0b00100000
	#define NCLK_DINCS	0b00010000
	#define NCLKNDINCS	0b00000000

	// SD LED
	#define SD_LED_PORT PORTB
	#define SD_LED_PORTD DDRB
	#define SD_LED 4

	// BOTOES
	#define ENTER_PORT       PIND
	#define DOWN_PORT        PIND
	#define UP_PORT          PINB
	#define ENTER_PORTD      PORTD
	#define DOWN_PORTD       PORTD
	#define UP_PORTD         PORTB
	#define ENTER_BIT        DDD6
	#define DOWN_BIT         DDD7
	#define UP_BIT           DDB5

	// PINOS PARA A DISK II - APPLE
	#define DISKII_PIN       PINC
	#define DISKII_ENABLE    DDC0


#endif

/*
This is the original SDISK II version from Nishida that was modified
by Alexandre Suaide to receive a NOKIA 5110 Graphical LCD display.
It is still based on the original hardware, just replaced the 16x2 LCD
by the Nokia LCD

DO NOT CHANGE THIS unless you really know what you are doing
*/
#ifdef _SDISK_ORIGINAL_MOD_NOKIA_

	#define _LCD_NOKIA_

	// LCD pins
	#define LCD_PORT         PORTC
	#define LCD_DDR          DDRC
	#define LCD_SCE_PIN      5
	#define LCD_RESET_PIN    VCC
	#define LCD_DC_PIN       3
	#define LCD_SDIN_PIN     1
	#define LCD_SCLK_PIN     4

	// SPI (SD SLOT) pins
	#define SPI_MISO  0
	#define SPI_CLOCK 5
	#define SPI_MOSI  4
	#define SPI_CS    1
	#define SD_EJECT  3
	#define SPI_DDR   DDRD
	#define SPI_PIN   PIND
	#define SPI_PORT  PORTD
	#define _CLK_DI_CS	0b00110010
	#define _CLKNDI_CS	0b00100010
	#define NCLK_DI_CS	0b00010010
	#define NCLKNDI_CS	0b00000010
	#define _CLK_DINCS	0b00110000
	#define _CLKNDINCS	0b00100000
	#define NCLK_DINCS	0b00010000
	#define NCLKNDINCS	0b00000000

	// SD LED
	#define SD_LED_PORT PORTB
	#define SD_LED_PORTD DDRB
	#define SD_LED 4

	// BOTOES
	#define ENTER_PORT       PIND
	#define DOWN_PORT        PIND
	#define UP_PORT          PINB
	#define ENTER_PORTD      PORTD
	#define DOWN_PORTD       PORTD
	#define UP_PORTD         PORTB
	#define ENTER_BIT        DDD6
	#define DOWN_BIT         DDD7
	#define UP_BIT           DDB5

	// PINOS PARA A DISK II - APPLE
	#define DISKII_PIN       PINC
	#define DISKII_ENABLE    DDC0


#endif

/*
This is the second version of SDISK II built by Victor Trucco
with the Nokia 5110 graphical LCD display with USB connection
for firmware update.

DO NOT CHANGE THIS unless you really know what you are doing
*/
#ifdef _SDISK_OLED_

	#define _OLED_
	// OLED pins
	#define SDA_PIN 4
	#define SDA_PORT PORTC
	#define SCL_PIN 5
	#define SCL_PORT PORTC
	#define SSD1306_ADDRESS 0x3C

	// SPI (SD SLOT) pins
	#define SPI_MISO  0
	#define SPI_CLOCK 5
	#define SPI_MOSI  3 //DI
	#define SPI_CS    4
	#define SD_EJECT  1
	#define SPI_DDR   DDRD
	#define SPI_PIN   PIND
	#define SPI_PORT  PORTD
	#define _CLK_DI_CS	0b00111000
	#define _CLKNDI_CS	0b00110000
	#define NCLK_DI_CS	0b00011000
	#define NCLKNDI_CS	0b00010000
	#define _CLK_DINCS	0b00101000
	#define _CLKNDINCS	0b00100000
	#define NCLK_DINCS	0b00001000
	#define NCLKNDINCS	0b00000000

	// SD LED
	#define SD_LED_PORT PORTB
	#define SD_LED_PORTD DDRB
	#define SD_LED 5

	// BOTOES
	#define ENTER_PORT       PIND
	#define DOWN_PORT        PIND
	#define UP_PORT          PINB
	#define ENTER_PORTD      PORTD
	#define DOWN_PORTD       PORTD
	#define UP_PORTD         PORTB
	#define ENTER_BIT        DDD6
	#define DOWN_BIT         DDD7
	#define UP_BIT           DDB4

	// PINOS PARA A DISK II - APPLE
	#define DISKII_PIN       PINC
	#define DISKII_ENABLE    DDC0
#endif

#endif /* CONFIG_H_ */
