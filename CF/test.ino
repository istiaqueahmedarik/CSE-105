// use tinygpsplus library
#include <TinyGPS++.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(3, 4); // RX, TX
TinyGPSPlus gps;

void setup()
{
    Serial.begin(9600);
    mySerial.begin(9600);
}

void loop()
{
    while (mySerial.available() > 0)
        if (gps.encode(mySerial.read()))
            displayInfo();
}

void displayInfo()
{
    Serial.print("Location: ");
    if (gps.location.isValid())
    {
        Serial.print(gps.location.lat(), 6);
        Serial.print(",");
        Serial.print(gps.location.lng(), 6);
    }
    else
    {
        Serial.print("INVALID");
    }
    Serial.println();
}
