#include "LCD.hpp"


LCD::LCD(){
}

void LCD::init() { 
    lcd.begin(16, 2);         // LCD 16x2
    lcd.setRGB(colorR,colorG,colorB);
}

void LCD::afficherMessage(const String& message) {
    lcd.setCursor(0, 0);
    lcd.print(message);
}

void LCD::afficherTemperature(float temperature) {
    lcd.setCursor(0, 1);
    lcd.print("Temp: ");
    lcd.print(temperature);
    lcd.print((char)223); // ° symbole
    lcd.print("C   ");
}

void LCD::afficherHumidite(float humidite) {
    lcd.setCursor(0, 0);
    lcd.print("Hum: ");
    lcd.print(humidite);
    lcd.print("%   "); 
    
}

void LCD::GererMenuLCD(BoutonPoussoir& bp, CapteurTemperature& Temp, std::vector<Plante*>& plantes) {
    static int ecranCourant = 0;
    static unsigned long dernierAppui = 0;
    const unsigned long debounce = 200;

    bool etatBP = bp.LireEtat(); // true si appuyé

    if (etatBP && (millis() - dernierAppui > debounce)) {
        ecranCourant++;
        if (ecranCourant > plantes.size()) ecranCourant = 0;
        lcd.clear();
        dernierAppui = millis();
    }

    if (ecranCourant == 0) {
        afficherTemperature(Temp.lireValeurtemp());
        afficherHumidite(Temp.lireValeurhum());
    } else {
        int idx = ecranCourant - 1;
        if (!plantes.empty() && idx < plantes.size() && plantes[idx] != nullptr) {
            Plante* p = plantes[idx];
            lcd.setCursor(0,0);
            lcd.print(p->Caracteristiques());
            lcd.setCursor(0,1);
            lcd.print("PV: ");
            lcd.print(p->GetPointDeVie());
        }
    }
}



void LCD::effacer() {
    lcd.clear();
}
