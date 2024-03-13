#include <WiFi.h>
#include <ThingSpeak.h>
#define ADC_VRF_mv 3300.0
#define ADC_RESOLUCION 4069.0
#define LM35 34
#define LED_PIN 2

unsigned long channelID = 2449131;
const char* WriteAPIKey = "CTF85OE20JF7G0GM";
const char* asid = "INFINITUMCD9C_2.4";
const char* password = "6RFZeMN3q9";
int valorAnalogo = 0;
float miliVolt;
float TempC;


WiFiClient cliente;
unsigned long previousMillis = 0;
unsigned long ledPreviousMillis = 0;
const long interval = 1000; // Intervalo de 1 segundo
const long ledInterval = 500;

void setup() {
  Serial.begin(115200);
  pinMode(LM35, INPUT);
  pinMode(LED_PIN, OUTPUT);

  WiFi.begin(asid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("Se está conectando al WiFi");
  ThingSpeak.begin(cliente);
  delay(5000);
}

void loop() {

    
    valorAnalogo = analogRead(LM35);
    Serial.println(valorAnalogo);
    miliVolt = valorAnalogo * (ADC_VRF_mv / ADC_RESOLUCION);
    TempC = miliVolt / 10;

    Serial.println("Temperatura en C: ");
    Serial.println(TempC);
    
    delay(10);
    
    ThingSpeak.setField(1, TempC);

    
    

    ThingSpeak.writeFields(channelID, WriteAPIKey);
    Serial.print("Datos enviados a TingSpeak");

    for (int i = 0; i < 10; i++) { 
    digitalWrite(LED_PIN, HIGH); 
    delay(500); 
    digitalWrite(LED_PIN, LOW); 
    delay(500); 
    }
  }
