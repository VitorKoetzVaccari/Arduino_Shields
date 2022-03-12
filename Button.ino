int valor;

void setup (){
  pinMode(13, OUTPUT);
  pinMode(5,OUTPUT);

}
void loop () {
valor=digitalRead(5);
if (valor==HIGH){
  digitalWrite(13,LOW);
}

else {
  digitalWrite(13,HIGH);
}
}
