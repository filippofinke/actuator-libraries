# Libreria

Photocell

## Descrizione

Libreria Photocell, permette di semplificare l'utilizzo della fotocellula attraverso arduino.

### Utilizzo
- Importare la Libreria
```#include <photocell.h>```
- Istanziare un oggetto di tipo Photocell
```Photocell photocell(PIN);```

### Metodi
Photocell::Photocell(int pin)

```
Metodo costruttore con un parametro.
pin, il pin della fotocellula.
```
void Photocell::getLux()

```
Ritorna la luminosità nell'intervallo 0-1023.
```

## Esempi

* [PhotocellExamples](examples) - Esempi di utilizzo della libreria.


## Autore
* [Filippo Finke](https://github.com/filippofinke)
