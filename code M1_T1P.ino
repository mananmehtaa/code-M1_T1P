#define ledRed 13

int interrCount = 0 ; 

void setup()
{
  pinMode(ledRed , OUTPUT);
  

  digitalWrite(ledRed , 0); 
  

  attachInterrupt(0 , interruptChange ,RISING);

}

void loop()
{
  interrCount++; 

  digitalWrite(ledRed,1);
  digitalWrite(ledRed ,0);

  delay(300);

  if(interrCount == 10)
  {
    interrCount = 0; 
    digitalWrite(ledRed , 0);
  }
}

void interruptChange()
{
  digitalWrite(ledRed,1);
}