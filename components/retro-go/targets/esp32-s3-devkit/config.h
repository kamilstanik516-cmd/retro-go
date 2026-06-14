#pragma once

#define RG_TARGET_NAME "moj-gameboy"
#define RG_TARGET_TITLE "Moj ESP32-S3 Game Boy"

// Ekran ST7789
#define RG_SCREEN_DRIVER 0
#define RG_SCREEN_WIDTH 320
#define RG_SCREEN_HEIGHT 240
#define RG_SCREEN_HOST SPI2_HOST     
#define RG_GPIO_LCD_DC 2
#define RG_GPIO_LCD_MISO -1
#define RG_GPIO_LCD_MOSI 13
#define RG_GPIO_LCD_CLK 14
#define RG_GPIO_LCD_CS 15
#define RG_SCREEN_SPEED SPI_MASTER_FREQ_20M

// Ręczna sekwencja startowa (Inwersja i Rotacja)
 #define RG_SCREEN_INIT() \
    ILI9341_CMD(0x11); \
    ILI9341_CMD(0x36, 0xA8); \
    ILI9341_CMD(0x3A, 0x55); \
    ILI9341_CMD(0x21); \
    ILI9341_CMD(0x29);





 

// Piny ekranu (Twoje sprawdzone)
#define RG_PIN_TFT_SCLK     14
#define RG_PIN_TFT_MOSI     13
#define RG_PIN_TFT_MISO     12
#define RG_PIN_TFT_CS       15
#define RG_PIN_TFT_DC       2
#define RG_PIN_TFT_RST      4

// Karta SD na współdzielonym SPI
#define RG_STORAGE_ROOT     "/sd"
#define RG_STORAGE_DRIVER   "spi"
#define RG_PIN_SD_CS        11
#define RG_PIN_SD_SCLK      14
#define RG_PIN_SD_MOSI      13
#define RG_PIN_SD_MISO      12


// Przyciski cyfrowe (bez rezystorów)
#define RG_GAMEPAD_DRIVER   "gpio"
#define RG_PIN_JOY_UP       1
#define RG_PIN_JOY_DOWN     5
#define RG_PIN_JOY_LEFT     6
#define RG_PIN_JOY_RIGHT    7
#define RG_PIN_BTN_A        10
#define RG_PIN_BTN_B        9
#define RG_PIN_BTN_START    3
#define RG_PIN_BTN_SELECT   8

#define RG_BATTERY_CALC_PERCENT(v) ((v) > 4000 ? 100 : (v) < 3200 ? 0 : ((v) - 3200) / 8)

 