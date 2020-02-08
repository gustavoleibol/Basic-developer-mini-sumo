

const int pot = A7; //Pino de entrada do potenciometro
int valor = 0; //Valores do potenciômetro
const int button = 4; //Porta Digital do Botão
int estado = 0; //Estado do botão

void setup() {
  Serial.begin(115200);
  pinMode(button,INPUT);
}

void loop() {
  valor = analogRead(pot);
  estado = digitalRead(button);
  Serial.print("Valor da Tensao: ");
  Serial.print(valor);
  Serial.print(" Estado do Botão: ");
  Serial.println(estado);
  delay(50);
}
