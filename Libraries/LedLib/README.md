# Libreria

LedLib

## Descrizione

La libreria LedLib semplifica l'utilizzo di un led.

### Utilizzo
- Importare la libreria cliccando il menù a tendina "Sketch", poi passare con il mouse sull'etichetta "Include Library", infine scegliere l'opzione "Add .ZIP library":
![Add .ZIP library](../../Images/add_zip_library.png)
In seguito navigare verso la cartella della libreria "LedLib" e selezionarla con "Apri". Questo aggiungerà la libreria "LedLib" all'elenco nel menù contestuale "Include Library". Selezionando la libreria dall'elenco aggiungerà la seguente riga di codice in cima al file sul quale si sta lavorando:

```#include <led.h>```
- Istanziare un oggetto di tipo led con il seguente codice, dove "pin" è un numero intero che rappresenta il numero del pin al quale è collegato il led

```Led led(PIN);```

### Metodi
```
Led::Led(int pin)
```

Metodo costruttore con un parametro.
pin, il pin del led.
```
void Led::on()
```
Metodo che accende il led.

```
void Led::off()
```
Metodo che spegne il led.

```
void Led::toggle()
```
Metodo che inverte lo stato del led.
Da acceso a spento e da spento ad acceso.

```
void Led::setState(bool state)
```
Permette di impostare lo stato del led.

| Acceso | Spento |
|--------|--------|
| 1      | 0      |
| HIGH   | LOW    |
| true   | false  |


```
void Led::setAnalogState(int value)
```
Permette di impostare lo stato del led in modo analogico.

Un valore da 0 (spento) a 255 (acceso all'intensità massima).

```
bool Led::getState()
```
Permette di ricavare lo stato del led.
Ritorna 1 in caso il led sia acceso altrimenti 0.

```
int Led::getAnalogState()
```
Permette di ricavare lo stato del led in modo analogico.

Ritorna un valore da 0 (spento) a 255 (acceso all'intensità massima).

## Esempi

* [LedExamples](examples) - Esempi di utilizzo della libreria.


## Autore
* [Filippo Finke](https://github.com/filippofinke)
