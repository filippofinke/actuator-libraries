# Libreria

#### ButtonLib

## Descrizione

La libreria ButtonLib permette di ricavare lo stato di un bottone in modo semplice.

### Utilizzo
- Importare la libreria cliccando il menù a tendina "Sketch", poi passare con il mouse sull'etichetta "Include Library", infine scegliere l'opzione "Add .ZIP library":
![Add .ZIP library](../../Images/add_zip_library.png)
In seguito navigare verso la cartella della libreria "ButtonLib" e selezionarla con "Apri". Questo aggiungerà la libreria "ButtonLib" all'elenco nel menù contestuale "Include Library". Selezionando la libreria dall'elenco aggiungerà la seguente riga di codice in cima al file sul quale si sta lavorando:

```#include <button.h>```
- In seguito istanziare un oggetto di tipo Button con il seguente codice, dove "pin" è un numero intero che rappresenta il numero del pin dell'Arduino al quale è collegato il bottone

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
Ritorna 1 in caso il bottone sia premuto altrimenti 0.

## Esempi

* [ButtonExamples](examples) - Esempi di utilizzo della libreria.


## Autore
* [Filippo Finke](https://github.com/filippofinke)
