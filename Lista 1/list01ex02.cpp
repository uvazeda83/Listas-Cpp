void setup(){
	for (int i=3; i<=5; i++)
		pinMode(i, OUTPUT);
}

void loop(){
	for (int i=5; i>=3; i--) {
		digitalWrite(i, HIGH);
		delay(3000);
		digitalWrite(i, LOW);
	}
}