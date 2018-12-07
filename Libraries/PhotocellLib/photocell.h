/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 07.12.2018
 */
 #ifndef Photocell_h
 #define Photocell_h
 #include "Arduino.h"

 class Photocell
 {
   public:
     Photocell(int pin);
     int getLux();
   private:
     int _pin;
 };

 #endif
