# NodeMCU Wifi Teplomer
Wifi teplomer je projekt, kde sa využíva NodeMCU v AP móde, je to vlastne hotspot, ku ktorému sa pripojíte a následne môžete prezerať teploty, alebo veličiny iných čidiel, ktoré k NodeMCU pripojíte. Hodnoty sa prezerajú cez webový prehliadač na stránke, ktorú NodeMCU generuje. Nachádza sa na rovnakej IP/DNS príznaku ako aj brána (NodeMCU). V tomto riešení je demonštrácia dvoch čidiel DS18B20 s využitím OneWire protokolu. Riešenie popisuje iba jednoduchú HTML tabuľku s výpisom dvoch hodnôt. Pozor! V kóde je treba html kód písať do jedného riadka, inak sa neskompiluje! Dáta sa aktualizujú vždy, keď klient refreshne stránku. To znamená, že má k dispozícii vždy aktuálnu teplotu.
# Technológie projektu
* HTML , CSS* (*voliteľné)
# Parametre projektu:
* NodeMCU v úlohe prístupového bodu (AP)
* Vlastné SSID a WPA2 PSK šifrovanie
* Vlastná IP (statická)/DNS príznak
* Bezpečná webstránka prístupná z domácej siete
* Vždy pri načítaní stránky aktuálne info (informatívny charakter)
# Obrázky z projektu - (ilustračné)
![alt text](https://arduino.php5.sk/images/wifiteplomer.png)
![alt text](https://arduino.php5.sk/images/wifiteplomer2.jpg)
# PODPORA A KONTAKT
* Ak ma chcete podporiť/kontaktovať, navštívte moju stránku: https://arduino.php5.sk
 
