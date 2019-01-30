/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 30.01.2019
 */
 #ifndef Button_h
 #define Button_h
 #include "Arduino.h"

 /**
  * Dichiarazione dei metodi della classe button.cpp.
  */
 class Button
 {
   /**
    * Metodi ed attributi pubblici.
    */
   public:
     /**
      * Metodo costruttore con un parametro.
      * @param pin Il pin del bottone.
      */
     Button(int pin);

     /**
      * Metodo che ricava lo stato del bottone.
      * @return bool 1 se premuto altrimenti 0.
      */
     bool getState();

   /**
    * Metodi ed attributi privati.
    */
   private:
     /**
      * Il pin del bottone.
      */
     int _pin;
 };

 #endif
