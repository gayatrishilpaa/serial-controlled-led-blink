int numb;
String msg="Enter number of blinks";
int del=1000;
int pin=7;

void setup()
{
 Serial.begin(9600); 
 pinMode(pin, OUTPUT);
}

void loop()
{
	Serial.println(msg);
  while(Serial.available()==0){
  
  }
    numb=Serial.parseInt();
    for(int i=0; i<numb; i++){
  		digitalWrite(pin, HIGH);
    	delay(del);
  		digitalWrite(pin, LOW);
    	delay(del);
  }
}