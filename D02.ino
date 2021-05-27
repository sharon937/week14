int sensorValue = 0;
int ldd = 0;
int pp = 9;
void setup()
{ 
  pinMode(A0, INPUT);
  pinMode(pp, OUTPUT);
  Serial.begin(9600);
}

void loop()
{ 
  sensorValue = analogRead(A0);
  Serial.print("read=");
  Serial.println(sensorValue);
  ldd = map(sensorValue,830,1000,0,300);
  if(ldd<0)ldd=0;
  analogWrite(pp,ldd);
  delay(100);
 }int sensorValue = 0;
int ldd = 0;
int pp = 9;
void setup()
{ 
  pinMode(A0, INPUT);
  pinMode(pp, OUTPUT);
  Serial.begin(9600);
}

void loop()
{ 
  sensorValue = analogRead(A0);
  Serial.print("read=");
  Serial.println(sensorValue);
  ldd = map(sensorValue,830,1000,0,300);
  if(ldd<0)ldd=0;
  analogWrite(pp,ldd);
  delay(100);
 }
