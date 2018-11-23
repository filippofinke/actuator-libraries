/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 23.11.2018
 */
 #ifndef Led_h
 #define Led_h
 #include "Arduino.h"

 class Led
 {
   public:
     Led(int pin);
     void on();
     void off();
     void toggle();
     bool getState();
   private:
     int _pin;
 };

 #endif
