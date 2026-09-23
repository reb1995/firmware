#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#include <stdint.h>

#define USB_VID 0x2886
#define USB_PID 0x0059

// I2C Remapped to D6 and D7
static const uint8_t SDA = 11; // D6
static const uint8_t SCL = 12; // D7

// Default SPI will be mapped to Radio
static const uint8_t SS = 23;   // D4
static const uint8_t SCK = 8;   // D8
static const uint8_t MISO = 9;  // D9
static const uint8_t MOSI = 10; // D10

#endif /* Pins_Arduino_h */
