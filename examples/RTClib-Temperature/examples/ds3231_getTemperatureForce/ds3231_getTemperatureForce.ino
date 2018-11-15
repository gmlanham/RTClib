//#path "D:\Users\mike\Documents\Arduino\libraries\temp3231\examples\ds3231_getTemperatureBasic\temp3231.h"
#include <RTClib-Temperature.h>

RTC_DS3231 rtc;
int tempC;
int tempF;
 
void setup() {
  Serial.begin(9600);
  delay(1);  
  while (!Serial);
  delay(1);
  Serial.println();
  Serial.println(__DATE__);  
  Serial.println(__TIME__);
  Serial.println(__FILE__);
  Serial.println();
  Serial.flush();
  //RTC.begin();
}
 
void loop() {
  tempC = rtc.getTemperature();
  tempF = (tempC * 1.8) + 32.0; // Convert C to F

}
