# ESP32 BME680
Connect BME680 Sensor using I2C
- SCL - GPIO 22
- SDA - GPIO 21
- VCC - 3.3V
- GND - GND

Attention my Sensor is programmed with the secondary I2C address, you may change it in myHWconfig.h

# Functionality
* Wifi Connection  
* MQTT Connection 
* Self Monitoring connectivity and reconnect on connection loss
* Command Parser accepts commends over MQTT
* MQTT Status Topic, retained, with LastWill
* CRON System which sends different MQTT Topics every 10s, 30s and 60s
* Automatic Versioning System
  * Version Number is incremented after Upload to Production Target
* Measure and Publish all BME680-values in given interval (default 10s)

# Available MQTT-Commands 
* Commands must be published to topic `[PREFIX]/cmd`
* Responses are published to `[PREFIX]/result`

## Set Mesaurement Interval
### `interval NUM`
Set Measurement Interval to `NUM` Seconds (1-3600)
 Example:
 * command: `interval 10` 
 * result: `New Interval :10s`


## System related Commands
### `reset`
Reboot ESP32

Example:
 * command: `reset` 
 
