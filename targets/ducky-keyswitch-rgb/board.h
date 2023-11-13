// use UART1 for Jacdac Single Wire Serial
#define UART_PIN PB_6
#define UART_PIN_AF LL_GPIO_AF_0
#define USART_IDX 1

// PIN_LED is monochrome LED
#define PIN_LED PC_14

// uncomment next line when the GND is common for the RGB channels
// without this line, the anode (VCC) is common
// #define LED_RGB_COMMON_CATHODE 1
//#define PIN_LED_R PA_8
//#define PIN_LED_G PC_6
//#define PIN_LED_B PB_1

// calibrated to ~50lux per channel
#define LED_R_MULT 250
#define LED_G_MULT 76
#define LED_B_MULT 221
#define RGB_LED_PERIOD 600

// best don't change
// #define PIN_BL_LED PIN_LED
#define PIN_BL_LED PB_1
#define PIN_BL_PERIOD 300
