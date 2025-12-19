int on=10, onbir=11, oniki=12, onuc=13,bes=5,dort=4,uc=3,iki=2;

void setup()
{
pinMode (on, OUTPUT);

pinMode (onbir, OUTPUT);

pinMode (oniki, OUTPUT);

pinMode (onuc, OUTPUT);
  
pinMode (iki, OUTPUT);

pinMode (uc, OUTPUT);

pinMode (dort, OUTPUT);

pinMode (bes, OUTPUT);
  
  
}
void loop()
{
  
  digitalWrite(on, HIGH);
  delay(500);
  digitalWrite(on, LOW);
  digitalWrite (onbir, HIGH);
  delay(500);
  digitalWrite(onbir, LOW);
  digitalWrite(oniki, HIGH);
  delay(500);
  digitalWrite (oniki, LOW);
  digitalWrite (onuc, HIGH);
  delay(500);
  digitalWrite(onuc, LOW);
  delay(500);
  
  
  digitalWrite(iki, HIGH);
  delay(500);
  digitalWrite(iki, LOW);
  digitalWrite (uc, HIGH);
  delay(500);
  digitalWrite(uc, LOW);
  digitalWrite(dort, HIGH);
  delay(500);
  digitalWrite (dort, LOW);
  digitalWrite (bes, HIGH);
  delay(500);
  digitalWrite(bes, LOW);
  delay(500);
  
  
}
