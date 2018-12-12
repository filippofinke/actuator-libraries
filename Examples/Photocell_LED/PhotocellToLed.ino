/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 12.12.2018
 */

/**
 * Includo le librerie.
 */
#include <photocell.h>
#include <led.h>

/**
 * Istanzio un oggetto di tipo Photocell.
 */
Photocell photocell(3);
/**
 * Istanzio un oggetto di tipo Led.
 */
Led led(4);
/**
 * Imposto un valore minimo di luminosità della resistenza.
 */
int minLux = 0;
/**
 * Imposto un valore massimo di luminosità della resistenza.
 */
int maxLux = 1023;

/**
 * Metodo di setup, viene eseguito una sola volta.
 */
void setup() {
}

/**
 * Metodo che viene eseguito all'infinito.
 */
void loop() {
  //Ricavo la luminosità.
  int lux = photocell.getLux();
  //Converto il valore di luminosità in un altra scala.
  int analogValue = map(lux, minLux, maxLux, 0, 255);
  //Imposto la luminosità del led.
  led.setAnalogState(analogValue);
}
