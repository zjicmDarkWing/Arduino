//��Ŀһ ���� LED ��˸
     /*
������LEDÿ��һ�뽻������һ��
     */    
int ledPin = 10;
void setup() {
  pinMode(ledPin, OUTPUT);
}
void loop() {
  digitalWrite(ledPin,HIGH);
  delay(1000);
  digitalWrite(ledPin,LOW);
  delay(1000);
}
