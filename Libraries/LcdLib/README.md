# Libreria

LcdLib

## Descrizione

Libreria LcdLib, permette di semplificare l'utilizzo del display LCD.

### Utilizzo
- Importare la Libreria scrivendo il seguente codice in cima all'applicazione che si sta implementando:

```
#include <TinyWireM.h>
#include <LiquidCrystal_I2C.h>
```

- Istanziare un oggetto di tipo lcd con il seguente codice, dove "address" è l'indirizzo del display LCD (solitamente 0x27),  "columns" il numero di caratteri per riga e "rows" il numero di righe.

```
LiquidCrystal_I2C lcd(address,columns,rows);
```

### Metodi

[Todo](https://github.com/platisd/ATtiny85-LCD-library/blob/master/LiquidCrystal_ATtiny/LiquidCrystal_attiny.cpp)

## Esempi

* [LcdLib Examples](../../Examples/LCD) - Esempi di utilizzo della libreria.


## Fonti

- [https://digistump.com/wiki/digispark/tutorials/lcd](https://digistump.com/wiki/digispark/tutorials/lcd)

- [https://github.com/platisd/ATtiny85-LCD-library](https://github.com/platisd/ATtiny85-LCD-library)
