# Libreria

ButtonLib

## Descrizione

Libreria ButtonLib, permette di ricavare lo stato di un bottone in un modo semplificato.

### Utilizzo
- Importare la Libreria
```#include <button.h>```
- Istanziare un oggetto di tipo Button
```Button b(PIN);```

### Metodi
Button::Button(int pin)

```
Metodo costruttore con un parametro.
pin, il pin del bottone.
```

bool Button::getState()

```
Permette di ricavare lo stato del bottone.
Ritorna 1 in caso di pottone premuto altrimenti 0.
```

## Esempi

* [ButtonExamples](examples) - Esempi di utilizzo della libreria.


## Autore
* [Filippo Finke](https://github.com/filippofinke)