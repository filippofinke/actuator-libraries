# Libreria

Photocell

## Descrizione

Libreria Photocell, permette di semplificare l'utilizzo della fotocellula.

### Utilizzo
- Importare la libreria cliccando il menù a tendina "Sketch", poi passare con il mouse sull'etichetta "Include Library", infine scegliere l'opzione "Add .ZIP library":
![Add .ZIP library](../../Images/add_zip_library.png)
In seguito navigare verso la cartella della libreria "PhotocellLib" e selezionarla con "Apri". Questo aggiungerà la libreria "PhotocellLib" all'elenco nel menù contestuale "Include Library". Selezionando la libreria dall'elenco aggiungerà la seguente riga di codice in cima al file sul quale si sta lavorando:

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
