void setup(){
    pinMode(6, INPUT);
    pinMode(7, INPUT);
    for(int i=8;i<=10;i++)
        pindMode(i, OUTPUT);
    Serial.begin(9600);
}
void loop(){
    if(!digitalRead(6) && !digitalRead(7))
        for(int i=8;i<=10;i++)
            digitalWrite(i, 0);
    if(digitalRead(6) || digitalRead(7)){
        digitalWrite(8, 1);
        Serial.println("OR");
    }
    if(digitalRead(6) && digitalRead(7)){
        digitalWrite(9, 1);
        Serial.println("AND");
    }
    if(digitalRead(6) || digitalRead(7)) &&
        (digitalRead(6) != digitalRead(7)){
        digitalWrite(10, 1);
        digitalWrite(8, 0);
        Serial.println("XOR");
        }
}