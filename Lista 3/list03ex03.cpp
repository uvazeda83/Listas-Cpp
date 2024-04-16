void setup(){
    for(int i=8;i<=10;i++)
        pinMode(i, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    if(Serial.read() == 'r' || Serial.read() == 'R'){
        digitalWrite(8,!digitalRead(8));
        Serial.println("Red!");
    }
    if(Serial.read() == 'g' || Serial.read() == 'G'){
        digitalWrite(9,!digitalRead(9));
        Serial.println("Green!");
    }
    if(Serial.read() == 'y' || Serial.read() == 'Y'){
        digitalWrite(10,!digitalRead(10));
        Serial.println("Yellow!");
    }
}