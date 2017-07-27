


// Using http://slides.justen.eng.br/python-e-arduino as refference

void setup() {
    pinMode(13, OUTPUT);
    Serial.begin(9600);



}

void loop() {
    if (Serial.available()) {
        char serialListener = Serial.read();
        if (serialListener == 'H') {
            digitalWrite(13, HIGH);
        }
        else if (serialListener == 'L') {
            digitalWrite(13, LOW);
        }
    }
}
