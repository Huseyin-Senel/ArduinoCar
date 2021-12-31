boolean sinyalonoff=false;
int sinyalsayac=0;
void setup() {
  

}

void loop() {
//DÖRTLÜLER --------------------------------------------------------
if(deger=="6"){
  dortluler=0;
  sinyalsayac=0;
  sinyalonoff=false;
    digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
  }
if(deger=="5"){
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

//SAĞ SİNYAL ---------------------------------------------------------
if(deger=="8"){
  sagsinyal=0;
   sinyalsayac=0;
  sinyalonoff=false;
    digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
  }
if(deger=="7"){
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

//SOL SİNYAL ----------------------------------------------------------
if(deger=="1"){
  solsinyal=0;
  sinyalonoff=false;
    digitalWrite(36,LOW);
 digitalWrite(37,LOW);
 digitalWrite(38,LOW);
 digitalWrite(39,LOW);
  }
if(deger=="9"){
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

}
