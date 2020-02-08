
const int SensorLinha01 = A0; //PINO ANALÓGICO UTILIZADO PELO SENSOR
const int SensorLinha02 = A1; 
const int SensorLinha03 = A2; 
const int SensorLinha04 = A3; 
const int SensorLinha05 = A4; 
const int SensorLinha06 = A5; 
const int SensorLinha07 = A6;

               
void setup(){
  Serial.begin(115200); //INICIALIZAÇÃO DA SERIAL
  pinMode(SensorLinha01, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(SensorLinha02, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(SensorLinha03, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(SensorLinha04, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(SensorLinha05, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(SensorLinha06, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(SensorLinha07, INPUT); //DEFINE O PINO COMO ENTRADA
}
 
void loop(){
  TesteSensorLinha(SensorLinha01);
  TesteSensorLinha(SensorLinha02);
  TesteSensorLinha(SensorLinha03);
  TesteSensorLinha(SensorLinha04);
  TesteSensorLinha(SensorLinha05);
  TesteSensorLinha(SensorLinha06);
  TesteSensorLinha(SensorLinha07);
  Serial.println("-----------------------------------------------");
  delay(2000);
 }
void TesteSensorLinha(int SensorLinha){
   if(analogRead(SensorLinha) < 800){ //SE A LEITURA DO PINO FOR MENOR QUE 1000 BITS, FAZ
    Serial.println("Sensor de Linha: Ativado"); //IMPRIME O TEXTO NA SERIAL
  }else{ //SENÃO, FAZ
    Serial.println("Sensor de Linha: Desativado"); //IMPRIME O TEXTO NA SERIAL
  }
}
