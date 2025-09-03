<<<<<<< HEAD
//핀 번호 변수 선언
#define LED_PIN 13       
#define LDR_PIN 0 
#define THRESHOLD 3000 

//설정
void setup() {
  pinMode(LED_PIN, OUTPUT);   
  Serial.begin(115200);       
}

//루프 구간
void loop() {
  int sensorValue = analogRead(LDR_PIN); 
  Serial.println(sensorValue);          

  if(sensorValue > THRESHOLD) {         
    digitalWrite(LED_PIN, HIGH);
  } else {                              
=======
#define LED_PIN 13       // LED 연결 핀
#define LDR_PIN 0      // LDR 아날로그 입력 핀 (ESP32는 34번 등 아날로그 입력 가능)
#define THRESHOLD 3000  // LED 켜짐/꺼짐 기준값 (0~4095)

void setup() {
  pinMode(LED_PIN, OUTPUT);   // LED 핀 출력으로 설정
  Serial.begin(115200);       // 조도 센서 값 확인용
}

void loop() {
  int sensorValue = analogRead(LDR_PIN);  // 조도 센서 값 읽기
  Serial.println(sensorValue);            // 센서 값 출력 (모니터에서 확인 가능)

  if(sensorValue > THRESHOLD) {          // 조도가 높으면 LED ON
    digitalWrite(LED_PIN, HIGH);
  } else {                               // 조도가 낮으면 LED OFF
>>>>>>> cc9a574 (first commit)
    digitalWrite(LED_PIN, LOW);
  }

  delay(200);  // 0.2초마다 측정
<<<<<<< HEAD
}
=======
}
>>>>>>> cc9a574 (first commit)
