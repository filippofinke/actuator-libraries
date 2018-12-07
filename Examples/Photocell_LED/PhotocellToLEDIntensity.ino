/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 07.12.2018
 */
 /*
 Descrizione:
 Imposta il valore ricavato dalla fotocellula come luminosità del
 led.
 */

/**
 * Includo le librerie.
 */
#include <photocell.h>
#include <led.h>

/**
 * Istanzio un oggetto di tipo Photocell.
 */
Photocell photocell(4);
/**
 * Istanzio un oggetto di tipo Led.
 */
Led led(1);
/**
 * Imposto un valore minimo di luminosità della resistenza.
 */
int minLux = 0;
/**
 * Imposto un valore massimo di luminosità della resistenza.
 */
int maxLux = 400;

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
  int analogValue = map(lux, minLux, maxLux, 0, 1023);
  //Imposto la luminosità del led.
  led.setAnalogState(analogValue);
}
