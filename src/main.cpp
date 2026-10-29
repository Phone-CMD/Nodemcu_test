#include <Arduino.h>

// บอร์ด NodeMCU ESP8266 ไฟ LED บนบอร์ดมักต่ออยู่ที่ขา D4 (GPIO2)
#define LED_PIN 2

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  delay(100); // รอพอร์ต Serial เริ่มต้นทำงาน
  Serial.println();
  Serial.println("==========================================");
  Serial.println(" NodeMCU ESP8266: Double Blink Pattern");
  Serial.println("==========================================");
}

void loop() {
  // --- กะพริบครั้งที่ 1 ---
  digitalWrite(LED_PIN, LOW);   // ไฟติด (Active LOW)
  Serial.println("[💡] ไฟเปิด ครั้งที่ 1");
  delay(250);

  digitalWrite(LED_PIN, HIGH);  // ไฟดับ
  Serial.println("[⚫] ไฟปิด");
  delay(250);

  // --- กะพริบครั้งที่ 2 ---
  digitalWrite(LED_PIN, LOW);   // ไฟติด (Active LOW)
  Serial.println("[💡] ไฟเปิด ครั้งที่ 2");
  delay(250);

  digitalWrite(LED_PIN, HIGH);  // ไฟดับ
  Serial.println("[⚫] ไฟดับยาว (พักรอบ)");
  delay(1500); // ดับยาว 1.5 วินาที ก่อนเริ่มรอบใหม่
}
