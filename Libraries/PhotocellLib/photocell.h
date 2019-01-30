/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 30.01.2019
 */
 #ifndef Photocell_h
 #define Photocell_h
 #include "Arduino.h"

 /**
  * Dichiarazione dei metodi della classe photocell.cpp.
  */
 class Photocell
 {
   /**
    * Metodi ed attributi pubblici.
    */
   public:
     /**
      * Metodo costruttore con un parametro.
      * @param pin Il pin al quale è collegata la fotocellula.
      */
     Photocell(int pin);

     /**
      * Metodo che ricava la luminosità.
      * @return int Luminosità nell'intervallo 0-1023.
      */
     int getLux();

   /**
    * Metodi ed attributi privati.
    */
   private:
     /**
      * Il pin della fotocellula.
      */
     int _pin;
 };

 #endif
