void setup(){
	pinMode(4, INPUT);
	pinMode(6, INPUT);
	pinMode(3, OUTPUT);
}

void loop(){
	if (digitalRead(4) == HIGH && digitalRead(6) == LOW)
		digitalWrite(3, LOW);
	if (digitalRead(6) == HIGH && digitalRead(4) == LOW)
		digitalWrite(3, HIGH);
	if (digitalRead(4) == HIGH && digitalRead(6) == HIGH){
		digitalWrite(3, HIGH);
		delay(500);
		digitalWrite(3, LOW);
		delay(500);
		digitalWrite(3, HIGH);
	}
}