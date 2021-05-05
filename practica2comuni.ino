int i;
int x;
int y;
String men1="¿Que serie desea?(serie1,serie2,serie3)";
String men2="Serie 1 Finalizada";
String men3="Serie 2 Finalizada";
String men4="Serie 3 Finalizada";
void setup()
{
Serial.begin(9600);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);


}
void loop()
{
  String serie;
if(Serial.available()){
    serie=Serial.readStringUntil('\n');
  if(serie=="serie1"){
      for(int y=0;y<3;y++){
        for(int i=2;i<6;i++){
          digitalWrite(i,HIGH);
         delay(200);
         digitalWrite(i,LOW);
         delay(200); 
        }
     
      }
       Serial.println(men2);  
    }else{
        if(serie=="serie2"){
      for(int y=0;y<3;y++){
        for(int i=6;i>1;i--){
         digitalWrite(i,HIGH);
         delay(200);
         digitalWrite(i,LOW);
         delay(200);  
      
    }
      
  }
  Serial.println(men3);
 
        }else{
          if(serie=="serie3"){
            for(int y=0;y<3;y++){
              digitalWrite(5,HIGH);
              digitalWrite(4,HIGH);
              delay(200);
              delay(200);
              digitalWrite(5,LOW);
              digitalWrite(4,LOW);
              delay(200);
              delay(200);
              digitalWrite(2,HIGH);
              digitalWrite(3,HIGH);
              delay(200);
              delay(200);
              digitalWrite(2,LOW);
              digitalWrite(3,LOW);
              delay(200);
              delay(200);
              digitalWrite(5,HIGH);
              digitalWrite(2,HIGH);
              delay(200);
              delay(200);
              digitalWrite(5,LOW);
              digitalWrite(2,LOW);
            }
            Serial.println(men4); 
          }
        }
    }
  }
}
