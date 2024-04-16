void setup(){
    pinMode(13, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    digitalWrite(13, 1);
    Serial.println("On");
    delay(1000);
    digitalWrite(13, 0);
    Serial.println("Off");
    delay(1000);
}