/**
 * @Author: filippofinke
 * @Date:   30.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 30.11.2018
 */
 /*
 Descrizione:
 Se il bottone è premuto il led viene acceso.
 Appena viene rilasciato il bottone il led viene spento.
 */

/* Includo la libreria button */
#include <button.h>
/* Includo la led button */
#include <led.h>

/* Istanzio un oggetto di tipo led */
Led led(1);
/* Istanzio un oggetto di tipo button */
Button b(0);

/* Metodo che viene chiamato solo all'avvio */
void setup() {
}

/* Metodo che viene chiamato all'infinito */
void loop() {
  /* Prendo lo stato del bottone */
  bool state = b.getState();
  /* Se il bottone è premuto lo accendo, sennò lo spengo. */
  if(state)
    led.on();
   else
    led.off();
}
