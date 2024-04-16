int sens;

void loop(){
    pinMode(2, OUTPUT);
    pinMode(A0, INPUT);
    Serial.begin(9600);
}

void setup(){
    sens = map(analogRead(A0, 1, 100, 0, 100));
    if(sens >= 25 && sens <= 75)
        Serial.println(sens);
    else
        digitalWrite(2, 1);
        Serial.println(sens);
}