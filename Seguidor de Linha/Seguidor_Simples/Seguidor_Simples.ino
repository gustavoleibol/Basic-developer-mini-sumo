
const int Pot = A7;
 
const int ENA = 5; 
const int ENB = 6;
const int IN1 = 7; 
const int IN2 = 8; 
const int IN3 = 9; 
const int IN4 = 10;

const int pino_sensor1 = A0; //PINO ANALÓGICO UTILIZADO PELO SENSOR
const int pino_sensor2 = A1; 
const int pino_sensor3 = A2; 
const int pino_sensor4 = A3; 
const int pino_sensor5 = A4; 
const int pino_sensor6 = A5; 
const int pino_sensor7 = A6; 

//verificadores de estado de sensor
int estado_sensor1;
int estado_sensor2;
int estado_sensor3;
int estado_sensor4;
int estado_sensor5;
int estado_sensor6;
int estado_sensor7;

int valorPot;

void setup()
{
  Serial.begin(115200);
  //Define os pinos como saida
 pinMode(ENA, OUTPUT);  
 pinMode(ENB, OUTPUT);
 pinMode(IN1, OUTPUT);  
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);  
 pinMode(IN4, OUTPUT);
 
 pinMode(pino_sensor1, INPUT); //DEFINE O PINO COMO ENTRADA
 pinMode(pino_sensor2, INPUT); //DEFINE O PINO COMO ENTRADA
 pinMode(pino_sensor3, INPUT); //DEFINE O PINO COMO ENTRADA
 pinMode(pino_sensor4, INPUT); //DEFINE O PINO COMO ENTRADA
 pinMode(pino_sensor5, INPUT); //DEFINE O PINO COMO ENTRADA
 pinMode(pino_sensor6, INPUT); //DEFINE O PINO COMO ENTRADA
 pinMode(pino_sensor7, INPUT); //DEFINE O PINO COMO ENTRADA
 pinMode(Pot, INPUT); //DEFINE O PINO COMO ENTRADA
}

void loop() {
  valorPot = analogRead(Pot);
  estado_sensor1 = verificaSensores(pino_sensor1, valorPot);
  estado_sensor2 = verificaSensores(pino_sensor2, valorPot);
  estado_sensor3 = verificaSensores(pino_sensor3, valorPot);
  estado_sensor4 = verificaSensores(pino_sensor4, valorPot);
  estado_sensor5 = verificaSensores(pino_sensor5, valorPot);
  estado_sensor6 = verificaSensores(pino_sensor6, valorPot);
  estado_sensor7 = verificaSensores(pino_sensor7, valorPot);
}

﻿void LigarMotores(int EN, int velocidade, int rotacao, int In1, int In2){//rotacao = 1 eh para frente, rotacao = 2 eh para trás  
  if(rotacao == 1){//sentido horario
   analogWrite(EN, velocidade); 
   digitalWrite(In1, HIGH);
   digitalWrite(In2, LOW);
  }
  if(rotacao == 2){//sentido anti-horario
     analogWrite(EN, velocidade); 
   digitalWrite(In2, HIGH);
   digitalWrite(In1, LOW);
  }
}

void PararMotores(int In1, int In2){
     digitalWrite(In1, LOW);
     digitalWrite(In2, LOW);
}

int verificaSensores(int pino, int valorSensores)
{      
    if(analogRead(pino) < valorSensores) {
      return 1; 
    }
    else {
      return 0;
    }     
}
