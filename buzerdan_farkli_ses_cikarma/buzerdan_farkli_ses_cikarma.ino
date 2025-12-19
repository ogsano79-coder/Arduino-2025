int buzzer=2;
int Re=294;
int Mi=329;
int Fa=349;
int Sol=392;
int La=440;
int Si=493;
int Do2=523;
void setup() {
pinMode(buzzer,OUTPUT);
  
  
  //notalara buzzerın frekans değerleri verildi

for (int i=3;i<=10;i++) pinMode(i,INPUT);
pinMode(13,OUTPUT);
}
void loop() {

if (digitalRead(4)==1){
 tone(buzzer,Re);
 delay(100);
 noTone(buzzer);
 delay(50);
 }
if (digitalRead(5)==1){
 tone(buzzer,Mi);
 delay(100);
 noTone(buzzer);
 delay(50);
 }
if (digitalRead(6)==1){
 tone(buzzer,Fa);
 delay(100); 
 noTone(buzzer);
 delay(50);
 }
if (digitalRead(7)==1){
 tone(buzzer,Sol);
 delay(100);
 delay(50);
 }
if (digitalRead(8)==1){
 tone(buzzer,La);
 delay(100); 
 noTone(buzzer);
 delay(50);
 }
if (digitalRead(9)==1){
 tone(buzzer,Si);
 delay(100); 
 noTone(buzzer);
 delay(50);
 }
if (digitalRead(10)==1){
 tone(buzzer,Do2);
 delay(100); 
 noTone(buzzer);
 delay(50);
 }
}
 
  
  
