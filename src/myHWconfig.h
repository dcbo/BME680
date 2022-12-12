/************************************************************
 * In this File everything which is related to the 
 * Hardware Design is defined
 * - I2C Interface
 * - Interupt Pin
 ************************************************************/ 
#ifndef _MYHWCONFIG_H_
#define _MYHWCONFIG_H_

/************************************************************
 * I2C 
 * - 800kHz
 * - GPIO Routing
 ************************************************************/ 
#define I2CSPEED         800000  
#define I2C_SDA            21                             // GPIO of Data Signal
#define I2C_CLK            22                             // GPIO of CLK Signal


// #define BME680_ADDR        BME680_I2C_ADDR_PRIMARY     // I2C Address of Sensor
#define BME680_ADDR           BME680_I2C_ADDR_SECONDARY   // I2C Address of Sensor

#endif // _MYHWCONFIG_H_
