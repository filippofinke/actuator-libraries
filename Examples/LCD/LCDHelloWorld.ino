/**
 * @Author: filippofinke
 * @Date:   07.12.2018
 * @Last modified by:   filippofinke
 * @Last modified time: 14.12.2018
 */
 /*
 Descrizione:
 Esempio basilare LCD che stampa a schermo HelloWorld!
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

}
