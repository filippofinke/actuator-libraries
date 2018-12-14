/**
 * @Author: filippofinke
 * @Date:   07.12.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 14.12.2018
 */
 /*
 Descrizione:
 Mostra il sfarfallio del cursore.
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
}

/**
 * Metodo che viene eseguito all'infinito.
 */
 void loop() {
   //Disabilito il sfarfallio del cursore.
   lcd.noBlink();
   //Stampo all'interno del display la scritto "Non blinka!" e aspetto 5 secondi.
   printMessage("Non blinka!", 5);
   //Abilito il sfarfallio del cursore.
   lcd.blink();
   //Stampo all'interno del display la scritto "Blinka!" e aspetto 5 secondi.
   printMessage("Blinka!", 5);
 }
 /**
  * Metodo utilizzato per stampare all'interno del display con un timer.
  *
  * @param message Il messaggio da stampare.
  * @param seconds Quanti secondi aspettare.
  */
 void printMessage(String message, int seconds) {
  //Per ogni secondo eseguo:
  for(int x = seconds; x > 0; x--) {
      //Cancello le scritte all'interno del display.
      lcd.clear();
      //Imposto il cursore in alto a sinistra.
      lcd.setCursor(0, 0);
      //Scrivo nel display il messaggio.
      lcd.print(message);
      //Mi sposto in basso a sinistra.
      lcd.setCursor(0, 1);
      //Stampo un messaggio di attesa.
      lcd.print("Aspetto " + String(x) + " sec!");
      //Sposto il cursore nella posizione 10 della prima riga.
      lcd.setCursor(10,0);
      //Aspetto 1 secondo.
      delay(1000);
  }
}
