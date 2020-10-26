/*****************************************************************************
* | File      	:	Debug.h
* | Author      :   Waveshare team
* | Function    :	debug with printf
* | Info        :
*   Image scanning
*      Please use progressive scanning to generate images or fonts
*----------------
* |	This version:   V1.0
* | Date        :   2018-01-11
* | Info        :   Basic version
*
******************************************************************************/
#ifndef __DEBUG_H
#define __DEBUG_H

#include <Arduino.h>
#include <Wire.h>


#define USE_DEBUG 0
#if USE_DEBUG
	#define DEBUG(__info) Serial.print(__info); delay(100)
  #define DEBUGLN(__info) Serial.println(__info); delay(100)
#else
	#define DEBUG(__info)  
 #define DEBUGLN(__info)
#endif

#endif
