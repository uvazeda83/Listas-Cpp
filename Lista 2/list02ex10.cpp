void setup(){
	pinMode(4, INPUT);
	pinMode(6, INPUT);
	pinMode(3, OUTPUT);
}

void loop(){
	digitalWrite(3, LOW);
	if (digitalRead(6) != digitalRead(4))
		digitalWrite(3, HIGH);
}