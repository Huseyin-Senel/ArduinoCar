
#include <Servo.h> 
Servo servo1;  
int poz = 0;
int engel1;
int engel2;
int engel3;
int engel4;
int engel5;

String veri;

int vites;
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
pinMode(A0,OUTPUT);   //DC MOTORLAR
pinMode(A1,OUTPUT);
pinMode(A2,OUTPUT);
pinMode(A3,OUTPUT);
pinMode(A4,OUTPUT);
pinMode(A5,OUTPUT);
pinMode(A6,OUTPUT);
pinMode(A7,OUTPUT);
pinMode(A8,OUTPUT);
pinMode(A9,OUTPUT);
pinMode(A10,OUTPUT);
pinMode(A11,OUTPUT);
pinMode(A12,OUTPUT);
pinMode(A13,OUTPUT);
pinMode(A14,OUTPUT);
pinMode(A15,OUTPUT);


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
vites=0;

Serial.begin (9600);  //ULTRASONIK SENSOR
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

servo1.attach(9);
}

void loop(){ //-------------------------------------------------------------------------()()()()()()
if (Serial.available()>0){
if(bekle==0){char deger=Serial.read();
veri= deger;
Serial.println(veri);
}
}
//VİTES ----------------------------------------------------------------------------
if(veri=="a"||veri=="b"||veri=="c"||veri=="d"||veri=="e"||veri=="f"){
 
 if(veri=="a"){ //VİTES 1
   digitalWrite(24,LOW);
   digitalWrite(25,HIGH);
   digitalWrite(27,HIGH);
   digitalWrite(28,LOW);
   digitalWrite(29,LOW);
   digitalWrite(23,LOW);
   digitalWrite(22,LOW);

   digitalWrite(26,HIGH);
   vites=1;
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
   vites=2;
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
   vites=3;
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
   vites=4;
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
   vites=5;
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
  vites=5;
  }
 
  }
  
//İLERİ----------------------------------------------------------------------

if(veri=="l"){
 
 if(vites==1){
Serial.println("a");
digitalWrite(A0,LOW);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,LOW);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,LOW);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
//motorileri();
}

  if(vites==2){  
digitalWrite(A0,LOW);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,LOW);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,LOW);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
//motorileri();
  }

  if(vites==3){  
digitalWrite(A0,LOW);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,LOW);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,LOW);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
//motorileri();
  }

  if(vites==4){  
digitalWrite(A0,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,HIGH);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
//motorileri();
  }

  if(vites==5){  
digitalWrite(A0,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,HIGH);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
//motorileri();
  }
}
//GERİ -----------------------------------------------------
if (veri=="0"){

if (farlar==1){
  digitalWrite(34,HIGH);
  digitalWrite(35,HIGH);
  }
 
  if(vites==1){
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,LOW);
digitalWrite(A3,HIGH);
digitalWrite(A4,LOW);
digitalWrite(A5,LOW);
digitalWrite(A6,LOW);
digitalWrite(A7,HIGH);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,LOW);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,LOW);
digitalWrite(A15,HIGH);
//motorgeri();
  }

  if(vites==2){  
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,LOW);
digitalWrite(A3,HIGH);
digitalWrite(A4,LOW);
digitalWrite(A5,LOW);
digitalWrite(A6,LOW);
digitalWrite(A7,HIGH);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,LOW);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,LOW);
digitalWrite(A15,HIGH);
//motorgeri();
  }

  if(vites==3){  
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,LOW);
digitalWrite(A3,HIGH);
digitalWrite(A4,LOW);
digitalWrite(A5,LOW);
digitalWrite(A6,LOW);
digitalWrite(A7,HIGH);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,LOW);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,LOW);
digitalWrite(A15,HIGH);
//motorgeri();
  }

  if(vites==4){  
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A4,LOW);
digitalWrite(A5,LOW);
digitalWrite(A6,HIGH);
digitalWrite(A7,HIGH);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,HIGH);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,HIGH);
digitalWrite(A15,HIGH);
//motorgeri();
  }

  if(vites==5){  
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A4,LOW);
digitalWrite(A5,LOW);
digitalWrite(A6,HIGH);
digitalWrite(A7,HIGH);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,HIGH);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,HIGH);
digitalWrite(A15,HIGH);
//motorgeri();
  }
}
if(veri=="z"){
  digitalWrite(34,LOW);
  digitalWrite(35,LOW);}
//SAĞ ----------------------------------------------------
if (veri=="3"){
 
  if(vites==1){
digitalWrite(A0,LOW);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,LOW);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,LOW);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,LOW);
digitalWrite(A15,HIGH);
//motorsag();
  }

  if(vites==2){  
digitalWrite(A0,LOW);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,LOW);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,LOW);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,LOW);
digitalWrite(A15,HIGH);
//motorsag();
  }

  if(vites==3){  
digitalWrite(A0,LOW);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,LOW);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,LOW);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,LOW);
digitalWrite(A15,HIGH);
//motorsag();
  }

  if(vites==4){  
digitalWrite(A0,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,HIGH);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,HIGH);
digitalWrite(A15,HIGH);
//motorsag();
  }

  if(vites==5){  
digitalWrite(A0,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,HIGH);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,HIGH);
digitalWrite(A15,HIGH);
//motorsag();
  }
}
//SOL -------------------------------------------------------
if (veri=="4"){
 
  if(vites==1){
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,LOW);
digitalWrite(A3,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(A5,LOW);
digitalWrite(A6,HIGH);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,LOW);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
//motorsol();
  }

  if(vites==2){  
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,LOW);
digitalWrite(A3,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(A5,LOW);
digitalWrite(A6,HIGH);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,LOW);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
//motorsol();
  }

  if(vites==3){  
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,LOW);
digitalWrite(A3,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(A5,LOW);
digitalWrite(A6,HIGH);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,LOW);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
//motorsol();
  }

  if(vites==4){  
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(A5,LOW);
digitalWrite(A6,HIGH);
digitalWrite(A7,HIGH);
digitalWrite(A8,HIGH);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
//motorsol();
  }

  if(vites==5){  
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A4,LOW);
digitalWrite(A5,LOW);
digitalWrite(A6,HIGH);
digitalWrite(A7,HIGH);
digitalWrite(A8,HIGH);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
//motorsol();
  }
}

if(veri=="z"){
digitalWrite(A0,0);
digitalWrite(A1,0);
digitalWrite(A2,0);
digitalWrite(A3,0);
digitalWrite(A4,0);
digitalWrite(A5,0);
digitalWrite(A6,0);
digitalWrite(A7,0);
digitalWrite(A8,0);
digitalWrite(A9,0);
digitalWrite(A10,0);
digitalWrite(A11,0);
digitalWrite(A12,0);
digitalWrite(A13,0);
digitalWrite(A14,0);
digitalWrite(A15,0);
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
 delay(500);
 digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
 delay(400);
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
 delay(500);
 digitalWrite(36,LOW);
 digitalWrite(38,LOW);
 delay(400);
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
 delay(500);
 digitalWrite(37,LOW);
 digitalWrite(39,LOW);
 delay(400);
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

/*if (oto=false){
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  sure = pulseIn(echoPin, HIGH); 
  mesafe= sure/29.1/2;
  Serial.print(mesafe);
  Serial.println(" cm");
  }*/

delay(100);
}
//---------------------------------------------------------------------
void motorileri(){
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);

  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  }

void motorgeri(){
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
 
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  }

void motorsag(){
  digitalWrite(9,HIGH);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,HIGH);
 
  digitalWrite(5,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,HIGH);
  }

void motorsol(){
  digitalWrite(9,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
 
  digitalWrite(5,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  }    

void dur(){
 digitalWrite(A0,0);
digitalWrite(A1,0);
digitalWrite(A2,0);
digitalWrite(A3,0);
digitalWrite(A4,0);
digitalWrite(A5,0);
digitalWrite(A6,0);
digitalWrite(A7,0);
digitalWrite(A8,0);
digitalWrite(A9,0);
digitalWrite(A10,0);
digitalWrite(A11,0);
digitalWrite(A12,0);
digitalWrite(A13,0);
digitalWrite(A14,0);
digitalWrite(A15,0);
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
 
 
 digitalWrite(A0,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,HIGH);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
 delay(3000);
 dur();
 delay(1000);
 digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A4,LOW);
digitalWrite(A5,LOW);
digitalWrite(A6,HIGH);
digitalWrite(A7,HIGH);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,HIGH);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,HIGH);
digitalWrite(A15,HIGH);
 delay(3000);
 dur();
 delay(1000);
 digitalWrite(A0,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,LOW);
digitalWrite(A9,LOW);
digitalWrite(A10,HIGH);
digitalWrite(A11,HIGH);
digitalWrite(A12,LOW);
digitalWrite(A13,LOW);
digitalWrite(A14,HIGH);
digitalWrite(A15,HIGH);
 delay(1000);  
  digitalWrite(A0,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,HIGH);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
 delay(3000);
 dur();
 delay(1000);
digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,HIGH);
digitalWrite(A3,HIGH);
digitalWrite(A4,HIGH);
digitalWrite(A5,LOW);
digitalWrite(A6,HIGH);
digitalWrite(A7,HIGH);
digitalWrite(A8,HIGH);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
 delay(1000);
 digitalWrite(A0,HIGH);
digitalWrite(A1,HIGH);
digitalWrite(A2,LOW);
digitalWrite(A3,LOW);
digitalWrite(A4,HIGH);
digitalWrite(A5,HIGH);
digitalWrite(A6,LOW);
digitalWrite(A7,LOW);
digitalWrite(A8,HIGH);
digitalWrite(A9,HIGH);
digitalWrite(A10,LOW);
digitalWrite(A11,LOW);
digitalWrite(A12,HIGH);
digitalWrite(A13,HIGH);
digitalWrite(A14,LOW);
digitalWrite(A15,LOW);
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
