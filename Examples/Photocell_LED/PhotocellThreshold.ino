/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 07.12.2018
 */
 /*
 Descrizione:
 Accende il led solamente se la fotocellula ritorna un valore
 di luminosità elevato.
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
 * Imposto una soglia dopo il quale accendere il led.
 */
int soglia = 100;

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
  //Controllo che la luminosità sia maggiore o uguale alla soglia stabilita.
  if(lux >= soglia) {
    //Accendo il led.
    led.on();
  } else {
    //Spengo il led.
    led.off();
  }
}
