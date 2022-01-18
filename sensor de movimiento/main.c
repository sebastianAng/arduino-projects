int valor_sensor = 0;

void setup() {

  Serial.begin(9600);    // inicia el puerto Serial

  pinMode(A0, INPUT);     // Pin A0 configurado como entrada

  pinMode(A1, OUTPUT);     // Pin A1 configurado como salida

  digitalWrite(A1, HIGH);     // Pin A1 en alto

}

void loop() {

  valor_sensor = analogRead(A0);     // Lectura del pin A0
  Serial.println(valor_sensor);

  delay(500);

}