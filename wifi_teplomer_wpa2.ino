#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
#include <OneWire.h>                 //KNIZNICA ONEWIRE PRE VYUZITIE ONEWIRE ZBERNICE
#include <DallasTemperature.h>       //KNIZNICA PRE TEPLOTNE CIDLA
#define ONE_WIRE_BUS 2               //DEFINICIA PINU AKO ZBERNICE PRE ONEWIRE ZARIADENIA
OneWire oneWire(ONE_WIRE_BUS);       //ONEWIRE ČÍTAŤ IBA NA PORTE DEFINOVANOM VYSSIE
DallasTemperature sensors(&oneWire);
const char *ssid = "MojaESPsietWPA";
const char *password = "hesloksieti";
ESP8266WebServer server(80);

void handleRoot() {
  sensors.begin(); 
  sensors.requestTemperatures();  
  server.send(200, "text/html", "<head><meta charset='UTF-8'><meta name='author' content='Martin Chlebovec'><meta name='viewport' content='width=device-width, initial-scale=1.0'></head><style>body{  display: table;width: 100%;background: #dedede;text-align: center;}*{ -webkit-box-sizing: border-box; /* Safari/Chrome, other WebKit */-moz-box-sizing: border-box;    /* Firefox, other Gecko */box-sizing: border-box;         /* Opera/IE 8+ */}.aa_h2{  font:100 5rem/1 Roboto;  text-transform: uppercase;}table{   background: #fff;}table,thead,tbody,tfoot,tr, td,th{  text-align: center;  margin: auto;  border:1px solid #dedede;  padding: 1rem;  width: 50%;}.table    { display: table; width: 50%; }.tr       { display: table-row;  }.thead    { display: table-header-group }.tbody    { display: table-row-group }.tfoot    { display: table-footer-group }.col      { display: table-column }.colgroup { display: table-column-group }.td, .th   { display: table-cell; width: 50%; }.caption  { display: table-caption }.table,.thead,.tbody,.tfoot,.tr,.td,.th{ text-align: center; margin: auto; padding: 1rem;}.table{  background: #fff;  margin: auto;  border:none;  padding: 0; margin-bottom: 5rem;}.th{font-weight: 700;border:1px solid #dedede;&:nth-child(odd){border-right:none;}}.td{font-weight: 300;border:1px solid #dedede;border-top:none;&:nth-child(odd){border-right:none;}}.aa_htmlTable{background: tomato;padding: 5rem;display: table;width: 100%;height: 100vh;vertical-align: middle;}.aa_css{background: skyblue;padding: 5rem;display: table;width: 100%;height: 100vh;vertical-align: middle;}.aa_ahmadawais{display: table;width: 100%;font: 100 1.2rem/2 Roboto;margin: 5rem auto;}</style><div class='aa_htmlTable'><table width=100%><thead><tr><th>Teplota</th><th>Hodnota</th></tr></thead><tbody><tr><td>Dnu</td><td>"+(String)sensors.getTempCByIndex(0)+" °C</td></tr><tr><td>Von</td><td>"+(String)sensors.getTempCByIndex(1)+" °C</td></tr></tbody></table></div>");
}

void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Konfigurujem access point...");
  WiFi.softAP(ssid, password);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("IP adresa pristupoveho bodu je: ");
  Serial.println(myIP);
  server.on("/", handleRoot);
  server.begin();
  Serial.println("Webserver bezi.");
  Serial.println("Vysiela SSID:");
  Serial.println(ssid);
  Serial.println("Heslo WPA2 PSK:");
  Serial.println(password);
}

void loop() {
  server.handleClient();
}
