void setup(){
    pinMode(2, INPUT)
    Serial.begin(9600);
}

void loop(){
    if(digitalRead(2))
        Serial.println("Button pressed!");
    else
        Serial.println("Button realesed!");
    delay(100);
}