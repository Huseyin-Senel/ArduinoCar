String deger;
char veri;
char dortluler;
char sagsinyal;
char solsinyal;
boolean sinyalonoff=false;
int sinyalsayac=0;
char farlar;
boolean oto;
int trigPin=23;
int echoPin=22;
int echoPin2=24;
int trigPin2=25;
long sure;
long sure2;
long mesafe;
long mesafe2;
int bekle = 0;
void setup() {
 pinMode(13,OUTPUT);   //DC MOTORLAR
pinMode(12,OUTPUT);
pinMode(11,OUTPUT);
pinMode(10,OUTPUT);
pinMode(42,OUTPUT);
pinMode(8,OUTPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
pinMode(3,OUTPUT);
pinMode(2,OUTPUT);


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

pinMode(26,OUTPUT);    //MIKNATISLAR
pinMode(27,OUTPUT);
pinMode(28,OUTPUT);
digitalWrite(26,HIGH);
digitalWrite(27,HIGH);
digitalWrite(28,HIGH);

Serial.begin (9600);  //ULTRASONIK SENSORLER
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(trigPin2,OUTPUT);
pinMode(echoPin2,INPUT);
oto=false;
}

void loop() {    //BLUETOOTH DAN GELEN VERİYİ OKUMA
  if (Serial.available()>0){
if(bekle==0){
  char veri = Serial.read(); 
  deger = veri;
  Serial.println(deger);
}
}
//----------------------------------------------------------------------------İLERİ
if (deger=="l"){
analogWrite(2,255);       //DC MOTOR HIZLARI
analogWrite(7,255);
analogWrite(13,255);
analogWrite(8,255);
                  //----------------1.MOTOR SÜRÜCÜ
  digitalWrite(12,LOW);    //MOTOR 1
  digitalWrite(11,HIGH);  //
  digitalWrite(10,LOW);    //MOTOR 2  
  digitalWrite(9,HIGH);   //
                  //-----------------2. MOTOR SÜRÜCÜ
  digitalWrite(5,LOW);     //MOTOR 3
  digitalWrite(6,HIGH);   //
  digitalWrite(3,LOW);     //MOTOR 4
  digitalWrite(4,HIGH);   //
 //----------------------------------------------------------------------------MESAFE ÖLÇÜMÜ                
if (oto==false){  
  digitalWrite(trigPin2, LOW); 
  delayMicroseconds(5);
  digitalWrite(trigPin2, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);  
  sure2 = pulseIn(echoPin2, HIGH); 
  mesafe2= sure2/29.1/2;
  Serial.print(mesafe2);
  Serial.println(" cm");
  }
if(mesafe2<40){           //MESAFE FRENİ
  dur();          
  digitalWrite(26,LOW); // MIKNATISLARIN ÇALIŞMASI
  digitalWrite(27,LOW);
  digitalWrite(28,LOW);
  delay(1000);
  digitalWrite(26,HIGH);
  digitalWrite(27,HIGH);
  digitalWrite(28,HIGH);
  deger="z";
  }
}
//----------------------------------------------------------------------------GERİ
if (deger=="0"){

 if (farlar==1){        //ARKA FARLAR AÇIK
  digitalWrite(34,HIGH);
  digitalWrite(35,HIGH);
  }
  
analogWrite(2,255);     //DC MOTOR HIZLARI
analogWrite(7,255);
analogWrite(13,255);
analogWrite(8,255);
                        //----------------1.MOTOR SÜRÜCÜ
  digitalWrite(11,LOW);      //MOTOR 1
  digitalWrite(12,HIGH);    //
  digitalWrite(9,LOW);       //MOTOR 2  
  digitalWrite(10,HIGH);    //
                        //----------------2. MOTOR SÜRÜCÜ
  digitalWrite(6,LOW);       //MOTOR 3
  digitalWrite(5,HIGH);     //
  digitalWrite(4,LOW);       //MOTOR 4
  digitalWrite(3,HIGH);     //   
 //----------------------------------------------------------------------------MESAFE ÖLÇÜMÜ        
if (oto==false){
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);  
  sure = pulseIn(echoPin, HIGH); 
  mesafe= sure/29.1/2;
  Serial.print(mesafe);
  Serial.println(" cm");
  }
if(mesafe<40){            //MESAFE FRENİ
  dur();
  deger="z";
  }
}

if(deger!="0"){           //ARKA FARLAR KAPALI
  digitalWrite(34,LOW);                     
  digitalWrite(35,LOW);
  }                        
//----------------------------------------------------------------------------SAĞ
if (deger=="3"){  
analogWrite(2,255);       //DC MOTOR HIZLARI
analogWrite(7,255);
analogWrite(13,255);
analogWrite(8,255);
                          //----------------1.MOTOR SÜRÜCÜ
  digitalWrite(11,HIGH);        //MOTOR 1
  digitalWrite(12,LOW);       //
  digitalWrite(10,HIGH);       //MOTOR 2  
  digitalWrite(9,LOW);        //
                          //----------------2. MOTOR SÜRÜCÜ
  digitalWrite(6,HIGH);        //MOTOR 3
  digitalWrite(5,LOW);        //
  digitalWrite(3,HIGH);        //MOTOR 4
  digitalWrite(4,LOW);        //

}
//----------------------------------------------------------------------------SOL
if (deger=="4"){ 
analogWrite(2,255);          //DC MOTOR HIZLARI
analogWrite(7,255);
analogWrite(13,255);
analogWrite(8,255);
                         //----------------1.MOTOR SÜRÜCÜ
  digitalWrite(12,HIGH);       //MOTOR 1
  digitalWrite(11,LOW);       //
  digitalWrite(9,HIGH);        //MOTOR 2  
  digitalWrite(10,LOW);       //
                        //----------------2. MOTOR SÜRÜCÜ
  digitalWrite(5,HIGH);        //MOTOR 3
  digitalWrite(6,LOW);        //
  digitalWrite(4,HIGH);        //MOTOR 4
  digitalWrite(3,LOW);        //
}
//----------------------------------------------------------------------------DÖRTLÜLER 
if(deger=="6"){              //KAPALI
  dortluler=0;
  sinyalsayac=0;
  sinyalonoff=false;
 digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
  }
if(deger=="5"){               //AÇIK
 dortluler=1;
 sagsinyal=0;
 solsinyal=0;
 digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
}
if(dortluler==1){
 if(sinyalonoff==false){
 digitalWrite(36,HIGH);
 digitalWrite(37,HIGH);
 digitalWrite(38,HIGH);
 digitalWrite(39,HIGH);
 sinyalsayac++;
 if(sinyalsayac>=10){
 sinyalonoff=true;
 sinyalsayac=0;
 }
 }
if(sinyalonoff==true){
 digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
 sinyalsayac++;
 if(sinyalsayac>=10){
 sinyalonoff=false;
 sinyalsayac=0;
 }
 }
  }

//----------------------------------------------------------------------------SAĞ SİNYAL 
if(deger=="8"){                 //KAPALI
  sagsinyal=0;
  sinyalsayac=0;
  sinyalonoff=false;
 digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
  }
if(deger=="7"){                   //AÇIK
 sagsinyal=1;
 dortluler=0;
 solsinyal=0;
 digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
}
if(sagsinyal==1){
 if(sinyalonoff==false){
 digitalWrite(36,HIGH);
 digitalWrite(38,HIGH);
 sinyalsayac++;
 if(sinyalsayac>=10){
 sinyalonoff=true;
 sinyalsayac=0;
 }
 }
 else{
 digitalWrite(36,LOW);
 digitalWrite(38,LOW);
 sinyalsayac++;
 if(sinyalsayac>=10){
 sinyalonoff=false;
 sinyalsayac=0;
 }
 }
}

//----------------------------------------------------------------------------SOL SİNYAL
if(deger=="1"){                    //KAPALI
  solsinyal=0;
  sinyalonoff=false;
 digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
  }
if(deger=="9"){                     //AÇIK
 solsinyal=1;
 dortluler=0;
 sagsinyal=0;
 digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
}
if(solsinyal==1){
 if(sinyalonoff==false){
 digitalWrite(37,HIGH);
 digitalWrite(39,HIGH);
 sinyalsayac++;
 if(sinyalsayac>=10){
 sinyalonoff=true;
 sinyalsayac=0;
 }
 }
 else{
 digitalWrite(37,LOW);
 digitalWrite(39,LOW);
 sinyalsayac++;
 if(sinyalsayac>=10){
 sinyalonoff=false;
 sinyalsayac=0;
 }
 }
}
  
//----------------------------------------------------------------------------FARLAR 
if (deger=="n") {
  farlar=0;                           //KAPALI
  digitalWrite(30,LOW);  
  digitalWrite(31,LOW);
  digitalWrite(32,LOW);
  digitalWrite(33,LOW);
   }
   
if (deger=="m") {
  farlar=1;                           //AÇIK
}
if(farlar==1){
  digitalWrite(30,HIGH);  
  digitalWrite(31,HIGH);
  digitalWrite(32,HIGH);
  digitalWrite(33,HIGH);
}



if(deger=="z"){
  dur();
  }

delay(100);
}
 //----------------------------------------------------------------------------FREN
void dur(){
  analogWrite(13,255);
  analogWrite(12,255);
  analogWrite(11,255);
  analogWrite(10,255);
 
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(6,HIGH);
 
  digitalWrite(5,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(2,HIGH);
 
  delay(100);
 
  analogWrite(13,0);
  analogWrite(12,0);
  analogWrite(11,0);
  analogWrite(10,0);
  
  digitalWrite(9,LOW);
  digitalWrite(8,LOW);
  digitalWrite(7,LOW);
  digitalWrite(6,LOW);
 
  digitalWrite(5,LOW);
  digitalWrite(4,LOW);
  digitalWrite(3,LOW);
  digitalWrite(2,LOW);

  }

