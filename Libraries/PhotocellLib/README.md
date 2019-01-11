# Libreria

Photocell

## Descrizione

Libreria Photocell, permette di semplificare l'utilizzo della fotocellula.

### Utilizzo
- Importare la Libreria scrivendo il seguente codice in cima all'applicazione che si sta implementando:

```#include <photocell.h>```

- Istanziare un oggetto di tipo Button con il seguente codice, dove "pin" è un numero intero che rappresenta il numero del pin al quale è collegato il bottone

```Photocell photocell(PIN);```

### Metodi

```
Photocell::Photocell(int pin)
```
Metodo costruttore con un parametro.
pin, il pin della fotocellula.

```
void Photocell::getLux()
```
Ritorna la luminosità della fotocellula nell'intervallo 0-1023.

## Esempi

* [PhotocellExamples](examples) - Esempi di utilizzo della libreria.


## Autore
* [Filippo Finke](https://github.com/filippofinke)
