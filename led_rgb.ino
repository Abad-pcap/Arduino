const int rojopuerto = A0;
const int azulpuerto = A1;
const int verdepuerto = A2;

const int rojoled = 9;
const int azulled = 10;
const int verdeled = 11;

void setup()
{
    pinMode(rojoled,OUTPUT);
    pinMode(azulled,OUTPUT);
    pinMode(verdeled,OUTPUT);
}

void loop()
{
    int rojoValue = analogRead(rojopuerto);
    int verdeValue = analogRead(verdepuerto);
    int azulValue = analogRead(azulpuerto);    

    rojoValue = map(rojoValue, 0, 1023, 0, 255);
    verdeValue = map (verdeValue, 0, 1023, 0, 255); 
    azulValue = map(azulValue, 0, 1023, 0, 255);

    analogWrite(rojoled, rojoValue);
    analogWrite(verdeled, verdeValue);
    analogWrite(azulled, azulValue);

    delay(100);
}