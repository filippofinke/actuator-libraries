/**
 * @Author: filippofinke
 * @Date:   23.11.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 07.12.2018
 */
#include "Arduino.h"
#include "Led.h"

/**
 * Metodo costruttore con un parametro.
 * @param pin Il pin del Led.
 */
Led::Led(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

/**
 * Metodo che accende il led.
 */
void Led::on()
{
  setState(HIGH);
}

/**
 * Metodo che spegne il led.
 */
void Led::off()
{
  setState(LOW);
}

/**
 * Metodo che inverte lo stato del led.
 */
void Led::toggle()
{
  setState(!getState());
}

/**
 * Metodo che imposta lo stato del led.
 */
void Led::setState(bool state)
{
  digitalWrite(_pin, state);
}

/**
 * Metodo che imposta lo stato del led in modo analogico.
 */
void Led::setAnalogState(int value)
{
  analogWrite(_pin, value);
}

/**
 * Metodo che ricava lo stato del led.
 * @return bool 1 se acceso altrimenti 0.
 */
bool Led::getState()
{
  return digitalRead(_pin);
}
