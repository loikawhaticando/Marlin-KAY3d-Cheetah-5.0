#pragma once


#ifndef __MARLIN_FIRMWARE__
#define __MARLIN_FIRMWARE__
#endif

//
// Prefix header to acquire configurations
//
//#include <stdint.h>

#include "Configuration.h"

/*Store all machine settings below */
#if ENABLED(Ender_3)
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
//#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 235
#define Y_BED_SIZE 235
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 250
#define INVERT_X_DIR true
#define INVERT_Y_DIR true 
#define INVERT_Z_DIR false 
#define SHOW_CUSTOM_BOOTSCREEN // Show the bitmap in Marlin/_Bootscreen.h on startup.
//#define CR10_STOCKDISPLAY
#define CHOPPER_TIMING CHOPPER_DEFAULT_24V
#define x_steps 80
#define y_steps 80
#define z_steps 400
#define X_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif

#if ENABLED(Ender_5_2)
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
//#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 225
#define Y_BED_SIZE 225
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 300 
#define INVERT_X_DIR false 
#define INVERT_Y_DIR false 
#define INVERT_Z_DIR true 
#define SHOW_CUSTOM_BOOTSCREEN // Show the bitmap in Marlin/_Bootscreen.h on startup.
//#define CR10_STOCKDISPLAY
#define CHOPPER_TIMING CHOPPER_DEFAULT_24V
#define x_steps 80
#define y_steps 80
#if ENABLED(Ender_5fix)
#define z_steps 800
#else
#define z_steps 400
#endif
#define X_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif

#if ENABLED(Ender_5)
//#define USE_XMIN_PLUG
//#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
#define USE_XMAX_PLUG
#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 220
#define Y_BED_SIZE 220
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 300
#define INVERT_X_DIR true
#define INVERT_Y_DIR true
#define INVERT_Z_DIR true
#define SHOW_CUSTOM_BOOTSCREEN_E3 // Show the bitmap in Marlin/_Bootscreen.h on startup.
#define CR10_STOCKDISPLAY
#define CHOPPER_TIMING CHOPPER_DEFAULT_24V
#define x_steps 80
#define y_steps 80
#if ENABLED(Ender_5fix)
#define z_steps 800
#else
#define z_steps 400
#endif
#define X_HOME_DIR 1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR 1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif

#if ENABLED(Ender_5pro)
//#define USE_XMIN_PLUG
//#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
#define USE_XMAX_PLUG
#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 220
#define Y_BED_SIZE 220
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 300
#define INVERT_X_DIR true 
#define INVERT_Y_DIR true 
#define INVERT_Z_DIR true
#define SHOW_CUSTOM_BOOTSCREEN // Show the bitmap in Marlin/_Bootscreen.h on startup.
//#define CR10_STOCKDISPLAY
#define CHOPPER_TIMING CHOPPER_DEFAULT_24V
#define x_steps 80
#define y_steps 80
#define z_steps 800
#define X_HOME_DIR 1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR 1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif

#if ENABLED(CR_10)
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
//#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 300
#define Y_BED_SIZE 300
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE + 20
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 400 
#define INVERT_X_DIR true 
#define INVERT_Y_DIR true 
#define INVERT_Z_DIR false
#define SHOW_CUSTOM_BOOTSCREEN // Show the bitmap in Marlin/_Bootscreen.h on startup.
//#define CR10_STOCKDISPLAY
#define CHOPPER_TIMING CHOPPER_DEFAULT_12V
#define x_steps 80
#define y_steps 80
#define z_steps 400
#define X_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif

#if ENABLED(CR_10S)
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
//#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 296
#define Y_BED_SIZE 298
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS 319
#define Y_MAX_POS 306
#define Z_MAX_POS 400
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true
#define SHOW_CUSTOM_BOOTSCREEN // Show the bitmap in Marlin/_Bootscreen.h on startup.
//#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define CHOPPER_TIMING CHOPPER_DEFAULT_12V
#define x_steps 80
#define y_steps 80
#define z_steps 400
#define X_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif

#if ENABLED(CR_10V2)
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
//#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 310
#define Y_BED_SIZE 310
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE 
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 440 
#define INVERT_X_DIR false 
#define INVERT_Y_DIR false 
#define INVERT_Z_DIR true
#define SHOW_CUSTOM_BOOTSCREEN // Show the bitmap in Marlin/_Bootscreen.h on startup.
//#define CR10_STOCKDISPLAY
#define CHOPPER_TIMING CHOPPER_DEFAULT_24V
#define x_steps 80
#define y_steps 80
#define z_steps 400
#define X_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif

#if ENABLED(Sidewinder_x1)
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
//#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 300
#define Y_BED_SIZE 310
#define X_MIN_POS -2
#define Y_MIN_POS -5
#define Z_MIN_POS 0
#define X_MAX_POS 319
#define Y_MAX_POS 306
#define Z_MAX_POS 400
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true
#define SHOW_CUSTOM_BOOTSCREEN_E3 // only works if you have a 12864 display
//#define CR10_STOCKDISPLAY
#define CHOPPER_TIMING CHOPPER_DEFAULT_24V
#define x_steps 80.121
#define y_steps 80.121
#define z_steps 399.778
#define X_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif

#if ENABLED(KAY3D_CoreXY)
#define COREXY
#define USE_XMIN_PLUG
//#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 230
#define Y_BED_SIZE 205
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 400
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true
#define SHOW_CUSTOM_BOOTSCREEN // Show the bitmap in Marlin/_Bootscreen.h on startup.
//#define CR10_STOCKDISPLAY
#define CHOPPER_TIMING CHOPPER_DEFAULT_24V
#define x_steps 80
#define y_steps 80
#define z_steps 1200
#define X_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR 1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif

#if ENABLED(Ender_5plus)
//#define USE_XMIN_PLUG
//#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
#define USE_XMAX_PLUG
#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 379
#define Y_BED_SIZE 395 // 371 new values to fix ender 5 plus Y stalling before hitting end stops.
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 400
#define INVERT_X_DIR true
#define INVERT_Y_DIR true
#define INVERT_Z_DIR true
#define SHOW_CUSTOM_BOOTSCREEN // Show the bitmap in Marlin/_Bootscreen.h on startup.
#define CHOPPER_TIMING CHOPPER_DEFAULT_24V
#define x_steps 80
#define y_steps 80
#define z_steps 800
#define X_HOME_DIR 1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR 1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif

#if ENABLED(Anet_A8)
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
//#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 220
#define Y_BED_SIZE 220
#define X_MIN_POS -33
#define Y_MIN_POS -10
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 240
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true
//#define SHOW_CUSTOM_BOOTSCREEN // Show the bitmap in Marlin/_Bootscreen.h on startup.
#define CHOPPER_TIMING CHOPPER_DEFAULT_12V
#define x_steps 100
#define y_steps 100 
#define z_steps 400
#define X_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif


#if ENABLED(CR_10S5)
#define USE_XMIN_PLUG
#define USE_YMIN_PLUG
#define USE_ZMIN_PLUG
//#define USE_XMAX_PLUG
//#define USE_YMAX_PLUG
//#define USE_ZMAX_PLUG
#define X_BED_SIZE 510
#define Y_BED_SIZE 510
#define X_MIN_POS 0
#define Y_MIN_POS 0
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE
#define Z_MAX_POS 510
#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR true
#define SHOW_CUSTOM_BOOTSCREEN // Show the bitmap in Marlin/_Bootscreen.h on startup.
//#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
#define CHOPPER_TIMING CHOPPER_DEFAULT_12V
#define x_steps 80
#define y_steps 80
#define z_steps 400
#define X_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Y_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#define Z_HOME_DIR -1 //This defines the homing direction. Change between values of 1 and -1 to change direction
#endif


//continue with printer definitions. 

#if ENABLED(INVERT_XYZ) //function swops all available axis except E0. E0 found in seciton 13.
  #if (INVERT_X_DIR == true)
  #undef INVERT_X_DIR
  #define INVERT_X_DIR false
  #else
  #undef INVERT_X_DIR
  #define INVERT_X_DIR true
  #endif
  #if (INVERT_Y_DIR == true)
  #undef INVERT_Y_DIR
  #define INVERT_Y_DIR false
  #else
  #undef INVERT_Y_DIR
  #define INVERT_Y_DIR true
  #endif
  #if (INVERT_Z_DIR == true)
  #undef INVERT_Z_DIR
  #define INVERT_Z_DIR false
  #else
  #undef INVERT_Z_DIR
  #define INVERT_Z_DIR true
  #endif
#endif

#if ENABLED(INVERT_XY) //function swaps X and Y axis, not Z or E0. E0 found in seciton 13.
  #if (INVERT_X_DIR == true)
  #undef INVERT_X_DIR
  #define INVERT_X_DIR false
  #else
  #undef INVERT_X_DIR
  #define INVERT_X_DIR true
  #endif
  #if (INVERT_Y_DIR == true)
  #undef INVERT_Y_DIR
  #define INVERT_Y_DIR false
  #else
  #undef INVERT_Y_DIR
  #define INVERT_Y_DIR true
  #endif
#endif