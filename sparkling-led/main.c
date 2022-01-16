void setup() {
  pinMode(13, OUTPUT); 
}

void loop() {

   digitalWrite(13, HIGH); // se prende

   delay(1000); // se esperan 1000 milisegundos         

   digitalWrite(13, LOW); // se apaga

   delay(1000); // se espera 1 seguendo

 }
