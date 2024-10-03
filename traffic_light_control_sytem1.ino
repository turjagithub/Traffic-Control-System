void setup()
{
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH); // For green LED
  delay(20000); // Wait for 20000 millisecond(s)
  digitalWrite(2, LOW);

  
  digitalWrite(4, HIGH); // For yellow LED
  delay(6000);  // Wait for 6000 millisecond(s)
  digitalWrite(4, LOW);
  
  
  digitalWrite(7, HIGH);  // For the red LED
  delay(20000); // Wait for 20000 millisecond(s)
  digitalWrite(7, LOW); 
}
