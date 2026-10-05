#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x2886
#define USB_PID 0x0059

// I2C Configuration on alternate pins (Mapped to physical D6 and D7)
static const uint8_t SDA = 21;
static const uint8_t SCL = 20;

// Default SPI will be mapped to Radio (Mapped to physical D9, D8, D10, D3)
static const uint8_t MISO = 9;
static const uint8_t SCK = 8;
static const uint8_t MOSI = 10;
static const uint8_t SS = 6;

#endif /* Pins_Arduino_h */
