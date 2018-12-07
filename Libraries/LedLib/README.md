# Libreria

LedLib

## Descrizione

Libreria LedLib, permette di semplificare l'utilizzo di led attraverso arduino.

### Utilizzo
- Importare la Libreria
```#include <led.h>```
- Istanziare un oggetto di tipo Led
```Led led(PIN);```

### Metodi
Led::Led(int pin)

```
Metodo costruttore con un parametro.
pin, il pin del led.
```
void Led::on()

```
Permette di accendere il led.
```

void Led::off()

```
Permette di spegnere il led.
```

void Led::toggle()

```
Permette di invertire lo stato del led.
```

void Led::setState(bool state)

```
Permette di impostare lo stato del led.
```
void Led::setState(int value)

```
Permette di impostare lo stato del led in modo analogico.
```

bool Led::getState()

```
Permette di ricavare lo stato del led.
Ritorna 1 in caso il led sia acceso altrimenti 0.
```

## Esempi

* [LedExamples](examples) - Esempi di utilizzo della libreria.


## Autore
* [Filippo Finke](https://github.com/filippofinke)
