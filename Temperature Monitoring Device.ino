#include <DHT.h>

#define DHTPIN 2     // pin data sensor suhu
#define DHTTYPE DHT22   // jenis sensor suhu
#define heaterPin 13   // pin untuk modul relay
#define setpoint 25   // suhu ambang batas

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  pinMode(heaterPin, OUTPUT);
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  float temperature = dht.readTemperature();

  if (temperature < setpoint) {
    digitalWrite(heaterPin, HIGH);
  } else {
    digitalWrite(heaterPin, LOW);
  }

  Serial.print("Suhu: ");
  Serial.print(temperature);
  Serial.println(" °C");

  delay(1000);
}
