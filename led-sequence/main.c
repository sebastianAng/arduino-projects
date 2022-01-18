#define AMARILLO 13
#define AZUL 12
#define ROJO 8

void setup() {
  pinMode(AMARILLO, OUTPUT); 
}

void loop() {
   digitalWrite(AMARILLO, HIGH); // se prende

   delay(1000); // se esperan 1000 milisegundos      
   
   digitalWrite(AZUL, HIGH); // se prende

   delay(1000); // se esperan 1000 milisegundos

   digitalWrite(ROJO, HIGH); // se prende

   delay(1000) ; // se esperan 1000 milisegundos                                                      
   digitalWrite(AMARILLO, LOW); // se apaga
   digitalWrite(AZUL, LOW); // se apage
   digitalWrite(ROJO, LOW); // se apaga
   delay(1000); // se espera 1 seguendo
}
