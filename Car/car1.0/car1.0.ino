#define enA 8
#define in1 9
#define in2 10
#define enB 13
#define in3 11
#define in4 12

#define enA2 2
#define in5 3
#define in6 4
#define enB2 7
#define in7 5
#define in8 6

#include <Servo.h> 
Servo servo1;  
int poz = 0;
int engel1;
int engel2;
int engel3;
int engel4;
int engel5;
const int buzzer = 53;

String veri;

String vites;
char dortluler;
char sagsinyal;
char solsinyal;
char farlar;

int trigPin=40;
int echoPin=41;
long sure;
long mesafe;
boolean oto = false;
int bekle = 0;

void setup(){//-------------------------------------------------()()()()()()
  
pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
pinMode(buzzer, OUTPUT);
  pinMode(enA2, OUTPUT);
  pinMode(in5, OUTPUT);
  pinMode(in6, OUTPUT);
pinMode(enB2, OUTPUT);
  pinMode(in7, OUTPUT);
  pinMode(in8, OUTPUT);


pinMode(22,OUTPUT);   //DİSPLAY
pinMode(23,OUTPUT);
pinMode(24,OUTPUT);
pinMode(25,OUTPUT);
pinMode(26,OUTPUT);
pinMode(27,OUTPUT);
pinMode(28,OUTPUT);
pinMode(29,OUTPUT);

pinMode(30,OUTPUT);   //LEDLER
pinMode(31,OUTPUT);
pinMode(32,OUTPUT);
pinMode(33,OUTPUT);
pinMode(34,OUTPUT);
pinMode(35,OUTPUT);
pinMode(36,OUTPUT);
pinMode(37,OUTPUT);
pinMode(38,OUTPUT);
pinMode(39,OUTPUT);

digitalWrite(24,HIGH);  //VİTES 0 yapıldı
digitalWrite(25,HIGH);
digitalWrite(27,HIGH);
digitalWrite(28,HIGH);
digitalWrite(29,HIGH);
digitalWrite(23,HIGH);
digitalWrite(22,LOW);
digitalWrite(26,HIGH);

Serial.begin (9600);  //ULTRASONIK SENSOR

pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

servo1.attach(43);
tone(buzzer, 500); // 1KHz ses sinyali gönderiliyor
delay(500); // 1sn bekleme
noTone(buzzer); // ses sinyalini durdur

}

void loop(){ //--------------------------               -----------------------------------------------()()()()()
  
  if (Serial.available()>0){

if(bekle==0){char deger=Serial.read();
veri= deger;
Serial.println(veri);
}
}
//VİTES ----------------------------------------------------------------------------
if(veri=="a"||veri=="b"||veri=="c"||veri=="d"||veri=="e"||veri=="f"){
 vites=veri;
 if(veri=="a"){ //VİTES 1
  analogWrite(enA, 255); 
    analogWrite(enB, 255); 
    analogWrite(enA2, 255); 
    analogWrite(enB2, 255); 
    tone(buzzer, 500); // 1KHz ses sinyali gönderiliyor
delay(500); // 1sn bekleme
noTone(buzzer); // ses sinyalini durdur
  }
  
  if(veri=="b"){ //VİTES 2
   digitalWrite(24,HIGH);
   digitalWrite(25,HIGH);
   digitalWrite(27,LOW);
   digitalWrite(28,HIGH);
   digitalWrite(29,HIGH);
   digitalWrite(23,LOW);
   digitalWrite(22,HIGH);

   digitalWrite(26,HIGH);
   tone(buzzer, 500); // 1KHz ses sinyali gönderiliyor
delay(500); // 1sn bekleme
noTone(buzzer); // ses sinyalini durdur
  }
  
  if(veri=="c"){ //VİTES 3
   digitalWrite(24,HIGH);
   digitalWrite(25,HIGH);
   digitalWrite(27,HIGH);
   digitalWrite(28,HIGH);
   digitalWrite(29,LOW);
   digitalWrite(23,LOW);
   digitalWrite(22,HIGH);

   digitalWrite(26,HIGH);
   tone(buzzer, 500); // 1KHz ses sinyali gönderiliyor
delay(500); // 1sn bekleme
noTone(buzzer); // ses sinyalini durdur
  }
  
  if(veri=="d"){ //VİTES 4
   digitalWrite(24,LOW);
   digitalWrite(25,HIGH);
   digitalWrite(27,HIGH);
   digitalWrite(28,LOW);
   digitalWrite(29,LOW);
   digitalWrite(23,HIGH);
   digitalWrite(22,HIGH);

   digitalWrite(26,HIGH);
   tone(buzzer, 500); // 1KHz ses sinyali gönderiliyor
delay(500); // 1sn bekleme
noTone(buzzer); // ses sinyalini durdur
  }

  if(veri=="e"){ //VİTES 5
   digitalWrite(24,HIGH);
   digitalWrite(25,LOW);
   digitalWrite(27,HIGH);
   digitalWrite(28,HIGH);
   digitalWrite(29,LOW);
   digitalWrite(23,HIGH);
   digitalWrite(22,HIGH);

   digitalWrite(26,HIGH);
   tone(buzzer, 500); // 1KHz ses sinyali gönderiliyor
delay(500); // 1sn bekleme
noTone(buzzer); // ses sinyalini durdur
  }

  if(veri=="f"){//VİTES 0
   digitalWrite(24,HIGH);
   digitalWrite(25,HIGH);
   digitalWrite(27,HIGH);
   digitalWrite(28,HIGH);
   digitalWrite(29,HIGH);
   digitalWrite(23,HIGH);
   digitalWrite(22,LOW);
 
   digitalWrite(26,HIGH);
   tone(buzzer, 500); // 1KHz ses sinyali gönderiliyor
delay(500); // 1sn bekleme
noTone(buzzer); // ses sinyalini durdur
  }
 
  }
  
//İLERİ----------------------------------------------------------------------

if(veri=="l"){
 
 if(vites=="a"){

     analogWrite(enA, 255); 
    analogWrite(enB,255); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


}

  if(vites=="b"){  
 analogWrite(enA, 102); 
    analogWrite(enB,102); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 102); 
    analogWrite(enB2, 102); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }

  if(vites=="c"){  
 analogWrite(enA, 153); 
    analogWrite(enB,153); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 153); 
    analogWrite(enB2, 153); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }

  if(vites=="d"){  
 analogWrite(enA, 204); 
    analogWrite(enB, 204); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 204); 
    analogWrite(enB2, 204); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }

  if(vites=="e"){  
    analogWrite(enA, 255); 
    analogWrite(enB, 255); 
    analogWrite(enA2,255); 
    analogWrite(enB2, 255); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   


  }
}
//GERİ -----------------------------------------------------
if (veri=="0"){

if (farlar==1){
  digitalWrite(34,HIGH);
  digitalWrite(35,HIGH);
  }
 
  if(vites=="a"){
    analogWrite(enA, 51); 
    analogWrite(enB, 51); 
    analogWrite(enA2, 51); 
    analogWrite(enB2, 51); 
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    digitalWrite(in5, LOW);
    digitalWrite(in6, HIGH);
    digitalWrite(in7, LOW);
    digitalWrite(in8, HIGH);


  }

  if(vites=="b"){  
 analogWrite(enA, 102); 
    analogWrite(enB, 102); 
    analogWrite(enA2, 102); 
    analogWrite(enB2, 102); 
     digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    digitalWrite(in5, LOW);
    digitalWrite(in6, HIGH);
    digitalWrite(in7, LOW);
    digitalWrite(in8, HIGH);


  }

  if(vites=="c"){  
 analogWrite(enA, 153); 
    analogWrite(enB, 153); 
    analogWrite(enA2, 153); 
    analogWrite(enB2, 153); 
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    digitalWrite(in5, LOW);
    digitalWrite(in6, HIGH);
    digitalWrite(in7, LOW);
    digitalWrite(in8, HIGH);


  }

  if(vites=="d"){  
 analogWrite(enA, 204); 
    analogWrite(enB, 204); 
    analogWrite(enA2, 204); 
    analogWrite(enB2, 204); 
      digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    digitalWrite(in5, LOW);
    digitalWrite(in6, HIGH);
    digitalWrite(in7, LOW);
    digitalWrite(in8, HIGH);



  }

  if(vites=="e"){  
 analogWrite(enA, 255); 
    analogWrite(enB, 255);   
    analogWrite(enA2, 255); 
    analogWrite(enB2, 255); 
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    digitalWrite(in5, LOW);
    digitalWrite(in6, HIGH);
    digitalWrite(in7, LOW);
    digitalWrite(in8, HIGH);


  }
}
if(veri=="z"){
  digitalWrite(34,LOW);
  digitalWrite(35,LOW);}
//SAĞ ----------------------------------------------------
if (veri=="3"){
 
  if(vites=="a"){
 analogWrite(enA, 51); 
    analogWrite(enB, 51); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 51); 
    analogWrite(enB2, 51); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }

  if(vites=="b"){  
 analogWrite(enA, 102); 
    analogWrite(enB, 102); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 102); 
    analogWrite(enB2, 102); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }

  if(vites=="c"){  
 analogWrite(enA, 153); 
    analogWrite(enB, 153); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 153); 
    analogWrite(enB2, 153); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }

  if(vites=="d"){  
 analogWrite(enA, 204); 
    analogWrite(enB, 204); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 204); 
    analogWrite(enB2, 204); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }

  if(vites=="e"){  
 analogWrite(enA, 255); 
    analogWrite(enB, 255); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 255); 
    analogWrite(enB2, 255); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }
}
//SOL -------------------------------------------------------
if (veri=="4"){
 
  if(vites=="a"){
 analogWrite(enA, 51); 
    analogWrite(enB, 51); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 51); 
    analogWrite(enB2, 51); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);

  }

  if(vites=="b"){  
 analogWrite(enA, 102); 
    analogWrite(enB, 102); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 102); 
    analogWrite(enB2, 102); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }

  if(vites=="c"){  
 analogWrite(enA, 153); 
    analogWrite(enB, 153); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 153); 
    analogWrite(enB2, 153); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }

  if(vites=="d"){  
 analogWrite(enA, 204); 
    analogWrite(enB, 204); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 204); 
    analogWrite(enB2, 204); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);

  }

  if(vites=="e"){  
 analogWrite(enA, 255); 
    analogWrite(enB, 255); 
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 255); 
    analogWrite(enB2, 255); 
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);


  }
}
if(veri=="z"){
   analogWrite(enA, 0); 
    analogWrite(enB,0); 
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 0); 
    analogWrite(enB2, 0); 
    digitalWrite(in5, LOW);
    digitalWrite(in6, LOW);
    digitalWrite(in7, LOW);
    digitalWrite(in8, LOW);
  }
//DÖRTLÜLER --------------------------------------------------------
if(veri=="6"){
  dortluler=0;
  }
if(veri=="5"){
 dortluler=1;
 sagsinyal=0;
 solsinyal=0;
}
if(dortluler==1){
 digitalWrite(36,HIGH);
 digitalWrite(37,HIGH);
 digitalWrite(38,HIGH);
 digitalWrite(39,HIGH);
 delay(1000);
 digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
 delay(900);
  }
  
//SAĞ SİNYAL ---------------------------------------------------------
if(veri=="8"){
  sagsinyal=0;
  }
if(veri=="7"){
 sagsinyal=1;
 dortluler=0;
 solsinyal=0;
}
if(sagsinyal==1){
 digitalWrite(36,HIGH);
 digitalWrite(38,HIGH);
 delay(1000);
 digitalWrite(36,LOW);
 digitalWrite(38,LOW);
 delay(900);
}
//SOL SİNYAL ----------------------------------------------------------
if(veri=="1"){
  solsinyal=0;
  }
if(veri=="9"){
 solsinyal=1;
 dortluler=0;
 sagsinyal=0;
}
if(solsinyal==1){
 digitalWrite(37,HIGH);
 digitalWrite(39,HIGH);
 delay(1000);
 digitalWrite(37,LOW);
 digitalWrite(39,LOW);
 delay(900);
  }
//FARLAR --------------------------------------------------------------
if (veri=="n") {
  farlar=0;
  digitalWrite(30,LOW);  
  digitalWrite(31,LOW);
  digitalWrite(32,LOW);
  digitalWrite(33,LOW);
   }
if (veri=="m") {
  farlar=1;
}
  if (farlar==1){
  digitalWrite(30,HIGH);  
  digitalWrite(31,HIGH);
  digitalWrite(32,HIGH);
  digitalWrite(33,HIGH);
    }
   
//OTOMATİK -----------------------------------------------------
 if(veri=="o") {
oto=true;
bekle=1;
otomatik();
bekle=0;
oto=false;
digitalWrite(24,HIGH);
   digitalWrite(25,HIGH);
   digitalWrite(27,HIGH);
   digitalWrite(28,HIGH);
   digitalWrite(29,HIGH);
   digitalWrite(23,HIGH);
   digitalWrite(22,LOW);
 
   digitalWrite(26,HIGH);
}

if (oto=false){
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  sure = pulseIn(echoPin, HIGH); 
  mesafe= sure/29.1/2;
  }
if(mesafe<=5){
    analogWrite(enA, 0); 
    analogWrite(enB,0); 
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 0); 
    analogWrite(enB2, 0); 
    digitalWrite(in5, LOW);
    digitalWrite(in6, LOW);
    digitalWrite(in7, LOW);
    digitalWrite(in8, LOW);
  
  }
delay(100);
}
//---------------------------------------------------------------------
void motorileri(){
  digitalWrite(43,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);

  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  }

void motorgeri(){
  digitalWrite(43,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
 
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  }

void motorsag(){
  digitalWrite(43,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
 
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  }

void motorsol(){
  digitalWrite(43,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
 
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  }    

void dur(){
     analogWrite(enA, 0); 
    analogWrite(enB,0); 
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
   
    analogWrite(enA2, 0); 
    analogWrite(enB2, 0); 
    digitalWrite(in5, LOW);
    digitalWrite(in6, LOW);
    digitalWrite(in7, LOW);
    digitalWrite(in8, LOW);
  }

void otomatik(){
engel1=0;
 engel2=0;
 engel3=0;
 tara();
 delay(200);
 if(engel1==1 || engel2==1 || engel3==1){
  error();
  } 
 else{
digitalWrite(24,LOW);  //VİTES "o" YAPILDI
digitalWrite(25,LOW);
digitalWrite(27,HIGH);
digitalWrite(28,HIGH);
digitalWrite(29,HIGH);
digitalWrite(23,LOW);
digitalWrite(22,HIGH);

digitalWrite(26,LOW);
 
 analogWrite(13,255); //VİTES 5 OLDU
 analogWrite(12,255);
 analogWrite(11,255);
 analogWrite(10,255);
 motorileri();
 delay(3000);
 dur();
 delay(1000);
 motorgeri();
 delay(3000);
 dur();
 delay(1000);
 motorsag();
 delay(1000);  
  motorileri();
 delay(3000);
 dur();
 delay(1000);
 motorsol();
 delay(1000);
 motorileri();
 delay(3000);
 dur();
 veri="z";
 engel1=0;
 engel2=0;
 engel3=0;
  }
}

  void tara(){
    oto=true;
    Serial.println("otomatiğe geçildi");
  for(poz = 15; poz <= 180; poz=poz+60){
    servo1.write(poz);             
   
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  sure = pulseIn(echoPin, HIGH); 
  mesafe= sure/29.1/2;
  Serial.print(mesafe);
  Serial.println(" cm");
 
if (mesafe<10 && 0<=poz<60){
  engel1=1;
  }  
if (mesafe<10 && 60<=poz<120){
  engel2=1;
  }  
if (mesafe<10 && 120<=poz<180){
  engel3=1;
  }      
/*if (mesafe<60 && 108<=poz<144){
  engel4=1;
  }         
if (mesafe<60 && 144<=poz<=180){
  engel5=1;
  }*/          
    delay(200);     
  }
    }

void error(){
digitalWrite(30,HIGH);  
digitalWrite(31,HIGH);
digitalWrite(32,HIGH);
digitalWrite(33,HIGH);
digitalWrite(34,HIGH);
digitalWrite(35,HIGH);
digitalWrite(36,HIGH);
digitalWrite(37,HIGH);
digitalWrite(38,HIGH);
digitalWrite(39,HIGH);
delay(1000);
digitalWrite(30,LOW);  
digitalWrite(31,LOW);
digitalWrite(32,LOW);
digitalWrite(33,LOW);
digitalWrite(34,LOW);
digitalWrite(35,LOW);
digitalWrite(36,LOW);
digitalWrite(37,LOW);
digitalWrite(38,LOW);
digitalWrite(39,LOW);
delay(1000);
digitalWrite(30,HIGH);  
digitalWrite(31,HIGH);
digitalWrite(32,HIGH);
digitalWrite(33,HIGH);
digitalWrite(34,HIGH);
digitalWrite(35,HIGH);
digitalWrite(36,HIGH);
digitalWrite(37,HIGH);
digitalWrite(38,HIGH);
digitalWrite(39,HIGH);
delay(1000);
digitalWrite(30,LOW);  
digitalWrite(31,LOW);
digitalWrite(32,LOW);
digitalWrite(33,LOW);
digitalWrite(34,LOW);
digitalWrite(35,LOW);
digitalWrite(36,LOW);
digitalWrite(37,LOW);
digitalWrite(38,LOW);
digitalWrite(39,LOW);
veri="z";
}    
