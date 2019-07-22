# NodeMCU Wifi Teplomer
**Používaním projektu sa osoba zaväzuje k dodržiavaniu zmluvných podmienok MIT licencie, pod ktorou je projekt šírený! Uvedomuje si riziká, obmedzenia a svoje povinnosti. Všeobecne o MIT licencii: https://sk.wikipedia.org/wiki/MIT_licencia**
# Podporte projekt pre pridanie nových funkcionalít
* https://www.paypal.me/chlebovec
Wifi teplomer je projekt, kde sa využíva NodeMCU v AP móde, je to vlastne hotspot so šifrovaním WPA2 PSK, alebo bez šifrovania, ku ktorému sa pripojíte a následne môžete prezerať teploty, alebo veličiny iných čidiel, ktoré k ESP8266 (NodeMCU) pripojíte. Hodnoty sa prezerajú cez webový prehliadač na stránke, ktorú NodeMCU generuje. V tomto riešení je demonštrácia dvoch čidiel DS18B20 s využitím OneWire protokolu. Riešenie predstavuje iba jednoduchú HTML tabuľku s výpisom dvoch hodnôt. Dáta sa aktualizujú vždy, keď klient refreshne stránku. To znamená, že má k dispozícii vždy aktuálnu teplotu v momente, keď si ju vyžiada, teda i ESP meria teplotu až na vyžiadanie.

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
# Zapojenie (GPIO pin 2 je pin D4 - korešponduje s programom):
![alt text](https://i.nahraj.to/f/2bLn.png)
 
