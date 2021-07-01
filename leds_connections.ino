// C++ code
// LEDs connetion

int LED1R=3;
int LED1B=5;
int LED1G=6; 
int LED2R=9;
int LED2B=10;
int LED2G=11; 

int pot1=A0; // which controls the Red colour of the first LED
int pot2=A1; // which controls the Blue colour of the first LED
int pot3=A2; // which controls the Green colour of the first LED
int pot4=A3; // which controls the Red colour of the second LED
int pot5=A4; // which controls the BLue colour of the second LED
int pot6=A5; // which controls the Green colour of the second LED

int val1;
int val2;
int val3;
int val4;
int val5;
int val6;


void setup()
{
  
  pinMode(LED1R, OUTPUT);
  pinMode(LED1B, OUTPUT);
  pinMode(LED1G, OUTPUT);
  pinMode(LED2R, OUTPUT);
  pinMode(LED2B, OUTPUT);
  pinMode(LED2G, OUTPUT);
  
}

void loop()
{
  
  val1= analogRead(pot1);
  val2= analogRead(pot2);
  val3= analogRead(pot3);
  val4= analogRead(pot4);
  val5= analogRead(pot5);
  val6= analogRead(pot6);
  
  val1=map(val1,0, 1023, 0, 255);
  val2=map(val2,0, 1023, 0, 255);
  val3=map(val3,0, 1023, 0, 255);
  val4=map(val4,0, 1023, 0, 255);
  val5=map(val5,0, 1023, 0, 255);
  val6=map(val6,0, 1023, 0, 255);
  
  analogWrite(LED1R, val1);
  analogWrite(LED1B, val2);
  analogWrite(LED1G, val3);
  analogWrite(LED2R, val4);
  analogWrite(LED2B, val5);
  analogWrite(LED2G, val6);
  
  
}
