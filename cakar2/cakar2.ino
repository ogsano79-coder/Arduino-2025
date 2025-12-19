int bir=1,iki=2,uc=3,dort=4,bes=5,alti=6;
void setup()
{
  pinMode(bir, OUTPUT);
  pinMode(iki, OUTPUT);
  pinMode(uc, OUTPUT);
  pinMode(dort, OUTPUT);
  pinMode(bes, OUTPUT);
  pinMode(alti,OUTPUT);
}

void loop()
{
  digitalWrite(bir, HIGH);
  delay(100);
    
  digitalWrite(iki, HIGH);
  delay(100);
  
  digitalWrite(uc, HIGH);
  delay(100);
  
  digitalWrite(dort, HIGH);
  delay(100);
  
  digitalWrite(bes, HIGH);
  delay(100);
  
  digitalWrite(alti, HIGH);
  delay(100);
  
  digitalWrite(iki, 0);
  digitalWrite(uc, 0);
  digitalWrite(dort, 0);
  digitalWrite(bes, 0);
  digitalWrite(alti, 0);
  
  
  
  
 
}
