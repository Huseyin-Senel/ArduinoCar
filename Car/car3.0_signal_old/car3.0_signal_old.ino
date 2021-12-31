void setup() {
  // put your setup code here, to run once:

}

void loop() {
 //DÖRTLÜLER --------------------------------------------------------
if(deger=="6"){
  dortluler=0;
  }
if(deger=="5"){
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
if(deger=="8"){
  sagsinyal=0;
  }
if(deger=="7"){
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
if(deger=="l"){
  solsinyal=0;
  }
if(deger=="9"){
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

}
