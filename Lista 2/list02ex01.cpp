int bt;
int pos = -1;
int i;

void setup(){
	for (i=3; i<=9; i++)
		pinMode(i, OUTPUT);
	pinMode(2, INPUT);
}

void loop(){
	bt = digitalRead(2);
  	if (bt == HIGH)
		pos++;
  	if (pos >= 0) {
		switch (pos) {
			case 0:
				for (i=3;i<=9;i++){
					if (i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8)
						digitalWrite(i, HIGH);
				}
				break;
			case 1:
				for (i=3;i<=9;i++){
					if (i == 4 || i == 5)
						digitalWrite(i, HIGH);
				}
				break;
			case 2:
				for (i=3;i<=9;i++){
					if (i == 3 || i == 4 || i == 6 || i == 7 || i == 9)
						digitalWrite(i, HIGH);
				}
				break;
			case 3:
				for (i=3;i<=9;i++){
					if (i == 3 || i == 4 || i == 5 || i == 6 || i == 9)
						digitalWrite(i, HIGH);
				}
				break;
			case 4:
				for (i=3;i<=9;i++){
					if (i == 4 || i == 5 || i == 8 || i == 9)
						digitalWrite(i, HIGH);
				}
				break;
			case 5:
				for (i=3;i<=9;i++){
					if (i == 3 || i == 5 || i == 6 || i == 8 || i == 9)
						digitalWrite(i, HIGH);
				}
				break;
			case 6:
				for (i=3;i<=9;i++){
					if (i == 3 || i == 5 || i == 6 || i == 7 || i == 8 || i == 9)
						digitalWrite(i, HIGH);
				}
				break;
			case 7:
				for (i=3;i<=9;i++){
					if (i == 3 || i == 4 || i == 5)
						digitalWrite(i, HIGH);
				}
				break;
			case 8:
				for (i=3;i<=9;i++)
					digitalWrite(i, HIGH);
				break;
			case 9:
				for (i=3;i<=9;i++){
					if (i == 3 || i == 4 || i == 5 || i == 8 || i ==9)
						digitalWrite(i, HIGH);
				}
				break;
	
	}
	delay(1000);
	for (i=3; i<=9; i++)
		digitalWrite(i, LOW);
	pos++;
	}
}