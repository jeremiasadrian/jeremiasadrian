
const int D2=2, D3=3;

void setup() 
{
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  digitalWrite(D2, LOW); 
  digitalWrite(D3, LOW); 
}

void loop() 
{
  digitalWrite(D2, HIGH);     
  delay(9);                       
  digitalWrite(D2, LOW);
  delay(1); 
  digitalWrite(D3, HIGH);    
  delay(9);         
  digitalWrite(D3, LOW);     
  delay(1);        
}
