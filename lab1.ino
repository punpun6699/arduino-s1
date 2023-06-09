void setup() {
  // put your setup code here, to run once:
pinMode(16,OUTPUT);
digitalWrite(16,0);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
digitalWrite(16,1);
Serial.println("on");
delay(1000);
digitalWrite(16,0);
Serial.println("off");
delay(1000);

}
