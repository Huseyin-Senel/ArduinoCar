
#define enA 2
#define in1 3
#define in2 4
#define enB 7
#define in3 6
#define in4 5

#define enA2 13
#define in5 12
#define in6 11
#define enB2 8
#define in7 10
#define in8 9

#include <Servo.h> 
Servo servo1;  
int poz = 0;
int engel1;
int engel2;
int engel3;
int engel4;
int engel5;
int engelA;


const int sol_sensor = 42;
const int sag_sensor = 44;
int sol_durum;
int sag_durum;


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

int trigPin1=46;
int echoPin1=45;
long sure1;
long mesafe1;

boolean oto = false;
int bekle = 0;

void setup(){//-------------------------------------------------()()()()()()
 pinMode(sag_sensor, INPUT); 
 pinMode(sol_sensor, INPUT);

pinMode(enA, OUTPUT);  //MTOR SURUCU
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

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

digitalWrite(24,LOW);  //VİTES 0 yapıldı
digitalWrite(25,LOW);
digitalWrite(27,LOW);
digitalWrite(28,LOW);
digitalWrite(29,LOW);
digitalWrite(23,LOW);
digitalWrite(22,HIGH);
digitalWrite(26,HIGH);

Serial.begin (9600);  //ULTRASONIK SENSOR
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(trigPin1, OUTPUT);
pinMode(echoPin1, INPUT);

servo1.attach(43);

 
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
 vites=veri;
 if(veri=="a"){ //VİTES 1
   digitalWrite(24,HIGH);
   digitalWrite(25,LOW);
   digitalWrite(27,LOW);
   digitalWrite(28,HIGH);
   digitalWrite(29,HIGH);
   digitalWrite(23,HIGH);
   digitalWrite(22,HIGH);

   digitalWrite(26,HIGH);
  }
  
  if(veri=="b"){ //VİTES 2
   digitalWrite(24,LOW);
   digitalWrite(25,LOW);
   digitalWrite(27,HIGH);
   digitalWrite(28,LOW);
   digitalWrite(29,LOW);
   digitalWrite(23,HIGH);
   digitalWrite(22,LOW);

   digitalWrite(26,HIGH);
  }
  
  if(veri=="c"){ //VİTES 3
   digitalWrite(24,LOW);
   digitalWrite(25,LOW);
   digitalWrite(27,LOW);
   digitalWrite(28,LOW);
   digitalWrite(29,HIGH);
   digitalWrite(23,HIGH);
   digitalWrite(22,LOW);

   digitalWrite(26,HIGH);
  }
  
  if(veri=="d"){ //VİTES 4
   digitalWrite(24,HIGH);
   digitalWrite(25,LOW);
   digitalWrite(27,LOW);
   digitalWrite(28,HIGH);
   digitalWrite(29,HIGH);
   digitalWrite(23,LOW);
   digitalWrite(22,LOW);

   digitalWrite(26,HIGH);
  }

  if(veri=="e"){ //VİTES 5
   digitalWrite(24,LOW);
   digitalWrite(25,HIGH);
   digitalWrite(27,LOW);
   digitalWrite(28,LOW);
   digitalWrite(29,HIGH);
   digitalWrite(23,LOW);
   digitalWrite(22,LOW);

   digitalWrite(26,HIGH);
  }

  if(veri=="f"){//VİTES 0
   digitalWrite(24,LOW);
   digitalWrite(25,LOW);
   digitalWrite(26,LOW);
   digitalWrite(27,LOW);
   digitalWrite(28,LOW);
   digitalWrite(23,LOW);
   digitalWrite(22,HIGH);
   digitalWrite(29,HIGH);
   veri="z";
  }
 
  }
//DUR-------------------------------------------------------------------------
if(veri=="z"){
  dur();
  }
  


//İLERİ----------------------------------------------------------------------

if(veri=="l"){

 if (oto==false){
  digitalWrite(trigPin, LOW);                        
  delayMicroseconds(5);                              
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  sure = pulseIn(echoPin, HIGH); 
  mesafe= sure/29.1/2;
  if(mesafe<=35){
    dur();
    veri="z";
    }
  }

 
 if(vites=="a"){

     analogWrite(enA, 51); 
    analogWrite(enB,51); 
    analogWrite(enA2,51);
    analogWrite(enB2,51);
motorileri();
}

  if(vites=="b"){  
    analogWrite(enA, 102); 
    analogWrite(enB,102); 
    analogWrite(enA2, 102); 
    analogWrite(enB2, 102); 
    motorileri();
  }

  if(vites=="c"){  
    analogWrite(enA, 153); 
    analogWrite(enB,153);    
    analogWrite(enA2, 153); 
    analogWrite(enB2, 153); 
    motorileri();
  }

  if(vites=="d"){  
    analogWrite(enA, 204); 
    analogWrite(enB, 204);    
    analogWrite(enA2, 204); 
    analogWrite(enB2, 204); 
    motorileri();
  }

  if(vites=="e"){  
    analogWrite(enA, 255); 
    analogWrite(enB, 255);    
    analogWrite(enA2,255); 
    analogWrite(enB2, 255); 

motorileri();
  }
}
//GERİ -----------------------------------------------------
/*while*/if(veri=="0"){
//if (Serial.available()>0){
//char deger1=Serial.read();
//veri= deger1;
//}
  digitalWrite(trigPin1, LOW); 
  delayMicroseconds(5);
  digitalWrite(trigPin1, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin1, LOW);  
  sure1 = pulseIn(echoPin1, HIGH); 
  mesafe1= sure1/29.1/2;
  Serial.print(mesafe1);
  Serial.println(" cm");
  
if (farlar==1){
  digitalWrite(34,HIGH);
  digitalWrite(35,HIGH);
  }
 
  if(vites=="a"){
 analogWrite(enA, 51); 
    analogWrite(enB, 51); 
    analogWrite(enA2, 51); 
    analogWrite(enB2, 51); 
motorgeri();
  }

  if(vites=="b"){  
 analogWrite(enA, 102); 
    analogWrite(enB, 102); 
    analogWrite(enA2, 102); 
    analogWrite(enB2, 102); 
    motorgeri();
  }

  if(vites=="c"){  
    analogWrite(enA, 153); 
    analogWrite(enB, 153); 
    analogWrite(enA2, 153); 
    analogWrite(enB2, 153); 
    motorgeri();
  }

  if(vites=="d"){  
 analogWrite(enA, 204); 
    analogWrite(enB, 204);  
    analogWrite(enA2, 204); 
    analogWrite(enB2, 204); 
motorgeri();
  }

  if(vites=="e"){  
 analogWrite(enA, 255); 
    analogWrite(enB, 255); 
    analogWrite(enA2, 255); 
    analogWrite(enB2, 255); 
motorgeri();
  }
 
  if (mesafe1<35){
    dur();
 veri="z";
  }

  //delay(100);
}
if(veri=="z"){
  digitalWrite(34,LOW);
  digitalWrite(35,LOW);
  }
//SAĞ ----------------------------------------------------
if (veri=="3"){
 
  if(vites=="a"){
 analogWrite(enA, 51); 
    analogWrite(enB, 51); 
    analogWrite(enA2, 51); 
    analogWrite(enB2, 51); 
motorsag();
  }

  if(vites=="b"){  
 analogWrite(enA, 102); 
    analogWrite(enB, 102); 
    analogWrite(enA2, 102); 
    analogWrite(enB2, 102); 
motorsag();
  }

  if(vites=="c"){  
 analogWrite(enA, 153); 
    analogWrite(enB, 153);   
    analogWrite(enA2, 153); 
    analogWrite(enB2, 153); 
motorsag();
  }

  if(vites=="d"){  
 analogWrite(enA, 204); 
    analogWrite(enB, 204); 
    analogWrite(enA2, 204); 
    analogWrite(enB2, 204); 
motorsag();
  }

  if(vites=="e"){  
 analogWrite(enA, 255); 
    analogWrite(enB, 255); 
    analogWrite(enA2, 255); 
    analogWrite(enB2, 255); 
motorsag();
  }
}
//SOL -------------------------------------------------------
if (veri=="4"){
 
  if(vites=="a"){
 analogWrite(enA, 51); 
    analogWrite(enB, 51); 
    analogWrite(enA2, 51); 
    analogWrite(enB2, 51); 
motorsol();
  }

  if(vites=="b"){  
 analogWrite(enA, 102); 
    analogWrite(enB, 102);    
    analogWrite(enA2, 102); 
    analogWrite(enB2, 102); 
motorsol();
  }

  if(vites=="c"){  
 analogWrite(enA, 153); 
    analogWrite(enB, 153); 
    analogWrite(enA2, 153); 
    analogWrite(enB2, 153); 
motorsol();
  }

  if(vites=="d"){  
 analogWrite(enA, 204); 
    analogWrite(enB, 204); 
    analogWrite(enA2, 204); 
    analogWrite(enB2, 204);

motorsol();
  }

  if(vites=="e"){  
 analogWrite(enA, 255); 
    analogWrite(enB, 255);   
   analogWrite(enA2, 255); 
    analogWrite(enB2, 255); 
motorsol();
  }
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
   digitalWrite(24,LOW);
   digitalWrite(25,LOW);
   digitalWrite(27,LOW);
   digitalWrite(28,LOW);
   digitalWrite(29,LOW);
   digitalWrite(23,LOW);
   digitalWrite(22,HIGH);
 
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
void motorgeri(){

    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
  
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);
  }

void motorileri(){

    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
   
 
    digitalWrite(in5, LOW);
    digitalWrite(in6, HIGH);
    digitalWrite(in7, LOW);
    digitalWrite(in8, HIGH);
  }

void motorsag(){

    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
   
    digitalWrite(in5, HIGH);
    digitalWrite(in6, LOW);
    digitalWrite(in7, LOW);
    digitalWrite(in8, HIGH);
  }

void motorsol(){

    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
   
    digitalWrite(in5, LOW);
    digitalWrite(in6, HIGH);
    digitalWrite(in7, HIGH);
    digitalWrite(in8, LOW);
  }    

void dur(){

    analogWrite(enA, 0); 
    analogWrite(enB, 0);
    analogWrite(enA2, 0); 
    analogWrite(enB2, 0);  
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
   
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
   servo1.write(90);
 delay(200);
 if(engel1==1 || engel2==1 || engel3==1){
  error();
  } 
 else{
digitalWrite(24,HIGH);  //VİTES "o" YAPILDI
digitalWrite(25,HIGH);
digitalWrite(27,LOW);
digitalWrite(28,LOW);
digitalWrite(29,LOW);
digitalWrite(23,HIGH);
digitalWrite(22,LOW);

digitalWrite(26,LOW);
 
 
  while(veri=="o"){
   if (Serial.available()>0){
   char deger=Serial.read();
   veri= deger}
 
 sol_durum = digitalRead(sol_sensor); 
 sag_durum = digitalRead(sag_sensor);

  
   digitalWrite(trigPin, LOW); 
   delayMicroseconds(5);
   digitalWrite(trigPin, HIGH); 
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);  
   sure = pulseIn(echoPin, HIGH); 
   mesafe= sure/29.1/2;

    /* if(mesafe<=25){
     dur();
     veri="z";
     }*/

   if (sol_durum == HIGH && sag_durum == HIGH) 
 analogWrite(enA, 255); 
    analogWrite(enB, 255);   
   analogWrite(enA2, 255); 
    analogWrite(enB2, 255); 
    motorileri();
 }
 else if (sol_durum == HIGH && sag_durum == LOW) // sağ siyah
 {
   analogWrite(enA, 255); 
    analogWrite(enB, 255);   
   analogWrite(enA2, 255); 
    analogWrite(enB2, 255); 
    motorsag();
 }
 else if (sol_durum == LOW && sag_durum == HIGH) // sol siyah 
 {
   analogWrite(enA, 255); 
    analogWrite(enB, 255);   
   analogWrite(enA2, 255); 
    analogWrite(enB2, 255); 
    motorsol();
 }
 else  //dur
 {
   dur();
 }    
   delay(40); 
   dur();
  }
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
  for(poz = 10; poz <= 180; poz=poz+20){
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
 
if (mesafe<10 && 0<=poz && poz<60){
  engel1=1;
  }  
if (mesafe<10 && 60<=poz && poz<120){
  engel2=1;
  }  
if (mesafe<10 && 120<=poz && poz<180){
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
