//Programa : Controle 2 motores DC usando Ponte H L298N
//Autor : FILIPEFLOP
 
//Definicoes pinos Arduino ligados a entrada da Ponte H
int ENA = 5;
int ENB = 6;
int IN1 = 7;
int IN2 = 8;
int IN3 = 9;
int IN4 = 10;

//sensores
int pino_sensor1 = A0;
int pino_sensor2 = A1;
int pino_sensor3 = A2;
int pino_sensor4 = A3;
int pino_sensor5 = A4;
int pino_sensor6 = A5;
int pino_sensor7 = A6;

//verificadores de estado de sensor
int estado_sensor1;
int estado_sensor2;
int estado_sensor3;
int estado_sensor4;
int estado_sensor5;
int estado_sensor6;
int estado_sensor7;

int velocidade = 70;
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

 digitalWrite(ENA, HIGH);
 digitalWrite(ENB, HIGH);

  pinMode(pino_sensor1, INPUT_PULLUP);
  pinMode(pino_sensor2, INPUT_PULLUP);
  pinMode(pino_sensor3, INPUT_PULLUP);
  pinMode(pino_sensor4, INPUT_PULLUP);
  pinMode(pino_sensor5, INPUT_PULLUP);
  pinMode(pino_sensor6, INPUT_PULLUP);
  pinMode(pino_sensor7, INPUT_PULLUP);
}

  
void loop()
{
  if(analogRead(pino_sensor1) < 900 || analogRead(pino_sensor2) < 900){
      Serial.println("Motor Ligado");
      analogWrite(ENB,velocidade);
      digitalWrite(IN3, LOW);
      digitalWrite(IN4, HIGH);
      analogWrite(ENA,velocidade);
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, LOW);
      delay(1000);
   }
   else{
      Serial.println("Motor Desligado");
      digitalWrite(IN1, HIGH);
      digitalWrite(IN2, HIGH);
      digitalWrite(IN3, HIGH);
      digitalWrite(IN4, HIGH);
   }
 //Gira o Motor A no sentido horario

 delay(10);// Serial.println("Motor Parado");
} 
