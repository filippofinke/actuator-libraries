/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 07.12.2018
 */

/**
 * Includo la libreria.
 */
#include <photocell.h>

/**
 * Istanzio un oggetto di tipo Photocell.
 */
Photocell photocell(4);

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
  //Ricavo la luminosità.
  int lux = photocell.getLux();
  //Stampo nella console seriale la luminosità.
  Serial.println(lux);
}
