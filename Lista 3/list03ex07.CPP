void setup() {
    pinMode(A0, INPUT);
    pinMode(9, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    analogWrite(9, map(analogRead(A0), 1, 100, 0, 255));
    Serial.println(Serial.read(A0));
}