// #include <Wire.h>
// #include <LiquidCrystal_I2C.h>
// #include <Arduino.h>
// #include <DHT.h>

// #define pinDHT 4
// #define tipoDHT DHT22

// DHT tungtungsahur(pinDHT, tipoDHT);

// LiquidCrystal_I2C lcd(0x27, 20, 4);

// void setup() {
//  Serial.begin(115200);

//  tungtungsahur.begin();

//  Serial.println("BrainHot");

//  lcd.init();
//  lcd.backlight();
//  lcd.setCursor(0, 0);
//  lcd.print("Pedroka");

// }
// void loop() {

//     float tempC = tungtungsahur.readTemperature();
//     float tempF = tungtungsahur.readTemperature(true);
//     float umi = tungtungsahur.readHumidity();

//     Serial.print("Temp em C:");
//     Serial.println(tempC);
//     Serial.print("Temp em F:");
//     Serial.println(tempF);
//     Serial.print("Umidade:");
//     Serial.println (umi);
//     Serial.println("------------------------");

//     delay(3000);

// }

// etapa 1, exiba no lcd os dados coletados no DHT

// #include <LiquidCrystal_I2C.h>
// #include <Arduino.h>
// #include <DHT.h>

// #define pinDHT 5
// #define tipoDHT DHT22

// DHT tungtungsahur(pinDHT, tipoDHT);

// LiquidCrystal_I2C lcd(0x27, 20, 4);

// void setup() {
//  Serial.begin(115200);

//  tungtungsahur.begin();

// }
// void loop() {

//   float tempC = tungtungsahur.readTemperature();
//     float tempF = tungtungsahur.readTemperature(true);
//     float umi = tungtungsahur.readHumidity();

// lcd.init();
//  lcd.backlight();
//  lcd.setCursor(0, 0);
//  lcd.print(tempC);
//  lcd.setCursor(0, 1);
//  lcd.print(tempF);
//  lcd.setCursor(0, 2);
//  lcd.print(umi);

// }

// estapa 2

// #include <LiquidCrystal_I2C.h>
// #include <Arduino.h>
// #include <DHT.h>

// #define pinDHT 5
// #define tipoDHT DHT22

// DHT tungtungsahur(pinDHT, tipoDHT);

// LiquidCrystal_I2C lcd(0x27, 20, 4);

// unsigned long tempoAnterior = 0;
// unsigned long intervalo = 3000;

// void setup() {
//  Serial.begin(115200);

//  tungtungsahur.begin();

// }
// void loop() {

//       unsigned long tempoAtual = millis();

//   if (tempoAtual - tempoAnterior >= intervalo)
//   {
//     tempoAnterior = tempoAtual;

//   float tempC = tungtungsahur.readTemperature();
//     float tempF = tungtungsahur.readTemperature(true);
//     float umi = tungtungsahur.readHumidity();

// lcd.init();
//  lcd.backlight();
//  lcd.setCursor(0, 0);
//  lcd.print(tempC);
//  lcd.setCursor(0, 1);
//  lcd.print(tempF);
//  lcd.setCursor(0, 2);
//  lcd.print(umi);

// }
// }

// Etapa 3

// #include <Arduino.h>
// #include <DHT.h>

// #include <LiquidCrystal_I2C.h>

// #define pinDHT 5
// #define tipoDHT DHT22
// float tempC_anterior = 0.0;
// float umidade_anterior = 0.0;

// unsigned long tempoAnterior = 0;
// unsigned long intervalo = 3000;

// LiquidCrystal_I2C lcd(0x27, 20, 4);

// DHT medidor(pinDHT, tipoDHT);
// void setup()
//  {
//     Serial.begin(115200);
//     medidor.begin();
//     Serial.println("teste de dht");
//     lcd.init();
//     lcd.backlight();
//     lcd.setCursor(0, 0);

//     lcd.print("CONTAGEM");

//     lcd.setCursor(0, 1);
//     lcd.print("temperatura: ");

//     lcd.setCursor(0, 2);
//     lcd.print("fahrenheit: ");

//     lcd.setCursor(0, 3);
//     lcd.print("umidade: ");

//  }
// void loop()
// {
//     unsigned long tempoAtual = millis();
//     medidor.readHumidity();
//     medidor.readTemperature();

//     float tempC = medidor.readTemperature();
//     float tempF = medidor.readTemperature(true);
//     float umidade = medidor.readHumidity();

//     if (tempoAtual - tempoAnterior >= intervalo && (tempC != tempC_anterior || umidade != umidade_anterior))
//     {
//         Serial.print("temp em C: ");
//         Serial.println(tempC);
//         Serial.print("temp em f: ");
//         Serial.println(tempF);
//         Serial.print("umidade: ");
//         Serial.println(umidade);
//         Serial.println("----------------");

//         lcd.setCursor(13, 1);
//         lcd.print(tempC);

//         lcd.setCursor(12, 2);
//         lcd.print(tempF);

//         lcd.setCursor(9, 3);
//         lcd.print(umidade);

//         tempoAnterior = tempoAtual;
//     }

//     tempC_anterior = tempC;
//     umidade_anterior = umidade;
// }

// etapa 1

// int pinLed = 15;
// int pinLed2 = 2;
// int pinLed3 = 4;

// int intensidade = 0;

// void setup() {

//     pinMode (pinLed, OUTPUT);
//      pinMode (pinLed2, OUTPUT);
//       pinMode (pinLed3, OUTPUT);
// // ledcAttachPin(Ledpin,0);
// }

// void loop() {
// analogWrite(pinLed, intensidade); //intencidade de 0 a 250
// intensidade += 5;
//     if (intensidade > 255)
//     {
//         intensidade=0;
//     }

// delay(250);
// }

// etapa 2 Led vai comecar em zero e vai amentando a intensidade de 5 em 5, mas quando a intensidade estiver em 255, ir descendo graudalmente de 5 em 5 para voltar a zero e assim recomeçar

// int pinLed = 15;
// int pinLed2 = 2;
// int pinLed3 = 4;
// bool aumentando = true;

// int intensidade = 0;

// void setup()
// {
// Serial.begin(115200);
//     pinMode(pinLed, OUTPUT);
//     pinMode(pinLed2, OUTPUT);
//     pinMode(pinLed3, OUTPUT);
//     // ledcAttachPin(Ledpin,0);
// }

// void loop()
// {
//     analogWrite(pinLed2, intensidade); // intencidade de 0 a 250
//     if (aumentando == true)
//     {
//         intensidade += 5;
//     }
//     else
//     {
//         intensidade -= 5;
//     }

    
//     if (intensidade > 255)
//     {
//         Serial.println("aqui");
//         aumentando = false;
//     }
//     if (intensidade <= 0)
//     {
//         aumentando = true;
//     }
//     Serial.println(intensidade);

//     delay(300);
// }


// unsigned long tempoAnterior = 0;
// unsigned long intervalo = 3000;

// int pinLed = 15;
// int pinLed2 = 2;
// int pinLed3 = 4;
// bool aumentando = true;

// int intensidade = 0;

// void setup()
// {
// Serial.begin(115200);
//     pinMode(pinLed, OUTPUT);
//     pinMode(pinLed2, OUTPUT);
//     pinMode(pinLed3, OUTPUT);
//     // ledcAttachPin(Ledpin,0);
// }

// void loop()
// {
    
//       unsigned long tempoAtual = millis();

//   if (tempoAtual - tempoAnterior >= intervalo)
//   {
//     tempoAnterior = tempoAtual;
//     analogWrite(pinLed2, intensidade); // intencidade de 0 a 250
//     if (aumentando == true)
//     {
//         intensidade += 5;
//     }
//     else
//     {
//         intensidade -= 5;
//     }

    
//     if (intensidade > 255)
//     {
//         Serial.println("aqui");
//         aumentando = false;
//     }
//     if (intensidade <= 0)
//     {
//         aumentando = true;
//     }
//     Serial.println(intensidade);

//     delay(300);





// int pinLed1 = 15;
// int pinLed2 = 2;
// int pinLed3 = 4;


// int intensidade = 0;
// int intensidade2 = 0;
// int intensidade3 = 0;

// int ledAtual = 0;


// bool incremento = true;
// bool incremento2 = true;
// bool incremento3 = true;


// unsigned long tempoAnterior = 0;
// unsigned long intervalo = 200;


// void setup()
// {
//   Serial.begin(115200);

//   pinMode(pinLed1, OUTPUT);
//   pinMode(pinLed2, OUTPUT);
//   pinMode(pinLed3, OUTPUT);
// }

// void loop()
// {
//   unsigned long tempoAtual = millis();

//   if (tempoAtual - tempoAnterior >= intervalo)
//   {
//     tempoAnterior = tempoAtual;

//     if(incremento){
//       intensidade = intensidade + 51;
//       if(intensidade >= 255){
//         intensidade = 255;
//       }
//     }

//     if(incremento2 && intensidade == 255){
//       intensidade2 = intensidade2 + 51;
//       if(intensidade2 >= 255){
//         intensidade2 = 255;
//       }
//     }

//     if(incremento3 && intensidade2 == 255){
//       intensidade3 = intensidade3 + 51;
//       if(intensidade3 >= 255){
//         intensidade3 = 255;

//         incremento = false;
//         incremento2 = false;
//         incremento3 = false;
//       }
//     }

//     if(!incremento){
//       intensidade = intensidade - 51;
//       if(intensidade <= 0){
//         intensidade = 0;
//       }
//     }

//     if(!incremento2 && intensidade == 0){
//       intensidade2 = intensidade2 - 51;
//       if(intensidade2 <= 0){
//         intensidade2 = 0;
//       }
//     }

//     if(!incremento3 && intensidade2 == 0){
//       intensidade3 = intensidade3 - 51;
//       if(intensidade3 <= 0){
//         intensidade3 = 0;

//         incremento = true;
//         incremento2 = true;
//         incremento3 = true;
//       }
//     }


//     Serial.println(intensidade);


//     analogWrite(pinLed1,intensidade);
//     analogWrite(pinLed2,intensidade2);
//     analogWrite(pinLed3,intensidade3);

//   }
// }










// #include <Arduino.h>
// #include <DHT.h>

// #include <LiquidCrystal_I2C.h>
// int pinLed = 19;
// int pinLed2 = 23;
// #define pinDHT 5
// #define tipoDHT DHT22
// float tempC_anterior = 0.0;
// float umidade_anterior = 0.0;

// unsigned long tempoAnterior = 0;
// unsigned long intervalo = 2000;

// LiquidCrystal_I2C lcd(0x27, 20, 4);

// DHT medidor(pinDHT, tipoDHT);
// void setup()
//  {
//     Serial.begin(115200);
//     medidor.begin();
//     Serial.println("teste de dht");
//     lcd.init();
//     lcd.backlight();
//     lcd.setCursor(0, 0);

//     lcd.print("CONTAGEM");

//     lcd.setCursor(0, 1);
//     lcd.print("temperatura: ");

//     lcd.setCursor(0, 2);
//     lcd.print("fahrenheit: ");

//     lcd.setCursor(0, 3);
//     lcd.print("umidade: ");


//     pinMode(pinLed, OUTPUT);
//     pinMode(pinLed2, OUTPUT);

//  }
// void loop()
// {
//     unsigned long tempoAtual = millis();

//     float tempC = medidor.readTemperature();
//     float tempF = medidor.readTemperature(true);
//     float umidade = medidor.readHumidity();

//     if (tempoAtual - tempoAnterior >= intervalo && (tempC != tempC_anterior || umidade != umidade_anterior))
//     {
//         Serial.print("temp em C: ");
//         Serial.println(tempC);
//         Serial.print("temp em f: ");
//         Serial.println(tempF);
//         Serial.print("umidade: ");
//         Serial.println(umidade);
//         Serial.println("----------------");

//         lcd.setCursor(13, 1);
//         lcd.print(tempC);

//         lcd.setCursor(12, 2);
//         lcd.print(tempF);

//         lcd.setCursor(9, 3);
//         lcd.print(umidade);

//         tempoAnterior = tempoAtual;
//     }

//     tempC_anterior = tempC;
//     umidade_anterior = umidade;


// if (tempC >= 29)
//     {
//       digitalWrite(pinLed, HIGH);
//     }
    
// if (umidade > 67)
// {
//   digitalWrite(pinLed2, HIGH);
// }


// }



// int intensidade = 0;

// #include <Arduino.h>
// #include <DHT.h>

// #include <LiquidCrystal_I2C.h>
// int pinLed = 19;
// int pinLed2 = 23;
// #define pinDHT 5
// #define tipoDHT DHT22
// float tempC_anterior = 0.0;
// float umidade_anterior = 0.0;



// unsigned long tempoAnterior = 0;
// unsigned long intervalo = 2000;

// LiquidCrystal_I2C lcd(0x27, 20, 4);

// DHT medidor(pinDHT, tipoDHT);
// void setup()
//  {
//     Serial.begin(115200);
//     medidor.begin();
//     Serial.println("teste de dht");
//     lcd.init();
//     lcd.backlight();
//     lcd.setCursor(0, 0);

//     lcd.print("CONTAGEM");

//     lcd.setCursor(0, 1);
//     lcd.print("temperatura: ");

//     lcd.setCursor(0, 2);
//     lcd.print("fahrenheit: ");

//     lcd.setCursor(0, 3);
//     lcd.print("umidade: ");


//     pinMode(pinLed, OUTPUT);
//     pinMode(pinLed2, OUTPUT);

//  }
// void loop()
// {
//     unsigned long tempoAtual = millis();

//     float tempC = medidor.readTemperature();
//     float tempF = medidor.readTemperature(true);
//     float umidade = medidor.readHumidity();

//     if (tempoAtual - tempoAnterior >= intervalo && (tempC != tempC_anterior || umidade != umidade_anterior))
//     {
//         Serial.print("temp em C: ");
//         Serial.println(tempC);
//         Serial.print("temp em f: ");
//         Serial.println(tempF);
//         Serial.print("umidade: ");
//         Serial.println(umidade);
//         Serial.println("----------------");

//         lcd.setCursor(13, 1);
//         lcd.print(tempC);

//         lcd.setCursor(12, 2);
//         lcd.print(tempF);

//         lcd.setCursor(9, 3);
//         lcd.print(umidade);

//         tempoAnterior = tempoAtual;
//     }

//     tempC_anterior = tempC;
//     umidade_anterior = umidade;


    
      

//   if (tempoAtual - tempoAnterior >= intervalo)
//   {
//     tempoAnterior = tempoAtual;
//     analogWrite(pinLed2, intensidade); // intencidade de 0 a 250
//     if (tempC <= 25)
//     {
//         intensidade == 51;
//     }
//    if (tempC == 26)
//    {
//     intensidade == 102;
//    }

//    if (tempC == 27)
//    {
//     intensidade == 153;
//    }

//    if (tempC == 28)
//    {
//     intensidade = 204;
//    }
   
//    if (tempC >=29)
//    {
//     intensidade = 255;
//    }
   
//    delay(1000);
    
    
//   }
// }


#include <Arduino.h>
#include <DHT.h>

#include <LiquidCrystal_I2C.h>
int pinLed = 19;
int pinLed2 = 23;
#define pinDHT 5
#define tipoDHT DHT22
float tempC_anterior = 0.0;
float umidade_anterior = 0.0;



unsigned long tempoAnterior = 0;
unsigned long intervalo = 2000;

LiquidCrystal_I2C lcd(0x27, 20, 4);

DHT medidor(pinDHT, tipoDHT);


int valorinicial = 26;

void setup(){





}


void loop(){


  
}