#include <OneWire.h>                 //KNIZNICA ONEWIRE PRE VYUZITIE ONEWIRE ZBERNICE
#include <DallasTemperature.h>       //KNIZNICA PRE TEPLOTNE CIDLA
#define ONE_WIRE_BUS 2               //DEFINICIA PINU AKO ZBERNICE PRE ONEWIRE ZARIADENIA
OneWire oneWire(ONE_WIRE_BUS);       //ONEWIRE ČÍTAŤ IBA NA PORTE DEFINOVANOM VYSSIE
DallasTemperature sensors(&oneWire);
#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <SPI.h>
const char *ssid = "ESPap";
const char *password = "thereisnospoon";

ESP8266WebServer server(80);

/* IP stranky je 192.168.4.1 (predpísané kniznicou)
*/
void handleRoot() {
  sensors.begin(); 
sensors.requestTemperatures();  

server.send(200, "text/html", "<!DOCTYPE html><html><body><table><tr><td>Cidlo</td><td>Hodnota</td></tr><tr><td>DS18b20 - dnu</td><td>"+(String)sensors.getTempCByIndex(0)+"</td></tr><tr><td>DS18b20 - von</td><td>"+(String)sensors.getTempCByIndex(1)+"</td></tr></table></body></html>");
}

void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Konfigurujem access point...");
  /* You can remove the password parameter if you want the AP to be open. */
  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("IP adresa pristupoveho bodu je: ");
  Serial.println(myIP);
  server.on("/", handleRoot);
  server.begin();
  Serial.println("Webserver bezi");
}

void loop() {
  server.handleClient();
}
