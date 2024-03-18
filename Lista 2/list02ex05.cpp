float time = 5000;

void setup(){
	for (int i=3; i<=5; i++)
		pinMode(i, OUTPUT);
  	Serial.begin(9600);
}

void loop(){
	while (time >= 5) {
		for (int i=5; i>=3; i--) {
			digitalWrite(i, HIGH);
			delay(time);
			digitalWrite(i, LOW);
		}
		time *= 0.8;
   		Serial.println(time);
	}
}