int led1=8;
int led2=13;
int led3=10;
int button=4;
int counter=0;
void setup(){
Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
   pinMode(led3,OUTPUT);
  pinMode(button,INPUT);
}
void loop(){

  if (digitalRead(button)==HIGH);{
  counter++;
  if (counter==1){
  digitalWrite(led1,HIGH);
 }
    else if(counter==2){
      digitalWrite(led2,HIGH);
      digitalWrite(led1,HIGH);
    
    }
      else{
     digitalWrite(led2,HIGH);
      digitalWrite(led1,HIGH); 
      digitalWrite(led3,HIGH);
        counter=0;
    }
}
}