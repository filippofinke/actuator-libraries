/**
 * @Author: filippofinke
 * @Date:   07.12.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 19.12.2018
 */
 /*
 Descrizione:
 Esempio di implementazione del display a cristalli liquidi che permette di
 stamparvi sopra una stringa di testo che viene traslata verso un senso a scelta
 */
/**
 * Includo le librerie.
 */
#include <TinyWireM.h>
#include <LiquidCrystal_I2C.h>

/**
 * Istanzio un oggetto di tipo LCD all'indirizzo 0x27, con 16 caratteri e due righe.
 */
LiquidCrystal_I2C lcd(0x27,16,2);

/**
 * Metodo di setup, viene eseguito una sola volta.
 */
void setup() {
  //Avvio la comunicazione I2C.
  TinyWireM.begin();
  //Preparo il display LCD.
  lcd.init();
  //Accendo la retroilluminazione.
  lcd.backlight();
  //Stampo all'interno del display LCD la scritta "Hello World!"
  lcd.print("Hello world!");
}

/**
 * Metodo che viene eseguito all'infinito.
 */
 void loop() {
   //Sposto il testo a sinistra di un carattere alla volta.
   for (int positionCounter = 0; positionCounter < 12; positionCounter++) {
     //Sposto a sinistra di un carattere.
     lcd.scrollDisplayLeft();
     //Aspetto 150ms.
     delay(150);
   }

   //Sposto il testo a destra di 30 posizioni (lunghezza stringa + lunghezza display).
   for (int positionCounter = 0; positionCounter < 30; positionCounter++) {
     //Sposto a destra di un carattere.
     lcd.scrollDisplayRight();
     //Aspetto 150ms.
     delay(150);
   }

   //Aspetto 1 secondo.
   delay(1000);

 }
