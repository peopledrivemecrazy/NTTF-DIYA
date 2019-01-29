/*
    This sketch trys to Connect to the best AP based on a given list

*/

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>

ESP8266WiFiMulti wifiMulti;

void setup() {
  Serial.begin(115200);
  delay(10);

  WiFi.mode(WIFI_STA);
  wifiMulti.addAP("ssid_from_AP_1", "your_password_for_AP_1");
  wifiMulti.addAP("ssid_from_AP_2", "your_password_for_AP_2");
  wifiMulti.addAP("ssid_from_AP_3", "your_password_for_AP_3");

  Serial.println("");
  connectwifi();
}
void connectwifi() {
  if (WiFi.status() != WL_CONNECTED) {
    wifiMulti.run();
    delay(500);
  }
  if (wifiMulti.run() == WL_CONNECTED) {
    Serial.println("WiFi  connected!");
    delay(1000);
    Serial.print("Connected AP: ");
    Serial.println(WiFi.SSID());
    Serial.print("IP: ");
    Serial.println(WiFi.localIP());

  }


}

void loop() {
  if (WiFi.status() != WL_CONNECTED) {
    Serial.println("Connecting to AP....");
    connectwifi();
  }
}
