/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 07.12.2018
 */
#include "Arduino.h"
#include "Button.h"

/**
 * Metodo costruttore con un parametro.
 * @param pin Il pin del bottone.
 */
Button::Button(int pin)
{
  pinMode(pin, INPUT);
  _pin = pin;
}

/**
 * Metodo che ricava lo stato del bottone.
 * @return bool 1 se premuto altrimenti 0.
 */
bool Button::getState()
{
  return digitalRead(_pin);
}
