const int N1A = 3;
const int N2A = 5;
const int N3B = 6;
const int N4B = 9;

void setup() {
  pinMode(N1A,OUTPUT);
  pinMode(N3B,OUTPUT);
  pinMode(N2A,OUTPUT);
  pinMode(N4B,OUTPUT);
  Serial.begin(9600);
}

void atras(){
  digitalWrite(N1A,HIGH);
  digitalWrite(N2A,LOW);
  digitalWrite(N3B,HIGH);
  digitalWrite(N4B,LOW);
}
void adelante(){
  digitalWrite(N1A,LOW);
  digitalWrite(N2A,HIGH);
  digitalWrite(N3B,LOW);
  digitalWrite(N4B,HIGH);
}
void izquierda(){
  digitalWrite(N1A,LOW);
  digitalWrite(N2A,HIGH);
  digitalWrite(N3B,LOW);
  digitalWrite(N4B,LOW);
}
void derecha(){
  digitalWrite(N1A,LOW);
  digitalWrite(N2A,LOW);
  digitalWrite(N3B,LOW);
  digitalWrite(N4B,HIGH);
}
void alto(){
  digitalWrite(N1A,LOW);
  digitalWrite(N2A,LOW);
  digitalWrite(N3B,LOW);
  digitalWrite(N4B,LOW);
}

void loop() {
  adelante();
  delay(1000);
  izquierda();
  delay(1000);
  adelante();
  delay(1000);
  derecha();
  delay(1000);
  atras();
  delay(1000);
  alto();
  delay(1000);
}
