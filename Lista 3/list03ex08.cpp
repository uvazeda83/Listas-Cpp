void setup(){
    pinMode(A0, INPUT);
    Serial.begin(9600);
}

void loop(){
    delay(1000);
    Serial.println(analogRead(A0));
}