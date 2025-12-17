#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6

#define buzz 9


void setup() 
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() 
{
  mi();
  mi();
  miL();
  delay(600);
  mi();
  mi();
  miL();
  delay(600);
  mi();
  sol();
  DoL();
  re();
  miL();
  delay(600);
  fa();
  fa();
  faL();
  fa();
  mi();
  mi();
  miL();
  mi();
  mi();
  re();
  re();
  mi();
  reL();
  solL();










}

void prendeTd()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
}

void apagaTd()
{
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  digitalWrite(LED4, LOW);
  digitalWrite(LED5, LOW);
}

void mi()
{
  digitalWrite(LED3, HIGH);
  tone(buzz, 659.26, 500);
  delay(600);
  noTone(buzz);
  digitalWrite(LED3, LOW);
}

void miL()
{
  digitalWrite(LED3, HIGH);
  tone(buzz, 659.26, 800);
  delay(600);
  noTone(buzz);
  digitalWrite(LED3, LOW);
}

void sol()
{
  digitalWrite(LED5, HIGH);
  tone(buzz, 789.99, 500);
  delay(600);
  noTone(buzz);
  digitalWrite(LED5, LOW);
}

void solL()
{
  digitalWrite(LED5, HIGH);
  tone(buzz, 789.99, 800);
  delay(600);
  noTone(buzz);
  digitalWrite(LED5, LOW);
}

void DoL()
{
  digitalWrite(LED1, HIGH);
  tone(buzz, 532.25, 800);
  delay(600);
  noTone(buzz);
  digitalWrite(LED1, LOW);
}

void re()
{
  digitalWrite(LED2, HIGH);
  tone(buzz, 584.33, 500);
  delay(600);
  noTone(buzz);
  digitalWrite(LED2, LOW);
}

void fa()
{
  digitalWrite(LED4, HIGH);
  tone(buzz, 698.46, 500);
  delay(600);
  noTone(buzz);
  digitalWrite(LED4, LOW);
}

void faL()
{
  digitalWrite(LED4, HIGH);
  tone(buzz, 698.46, 800);
  delay(600);
  noTone(buzz);
  digitalWrite(LED4, LOW);
}

void Do()
{
  digitalWrite(LED1, HIGH);
  tone(buzz, 532.25, 500);
  delay(600);
  noTone(buzz);
  digitalWrite(LED1, LOW);
}

void reL()
{
  digitalWrite(LED2, HIGH);
  tone(buzz, 584.33, 800);
  delay(600);
  noTone(buzz);
  digitalWrite(LED2, LOW);
}


