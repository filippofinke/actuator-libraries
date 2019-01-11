# Libreria

#### ButtonLib

## Descrizione

La libreria ButtonLib permette di ricavare lo stato di un bottone in modo semplice.

### Utilizzo
- Importare la Libreria scrivendo il seguente codice in cima all'applicazione che si sta implementando:

```#include <button.h>```
- Istanziare un oggetto di tipo Button con il seguente codice, dove "pin" è un numero intero che rappresenta il numero del pin al quale è collegato il bottone

```Button b(pin);```

### Metodi
```
Button::Button(int pin)
```
Metodo costruttore con un parametro.
pin, il pin del bottone.
```
bool Button::getState()

```
Permette di ricavare lo stato del bottone.
Ritorna 1 in caso di pottone premuto altrimenti 0.

## Esempi

* [ButtonExamples](examples) - Esempi di utilizzo della libreria.


## Autore
* [Filippo Finke](https://github.com/filippofinke)
