int bt;
int i;

void setup(){
	pinMode(3, OUTPUT);
	pinMode(4, INPUT);
}

void loop(){
  bt = digitalRead(4);
	if (bt == HIGH){
		for (i=0; i<=255; i++){
			analogWrite(3, i);
			delay(10);
		}
		for (i=0; i<=255; i--){
			analogWrite(3, i);
			delay(10);
		}
	} else {
		digitalWrite(4, LOW);
	}
}