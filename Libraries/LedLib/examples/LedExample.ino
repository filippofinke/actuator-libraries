/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 05.12.2018
 */

/**
 * Includo la libreria.
 */
#include <led.h>

/**
 * Istanzio un oggetto di tipo Led.
 */
Led led(13);

/**
 * Metodo di setup, viene eseguito una sola volta.
 */
void setup() {
  Serial.begin(9600);
}

/**
 * Metodo che viene eseguito all'infinito.
 */
void loop() {
  //Accendo il led.
  led.on();
  //Aspetto 1 secondo.
  delay(1000);
  //Spengo il led.
  led.off();
  //Aspetto 1 secondo.
  delay(1000);
  //Inverto lo stato del led, quindi lo accendo.
  led.toggle();
  //Aspetto 1 secondo.
  delay(1000);
  //Stampo lo stato del led, quindi 1.
  Serial.println(led.getState());
  //Aspetto 1 secondo.
  delay(1000);
  //Spengo il led.
  led.setState(LOW);
}
