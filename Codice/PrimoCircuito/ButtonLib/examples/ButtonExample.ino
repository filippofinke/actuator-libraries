/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 23.11.2018
 */

/**
 * Includo la libreria.
 */
#include <button.h>

/**
 * Istanzio un oggetto di tipo Button.
 */
Button b(10);

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
  //Ricavo lo stato del bottone.
  bool state = b.getState();
  //Stampo lo stato del bottone all'interno della console seriale.
  Serial.println(state);
}
