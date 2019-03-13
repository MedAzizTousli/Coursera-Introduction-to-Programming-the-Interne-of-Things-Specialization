void setup()
  {  
pinMode(13,OUTPUT);  
Serial.begin(9600);
  }
void loop()
  { 
if(Serial.available() > 0)      
    {      
char data = Serial.read();                     
if(data == '0') digitalWrite(13,0);        
else if (data == '1') digitalWrite(13,1); 
    }
  } 
