/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 30.01.2019
 */
 #ifndef Led_h
 #define Led_h
 #include "Arduino.h"

/**
 * Dichiarazione dei metodi della classe led.cpp.
 */
 class Led
 {
   /**
    * Metodi ed attributi pubblici.
    */
   public:
     /**
      * Metodo costruttore con un parametro.
      * @param pin Il pin del Led.
      */
     Led(int pin);

     /**
      * Metodo che accende il led.
      */
     void on();

     /**
      * Metodo che spegne il led.
      */
     void off();

     /**
      * Metodo che inverte lo stato del led.
      */
     void toggle();

     /**
      * Metodo che imposta lo stato del led.
      */
     void setState(bool state);

     /**
      * Metodo che imposta lo stato del led in modo analogico.
      */
     void setAnalogState(int value);

     /**
      * Metodo che ricava lo stato del led.
      * @return bool 1 se acceso altrimenti 0.
      */
     bool getState();

     /**
      * Restituisce il valore dell'intensità del LED da 0 a 255, dove 0 significa che
      * il LED è completamente spento e 255 significa che il LED è acceso alla
      * massima intensità
      * @return un valore da 0 a 255 che simboleggia il valore dell'intensità del LED
      */
     int getAnalogState();

   /**
    * Metodi ed attributi privati.
    */
   private:
     /**
      * Il pin del led.
      */
     int _pin;
 };

 #endif
