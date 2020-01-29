//www.elegoo.com
//2016.12.08

int ledPin1 = 5;
int ledPin2 = 4;
int ledPin3 = 3;
int ledPin4 = 2;
int buttonApin = 9;
int buttonBpin = 8;
int buttonCpin = 7;
int buttonDpin = 6;

byte leds = 0;

void setup() 
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
  pinMode(buttonCpin, INPUT_PULLUP);  
  pinMode(buttonDpin, INPUT_PULLUP);  
}

void loop() 
{
  if (digitalRead(buttonApin) == LOW)
  {
    digitalWrite(ledPin1, HIGH);
  }
  if (digitalRead(buttonBpin) == LOW)
  {
    digitalWrite(ledPin2, HIGH);
  }
  if (digitalRead(buttonCpin) == LOW)
  {
    digitalWrite(ledPin3, HIGH);
  }
  if (digitalRead(buttonDpin) == LOW)
  {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(ledPin4, LOW);
  }
  if (
  digitalRead(ledPin1) == HIGH &&
  digitalRead(ledPin2) == HIGH &&
  digitalRead(ledPin3) == HIGH
  )
  {
    digitalWrite(ledPin4, HIGH);
  }
}
