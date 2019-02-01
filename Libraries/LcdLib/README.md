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

```
LiquidCrystal_I2C::LiquidCrystal_I2C(uint8_t lcd_Addr,uint8_t lcd_cols,uint8_t lcd_rows)
```

Metodo costruttore con 3 parametri.
lcd_Addr, l'indirizzo esadecimale del display.
lcd_cols, il numero di colonne del display.
lcd_rows, il numero di righe del display.


```
void LiquidCrystal_I2C::init_priv()
```
Metodo che si occupa di attivare la comunicazione I2C e di inizializzare il display.

```
void LiquidCrystal_I2C::begin(uint8_t cols, uint8_t lines, uint8_t dotsize)
```
Metodo che si occupa di impostare valori di default come font, colonne e righe.

```
void LiquidCrystal_I2C::clear()
```
Metodo che pulisce il display.
Imposta il cursore alla posizione iniziale. (0)

```
void LiquidCrystal_I2C::home()
```
Imposta il cursore alla posizione iniziale. (0)

```
void LiquidCrystal_I2C::setCursor(uint8_t col, uint8_t row)
```
Metodo che imposta la posizione del cursore ad una determinata riga e colonna.
col, la colonna del cursore.
row, la riga del cursore.

```
void LiquidCrystal_I2C::noDisplay()
```
Spegne il display.

```
void LiquidCrystal_I2C::display()
```
Accende il display.

```
void LiquidCrystal_I2C::noCursor()
```
Nasconde il cursore.

```
void LiquidCrystal_I2C::cursor()
```
Mostra il cursore.

```
void LiquidCrystal_I2C::noBlink()
```
Disattiva il lampeggiamento del cursore.

```
void LiquidCrystal_I2C::blink()
```
Mostra il lampeggiamento del cursore.

```
void LiquidCrystal_I2C::scrollDisplayLeft(void)
```
Sposta tutto a sinistra di un posto mantenendo il contenuto.

```
void LiquidCrystal_I2C::scrollDisplayRight(void)
```
Sposta tutto a destra di un posto mantenendo il contenuto.

```
void LiquidCrystal_I2C::leftToRight(void)
```
Per spostare il testo da sinistra a destra.

```
void LiquidCrystal_I2C::rightToLeft(void)
```
Per spostare il testo da destra a sinistra.

```
void LiquidCrystal_I2C::autoscroll(void)
```
Per far muovere in modo automatico il cursore.

```
void LiquidCrystal_I2C::noAutoscroll(void)
```
Disabilita il movimento automatico del cursore.

```
void LiquidCrystal_I2C::createChar(uint8_t location, uint8_t charmap[])
```
Permette di scrivere un carattere personalizzato.
Ci sono solo 0-7 posti.

```
void LiquidCrystal_I2C::noBacklight(void)
```
Permette di spegnere la retro illuminazione.

```
void LiquidCrystal_I2C::backlight(void)
```
Permette di accendere la retro illuminazione.

```
inline void LiquidCrystal_I2C::command(uint8_t value)
```
Utilizzato per mandare comandi attraverso il metodo send().
value, il comando.

```
inline size_t LiquidCrystal_I2C::write(uint8_t value)
```
Utilizzato per mandare dati attraverso il metodo send().
value, il dato.

```
void LiquidCrystal_I2C::send(uint8_t value, uint8_t mode)
```
Metodo utilizzato per mandare i comandi e i dati al display.
value, Il comando o dato.
mode, La modalità di invio.

```
void LiquidCrystal_I2C::write4bits(uint8_t value)
```
Metodo utilizzato per inviare 4bits.
value, I dati da inviare.

```
void LiquidCrystal_I2C::expanderWrite(uint8_t _data)
```
Metodo che invia i dati alla connessione I2C.
_data, I dati da inviare.

```
void LiquidCrystal_I2C::pulseEnable(uint8_t _data)
```
Metodo utilizzato per rimandare i dati in modo di essere sicuri della ricezione da parte del display.
_data, I dati da inviare.

```
void LiquidCrystal_I2C::setBacklight(uint8_t new_val)
```
Metodo per impostare lo stato della retroilluminazione.
new_val, Il valore della retro illuminazione.

| Acceso | Spento |
|--------|--------|
| 1      | 0      |
| HIGH   | LOW    |
| true   | false  |

## Esempi

* [LcdLib Examples](../../Examples/LCD) - Esempi di utilizzo della libreria.


## Fonti

- [https://digistump.com/wiki/digispark/tutorials/lcd](https://digistump.com/wiki/digispark/tutorials/lcd)

- [https://github.com/platisd/ATtiny85-LCD-library](https://github.com/platisd/ATtiny85-LCD-library)

## Autore
* [Filippo Finke](https://github.com/filippofinke)
