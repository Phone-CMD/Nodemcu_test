#include <Arduino.h>

// บอร์ด NodeMCU ESP8266 ไฟ LED บนบอร์ดมักต่ออยู่ที่ขา D4 (GPIO2)
#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  delay(100); // รอพอร์ต Serial เริ่มต้นทำงาน
  Serial.println();
  Serial.println("=============================");
  Serial.println(" NodeMCU ESP8266 System Ready");
  Serial.println("=============================");
}

void loop() {
  digitalWrite(LED_PIN, LOW);   // ไฟติด (Active LOW)
  Serial.println("[💡] ไฟเปิด  | Status: ON");
  delay(10000); // หน่วงเวลา 10 วินาที

  digitalWrite(LED_PIN, HIGH);  // ไฟดับ
  Serial.println("[⚫] ไฟปิด   | Status: OFF");
  delay(10000); // หน่วงเวลา 10 วินาที
}
