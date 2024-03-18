int i = 1;

void setup(){
	pinMode(4, OUTPUT);
	pinMode(6, INPUT);
  	Serial.begin(9600);
}

void loop(){
	if (digitalRead(6) == HIGH)
		i++;
	digitalWrite(4, HIGH);
	delay((1000/i)/2);
	digitalWrite(4, LOW);
	delay((1000/i)/2);
  	Serial.println(i);
}