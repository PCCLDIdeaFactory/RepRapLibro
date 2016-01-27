/**
 * Teensylu 0.7 pin assignments (AT90USB1286)
 * Requires the Teensyduino software with Teensy++ 2.0 selected in Arduino IDE!
 * http://www.pjrc.com/teensy/teensyduino.html
 * See http://reprap.org/wiki/Printrboard for more info
 */

#ifndef __AVR_AT90USB1286__
  #error Oops!  Make sure you have 'Teensy++ 2.0' selected from the 'Tools -> Boards' menu.
#endif

#if ENABLED(AT90USBxx_TEENSYPP_ASSIGNMENTS)  // use Teensyduino Teensy++2.0 pin assignments instead of Marlin traditional.
  #error These Teensylu assignments depend on traditional Marlin assignments, not AT90USBxx_TEENSYPP_ASSIGNMENTS in fastio.h
#endif

#define LARGE_FLASH        true

#define X_STEP_PIN          0
#define X_DIR_PIN           1
#define X_ENABLE_PIN       39

#define Y_STEP_PIN          2
#define Y_DIR_PIN           3
#define Y_ENABLE_PIN       38

#define Z_STEP_PIN          4
#define Z_DIR_PIN           5
#define Z_ENABLE_PIN       23

#define E0_STEP_PIN         6
#define E0_DIR_PIN          7
#define E0_ENABLE_PIN      19

#define HEATER_0_PIN       21  // Extruder
#define HEATER_1_PIN       46
#define HEATER_2_PIN       47
#define HEATER_BED_PIN     20

// If soft or fast PWM is off then use Teensyduino pin numbering, Marlin
// fastio pin numbering otherwise
#if ENABLED(FAN_SOFT_PWM) || ENABLED(FAST_PWM_FAN)
  #define FAN_PIN          22
#else
  #define FAN_PIN          16
#endif

#define X_STOP_PIN         13
#define Y_STOP_PIN         14
#define Z_STOP_PIN         15
#define TEMP_0_PIN          7  // Extruder / Analog pin numbering
#define TEMP_BED_PIN        6  // Bed / Analog pin numbering

#define TEMP_1_PIN         -1
#define TEMP_2_PIN         -1

#define SDPOWER            -1
#define SDSS                8
#define LED_PIN            -1
#define PS_ON_PIN          -1
#define KILL_PIN           -1
#define ALARM_PIN          -1

#if DISABLED(SDSUPPORT)
// these pins are defined in the SD library if building with SD support
  #define SCK_PIN           9
  #define MISO_PIN         11
  #define MOSI_PIN         10
#endif

#if ENABLED(ULTRA_LCD) && ENABLED(NEWPANEL)

  #define BEEPER_PIN       -1

  #if ENABLED(LCD_I2C_PANELOLU2)
    #define BTN_EN1        27  //RX1 - fastio.h pin mapping 27
    #define BTN_EN2        26  //TX1 - fastio.h pin mapping 26
    #define BTN_ENC        43  //A3  - fastio.h pin mapping 43
    #define SDSS           40  //use SD card on Panelolu2 (Teensyduino pin mapping)
  #endif // LCD_I2C_PANELOLU2

  #define SD_DETECT_PIN    -1    

#endif // ULTRA_LCD && NEWPANEL

