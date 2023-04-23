//arduino+python控LED
char serialData;
int LedPin1 = 3;
int LedPin2 = 5;
int LedPin3 = 13;

void setup() 
{
  pinMode(LedPin1, OUTPUT);
  pinMode(LedPin2, OUTPUT);
  pinMode(LedPin3, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  if(Serial.available() > 0)
  {
    serialData = Serial.read();
    Serial.print(serialData);

    if(serialData == '1')
    {
      digitalWrite(LedPin1, LOW);
      digitalWrite(LedPin2, LOW);
      digitalWrite(LedPin3, LOW);
    }
      
    else if(serialData == '2')
    {
      digitalWrite(LedPin1, LOW);
      digitalWrite(LedPin2, LOW);
      digitalWrite(LedPin3, HIGH);
    }
      
    else if(serialData == '3')
    {
      digitalWrite(LedPin1, LOW);
      digitalWrite(LedPin2, HIGH);
      digitalWrite(LedPin3, LOW);
    }
      
    else if(serialData == '4')
    {
      digitalWrite(LedPin1, LOW);
      digitalWrite(LedPin2, HIGH);
      digitalWrite(LedPin3, HIGH);
    }

    else if(serialData == '5')
    {
      digitalWrite(LedPin1, HIGH);
      digitalWrite(LedPin2, LOW);
      digitalWrite(LedPin3, LOW);
    }
      
    else if(serialData == '6')
    {
      digitalWrite(LedPin1, HIGH);
      digitalWrite(LedPin2, LOW);
      digitalWrite(LedPin3, HIGH);
    } 
    else if(serialData == '7')
    {
      digitalWrite(LedPin1, HIGH);
      digitalWrite(LedPin2, HIGH);
      digitalWrite(LedPin3, LOW);
    }
      
    else if(serialData == '8')
    {
      digitalWrite(LedPin1, HIGH);
      digitalWrite(LedPin2, HIGH);
      digitalWrite(LedPin3, HIGH);
    } 
  }
}
