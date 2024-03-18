int bt, i = 2;

void setup(){
	for (int i=3; i<=5; i++)
		pinMode(i, OUTPUT);
	pinMode(2, INPUT);
}

void loop(){
	bt = digitalRead(2);
	if (bt == HIGH) {
		digitalWrite(i, LOW);
		i++;
		if (i > 5)
			i = 3;
		digitalWrite(i, HIGH);
      	delay(200);
	}
}