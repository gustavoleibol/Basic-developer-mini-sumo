//Programa : Controle 2 motores DC usando Ponte H L298N
 
//Definicoes pinos Arduino ligados a entrada da Ponte H
int ENA = 5;
int ENB = 6;
int IN1 = 7;
int IN2 = 8;
int IN3 = 9;
int IN4 = 10;

  
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
}
  
void loop()
{
 //Gira o Motor A no sentido horario
 Serial.println("Motor Ligado");
 analogWrite(ENB,150);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, LOW);
 analogWrite(ENA,150);
 digitalWrite(IN1, LOW);
 digitalWrite(IN2, HIGH);
 delay(5000);
 //Para o motor A
 Serial.println("Motor Parado");
 digitalWrite(IN1, HIGH);
 digitalWrite(IN2, HIGH);
 digitalWrite(IN3, HIGH);
 digitalWrite(IN4, HIGH);
 delay(5000);
} 
