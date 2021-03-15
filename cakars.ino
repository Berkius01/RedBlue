int veri;
int r = 10;
int g = 9;


void setup(){
  Serial.begin(9600);
  pinMode(r,OUTPUT); 
  pinMode(g,OUTPUT);
  //pinMode(b,OUTPUT);
  
}
void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    veri = Serial.read(); 
  }
  
  /*if(veri == ''){
    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(b,HIGH); 
  }
    
  if(veri == 'y'){
    digitalWrite(r,HIGH);
    digitalWrite(g,LOW);
    digitalWrite(b,HIGH); 
  }
    
  if(veri == 'm'){
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(b,LOW); 
  }*/
  
  if(veri == 'n'){
    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);     
    //digitalWrite(b,LOW);
    
    delay(100);
    
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH);
    
    delay(100);
    
    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);
    //digitalWrite(b,LOW);
    
    delay(100);
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH);
   
    delay(300);

    digitalWrite(r,HIGH);
    digitalWrite(g,LOW);
    //digitalWrite(b,HIGH); 
    
    delay(100);
    
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH); 
    
    delay(100);
    
    digitalWrite(r,HIGH);
    digitalWrite(g,LOW);
    //digitalWrite(b,HIGH); 
    
    delay(100);
    
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH); 
    
    delay(300);
  }

  if(veri == 'h'){
    digitalWrite(r,HIGH);
    digitalWrite(g,LOW);     
    //digitalWrite(b,LOW);
    
    delay(10);
    
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH);
    
    delay(10);
    
    digitalWrite(r,HIGH);
    digitalWrite(g,LOW);
    //digitalWrite(b,LOW);
    
    delay(10);
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH);
   
    delay(30);

    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH); 
    
    delay(10);
    
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH); 
    
    delay(10);
    
    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH); 
    
    delay(10);
    
    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH); 
    
    delay(30);
  }

  if(veri == 'a'){
    digitalWrite(r,LOW);
    digitalWrite(g,LOW);     
    //digitalWrite(b,LOW);
    
    delay(100);
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);     
    //digitalWrite(b,LOW);
    
    delay(100);
    /*
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    //digitalWrite(b,HIGH);
    
    delay(100);
    
    digitalWrite(r,LOW);
    digitalWrite(g,LOw);
    digitalWrite(b,LOW);
    
    delay(100);
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(b,HIGH);
   
    delay(300);

    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(b,HIGH); 
    
    delay(100);
    
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(b,HIGH); 
    
    delay(100);
    
    digitalWrite(r,LOW);
    digitalWrite(g,HIGH);
    digitalWrite(b,HIGH); 
    
    delay(100);
    
    digitalWrite(r,HIGH);
    digitalWrite(g,HIGH);
    digitalWrite(b,HIGH); 
    
    delay(300);*/
  }

}
