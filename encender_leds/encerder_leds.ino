int led1 = 50;
int led2 = 51; 
int option;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //sirve para inicializar la comunicación serial
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()> 0){ //nos permite obtener el numero de caracteres disponible para leer dede el puerto serie  
  option = Serial.read(); //leer los datos recibidos del puerto serie
  Serial.println(option);  
    if(option == 'P'){ // P = 80 (en codigo ASCI)
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);  
    }  
    if(option == 'N'){ // N = 78 (en codigo ASCI)
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
    }
  }
} 

