
#define USE_ARDUINO_INTERRUPTS true
#include <PulseSensorPlayground.h>
#include <LiquidCrystal_I2C.h>
#include <SPI.h>
#include <Wire.h>
#include <Bonezegei_DHT11.h>

// LCD settings
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Sensor settings
const int Pump1 = 2;
const int Pump2 = 3;
const int Pump_Feature = 4;
const int RELAY_lamb = 5;
const int Buzzer = 6;
const int Inf_Red = A0;

// Sensor objects
PulseSensorPlayground pulseSensor;
Bonezegei_DHT11 dht(DHT_PIN);

void setup() {
    Serial.begin(115200);

    // Initialize LCD
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 1);
    lcd.print("HemoDialysis");

    // Set up Buzzer
    pinMode(Buzzer, OUTPUT);
    digitalWrite(Buzzer, LOW);

    // Set up pumbs
    pinMode(Pump1, OUTPUT);
    digitalWrite(Pump1, HIGH);
    
    pinMode(Pump2, OUTPUT);
    digitalWrite(Pump2, HIGH);
    
    // Set up relay feature pumb
    pinMode(Pump_Feature, OUTPUT);
    digitalWrite(Pump_Feature, LOW);

    // Set up infra red
    pinMode(Inf_Red, INPUT);

    // Start DHT11 sensor
    dht.begin();
}

void loop() {
    float IR_Read = analogRead(Inf_Red);

    // calculate volate and distance
    float Voltage = IR_Read * (5.0/1023.0);
    if(Voltage < 0.12){
    digitalWrite(Buzzer , HIGH);}
    else {
    digitalWrite(Buzzer , LOW);}


    // Read temperature and humidity from DHT11
    if (dht.getData()) {                         
        float tempC = dht.getTemperature();      
        int humidity = dht.getHumidity();        

        Serial.print("Temperature: ");
        Serial.print(tempC);
        Serial.print("°C ");
        Serial.print("Humidity: ");
        Serial.print(humidity);
        Serial.print("%");

        lcd.setCursor(0, 1);
        lcd.print("T:");
        lcd.print(tempC);
        lcd.print("C");

        if (tempC < 34.5 ) {
            digitalWrite(Pump_Feature, HIGH)
        } else {
            digitalWrite(Pump_Feature, LOW);
        }
    }
    delay(500);
}
