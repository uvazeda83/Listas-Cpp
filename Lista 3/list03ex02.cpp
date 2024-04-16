void setup(){
    pinMode(9, OUTPUT);
    Serial.begin(9600);
}

void loop(){
    for(int i=0;i<256;i++){
        analogWrite(9, i);
        Serial.println("Rising!");
        delay(10);
    }
    for(int i=255;i>=0;i--){
        analogWrite(9, i);
        Serial.println("Lowering!");
        delay(10);
    }
}