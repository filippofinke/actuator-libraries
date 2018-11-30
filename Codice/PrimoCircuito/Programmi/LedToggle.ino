/**
 * @Author: filippofinke
 * @Date:   30.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 30.11.2018
 */
 /*
 Descrizione:
 Se il bottone è premuto o rilasciato il led rimane acceso.
 Se ripermo il bottone il led si spegne.
 */

/* Includo la libreria button */
#include <button.h>
/* Includo la led button */
#include <led.h>

/* Istanzio un oggetto di tipo led */
Led led(1);
/* Istanzio un oggetto di tipo button */
Button b(0);

/* Variabile nel quale viene salvato l'ultimo stato del bottone. */
bool lastButtonState = LOW;

/* Variabile nel quale viene salvato il tempo del click sul bottone. */
int time = millis();

/* Metodo che viene chiamato solo all'avvio */
void setup() {
}

/* Metodo che viene chiamato all'infinito */
void loop() {
  /* Prendo lo stato del bottone */
  bool state = b.getState();

  /* Se il bottone è premuto accendo il led e al prossimo cambiamento spengo il led. */
  if(state && !lastButtonState && millis() - time > 200) {
    lastButtonState = HIGH;
    led.toggle();
    time = millis();
  } else if(!state && lastButtonState) {
    lastButtonState = LOW;
  }
}
