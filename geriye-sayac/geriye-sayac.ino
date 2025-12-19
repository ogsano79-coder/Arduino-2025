
void setup()
{
  for (int i=2;i<=8;i++) pinMode(i, OUTPUT);
    pinMode(9,INPUT);
}

void loop()
{
  int deger=digitalRead(9);
    if(deger==1) ilerisay();
    else gerisay();
    
}
void ilerisay(){
    sifir(); delay(500);
  bir(); delay(500);
  iki(); delay(500);
    uc(); delay(500);
    dort(); delay(500);
    bes(); delay(500);
    alti(); delay(500);
    yedi(); delay(500);
    sekiz(); delay(500);
    dokuz(); delay(500);
}
void gerisay(){
    
    dokuz(); delay(500);
  sekiz(); delay(500);
  yedi(); delay(500);
    alti(); delay(500);
    bes(); delay(500);
    dort(); delay(500);
    uc(); delay(500);
    iki(); delay(500);
    bir(); delay(500);
    sifir(); delay(500);
}
void sifir() {
digitalWrite(2, 0); //a
digitalWrite(3, 0); //b
digitalWrite(4, 0); //c
digitalWrite(5, 0); //d
digitalWrite(6, 0); //e
digitalWrite(7, 0); //f
digitalWrite(8, 1); //g
}
void bir() {
digitalWrite(2, 1); //a
digitalWrite(3, 0); //b
digitalWrite(4, 0); //c
digitalWrite(5, 1); //d
digitalWrite(6,1); //e
digitalWrite(7, 1); //f
digitalWrite(8, 1); //g
}
void iki() {
digitalWrite(2, 0); //a
digitalWrite(3, 0); //b
digitalWrite(4, 1); //c
digitalWrite(5, 0); //d
digitalWrite(6, 0); //e
digitalWrite(7, 1); //f
digitalWrite(8, 0); //g
}
void uc() {
digitalWrite(2, 0); //a
digitalWrite(3, 0); //b
digitalWrite(4, 0); //c
digitalWrite(5, 0); //d
digitalWrite(6, 1); //e
digitalWrite(7, 1); //f
digitalWrite(8, 0); //g
}
void dort() {
digitalWrite(2, 1); //a
digitalWrite(3, 0); //b
digitalWrite(4, 0); //c
digitalWrite(5, 1); //d
digitalWrite(6, 1); //e
digitalWrite(7, 0); //f
digitalWrite(8, 0); //g
}
void bes() {
digitalWrite(2, 0); //a
digitalWrite(3, 1); //b
digitalWrite(4, 0); //c
digitalWrite(5, 0); //d
digitalWrite(6, 1); //e
digitalWrite(7, 0); //f
digitalWrite(8, 0); //g
}
void alti() {
digitalWrite(2, 0); //a
digitalWrite(3, 1); //b
digitalWrite(4, 0); //c 
digitalWrite(5, 0); //d
digitalWrite(6, 0); //e
digitalWrite(7, 0); //f
digitalWrite(8, 0); //g
}
void yedi() {
digitalWrite(2, 0); //a
digitalWrite(3, 0); //b
digitalWrite(4, 0); //c
digitalWrite(5, 1); //d
digitalWrite(6, 1); //e
digitalWrite(7, 1); //f
digitalWrite(8, 1); //g
}
void sekiz() {
digitalWrite(2, 0); //a
digitalWrite(3, 0); //b
digitalWrite(4, 0); //c
digitalWrite(5, 0); //d
digitalWrite(6, 0); //e
digitalWrite(7, 0); //f
digitalWrite(8, 0); //g
}
void dokuz() {
digitalWrite(2, 0); //a
digitalWrite(3, 0); //b
digitalWrite(4, 0); //c
digitalWrite(5, 0); //d
digitalWrite(6, 1); //e
digitalWrite(7, 0); //f
digitalWrite(8, 0); //g
}
