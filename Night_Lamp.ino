//Code Written By RAJDEEP BARUAH

int led=10;
int sensorValue=0;
int ldr =A0;
int val=0;
void setup()
{
  //put your setup code here,to run once;
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop()
{ 
  //put your main code here, to run repeatedly:
  sensorValue=analogRead(ldr);
  
  Serial.println(sensorValue);
  val = (255-sensorValue)/4;
  analogWrite(led,val);
  delay(200);
}
