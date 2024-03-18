int bt;

void setup(){
	pinMode(4, OUTPUT);
	pinMode(6, INPUT);
}

void loop(){
	bt = digitalRead(6);
	if (bt == HIGH)
		digitalWrite(4, HIGH);
	else
		digitalWrite(4, LOW);
}