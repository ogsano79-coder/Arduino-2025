//PWM İle Led Parlaklığını Ayarlama

void setup()
{
  pinMode(5,OUTPUT);
}

void loop()
{
  analogWrite(5,15); 
  //Buradaki 15 değeri
  //(0-255 arasında bir değerdir.
  //Led parlaklığını (voltaj değerini) ifade eder.
  delay(1000);
  analogWrite(5,100); 
  delay(1000); 
  analogWrite(5,255); 
  delay(1000); 
}

/*Belirli bir frekansta oluşturulan kare dalganın
1 periyot içerisinde HIGH(1) seviyesi ve LOW(0)
 seviyesinde kalma zamanı ayarlanarak elde edilen
 sinyale PWM sinyali (Pulse Width Modulation
 Sinyal Genişlik Modülasyonu) denir.*/
