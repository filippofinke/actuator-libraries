/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 05.12.2018
 */
#include "Arduino.h"
#include "Photocell.h"

/**
 * Metodo costruttore con un parametro.
 * @param pin Il pin al quale è collegata la fotocellula.
 */
Photocell::Photocell(int pin)
{
  pinMode(pin, INPUT);
  _pin = pin;
}

/**
 * Metodo che ricava la luminosità.
 * @return int Luminosità nell'intervallo 0-1023.
 */
int Photocell::getLux()
{
  return analogRead(_pin);
}
