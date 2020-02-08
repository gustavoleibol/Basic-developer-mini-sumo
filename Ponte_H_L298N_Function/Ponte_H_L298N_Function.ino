//Programa : Controle 2 motores DC usando Ponte H L298N
//Autor : FILIPEFLOP
 
//Definicoes pinos Arduino ligados a entrada da Ponte H
int IN1 = 8;
int IN2 = 9;
int IN3 = 10;
int IN4 = 11;

int rotacao;

void setup()
{
  //Define os pinos como saida
 pinMode(IN1, OUTPUT);
 pinMode(IN2, OUTPUT);
 pinMode(IN3, OUTPUT);
 pinMode(IN4, OUTPUT);
}
  
void loop()
{
  rotacao = 1;
  LigarMotores(rotacao, IN1, IN2);
  LigarMotores(rotacao, IN3, IN4);
  delay(3000);
  PararMotores(IN1, IN2);
  PararMotores(IN3, IN4);
  delay(3000);
  rotacao = 2;
  LigarMotores(rotacao, IN1, IN2);
  LigarMotores(rotacao, IN3, IN4);
  delay(3000);
  PararMotores(IN1, IN2);
  PararMotores(IN3, IN4);
  delay(3000);
}

void LigarMotores(int sentido,int In1, int In2){
  if(sentido == 1){
     digitalWrite(In1, HIGH);
     digitalWrite(In2, LOW);
  }
  if(sentido == 2){
     digitalWrite(In1, LOW);
     digitalWrite(In2, HIGH);
  }
}

void PararMotores(int In1, int In2){
     digitalWrite(In1, LOW);
     digitalWrite(In2, LOW);
}
