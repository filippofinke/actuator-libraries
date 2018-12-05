/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 23.11.2018
 */
 #ifndef Button_h
 #define Button_h
 #include "Arduino.h"

 class Button
 {
   public:
     Button(int pin);
     bool getState();
   private:
     int _pin;
 };

 #endif
