/* 
	Editor: http://www.visualmicro.com
	        visual micro and the arduino ide ignore this code during compilation. this code is automatically maintained by visualmicro, manual changes to this file will be overwritten
	        the contents of the Visual Micro sketch sub folder can be deleted prior to publishing a project
	        all non-arduino files created by visual micro and all visual studio project or solution files can be freely deleted and are not required to compile a sketch (do not delete your own code!).
	        note: debugger breakpoints are stored in '.sln' or '.asln' files, knowledge of last uploaded breakpoints is stored in the upload.vmps.xml file. Both files are required to continue a previous debug session without needing to compile and upload again
	
	Hardware: Arduino Pro or Pro Mini (5V, 16 MHz) w/ ATmega328, Platform=avr, Package=arduino
*/

#ifndef _VSARDUINO_H_
#define _VSARDUINO_H_
#define __AVR_ATmega328p__
#define __AVR_ATmega328P__
#define ARDUINO 105
#define ARDUINO_MAIN
#define __AVR__
#define __avr__
#define F_CPU 16000000L
#define __cplusplus
#define __inline__
#define __asm__(x)
#define __extension__
#define __ATTR_PURE__
#define __ATTR_CONST__
#define __inline__
#define __asm__ 
#define __volatile__

#define __builtin_va_list
#define __builtin_va_start
#define __builtin_va_end
#define __DOXYGEN__
#define __attribute__(x)
#define NOINLINE __attribute__((noinline))
#define prog_void
#define PGM_VOID_P int
            
typedef unsigned char byte;
extern "C" void __cxa_pure_virtual() {;}


#include "D:\Arduino\arduino-1.0.5-r2\hardware\arduino\cores\arduino\arduino.h"
#include "D:\Arduino\arduino-1.0.5-r2\hardware\arduino\variants\standard\pins_arduino.h" 
#include "D:\UAV\MyOpenLRSUndeadMW\MyOpenLRSUndeadMW.ino"
#include "D:\UAV\MyOpenLRSUndeadMW\Alarms.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\Alarms.h"
#include "D:\UAV\MyOpenLRSUndeadMW\EEPROM.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\EEPROM.h"
#include "D:\UAV\MyOpenLRSUndeadMW\GPS.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\GPS.h"
#include "D:\UAV\MyOpenLRSUndeadMW\IMU.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\IMU.h"
#include "D:\UAV\MyOpenLRSUndeadMW\LCD.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\LCD.h"
#include "D:\UAV\MyOpenLRSUndeadMW\MultiWii.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\MultiWii.h"
#include "D:\UAV\MyOpenLRSUndeadMW\Output.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\Output.h"
#include "D:\UAV\MyOpenLRSUndeadMW\Protocol.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\Protocol.h"
#include "D:\UAV\MyOpenLRSUndeadMW\RX.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\RX.h"
#include "D:\UAV\MyOpenLRSUndeadMW\Sensors.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\Sensors.h"
#include "D:\UAV\MyOpenLRSUndeadMW\Serial.cpp"
#include "D:\UAV\MyOpenLRSUndeadMW\Serial.h"
#include "D:\UAV\MyOpenLRSUndeadMW\config.h"
#include "D:\UAV\MyOpenLRSUndeadMW\def.h"
#include "D:\UAV\MyOpenLRSUndeadMW\openLRSConfig.h"
#include "D:\UAV\MyOpenLRSUndeadMW\types.h"
#endif
