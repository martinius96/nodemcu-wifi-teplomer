# NodeMCU Wifi Teplomer

Wifi teplomer je projekt, kde sa využíva vývojový kit NodeMCU (ESP8266-12E / ESP8266-12F) v AP móde, t.j. v režime hotspotu so šifrovaním WPA/WPA2-PSK, alebo bez šifrovania. K hotspotu sa pripojí klient cez smartfón, počítač. Následne sa cez prehliadač pripojí k webovému rozhraniu, ktoré distribuuje webserver bežiaci na NodemCU. Následne môže používateľ prezerať teploty. V tomto riešení je vizualizácia dvoch teplôt z dvoch senzorov DS18B20 na OneWire zbernici. Riešenie predstavuje iba jednoduchú HTML tabuľku s výpisom dvoch hodnôt. Dáta sa aktualizujú vždy, keď klient refreshne stránku. To znamená, že má k dispozícii vždy aktuálnu teplotu v momente, keď si ju vyžiada, teda i ESP meria teplotu až na vyžiadanie. Webserver nevytvára automatický refresh cez HTML tag / jQuery AJAX.

# Technológie projektu
* HTML s vnoreným CSS kódom

# Parametre projektu:
* NodeMCU v úlohe prístupového bodu (AP)
* Vlastné SSID a WPA2 PSK šifrovanie, alebo bez šifrovania
* Vlastná IP (statická), možnosť rozšíriť o DNS príznak
* Bezpečná webstránka prístupná v sieti ESP a jej dosahu s reponzívnym dizajnom
* Vždy pri načítaní stránky aktuálne info
# Projekt v praxi
![alt text](https://i.nahraj.to/f/2bLk.PNG)
# Problémy
* Ak systém meria -127°C, nemáte zapojené senzory
* ![alt text](https://i.nahraj.to/f/2bLm.png)
* Ak systém meria 85°C, máte zlé zapojenie senzorov
# Vytvoril
* Martin Chlebovec
* E-mail: martinius96@gmail.com
# Zapojenie
![alt text](https://i.imgur.com/aTzun62.png)
 
