int valor_sensor = 0;
int led_azul = 13;
int led_amarillo = 12;
int led_verde = 8;

void setup() {
  pinMode(led_azul, OUTPUT);
  pinMode(led_amarillo, OUTPUT); 
  pinMode(led_verde, OUTPUT);
  Serial.begin(9600);    // inicia el puerto Serial
  pinMode(A0, INPUT);     // Pin A0 configurado como entrada
  pinMode(A1, OUTPUT);     // Pin A1 configurado como salida
  digitalWrite(A1, HIGH);     // Pin A1 en alto

}

void loop() {

  valor_sensor = analogRead(A0);     // Lectura del pin A0
  Serial.println(valor_sensor);

  delay(500);
  
  if (valor_sensor >= 400) {
    digitalWrite(led_azul, HIGH);
    digitalWrite(led_amarillo, LOW);
  } else {
    digitalWrite(led_azul, LOW);
    digitalWrite(led_amarillo, HIGH);
  }
  if (valor_sensor <= 100) {
    digitalWrite(led_verde, HIGH);
  } else {
    digitalWrite(led_verde,LOW);
  
  }
}