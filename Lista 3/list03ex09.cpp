void setup(){
    pinMode(A0, INPUT);
    pinMode(9, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    Serial.println(analogRead(A0));
    analogWrite(9, map(analogRead(A0, 1, 100, 0, 255)));
    delay(100);
}
