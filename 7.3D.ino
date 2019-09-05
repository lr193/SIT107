
void setup() {

  Serial.begin(9600);

  pinMode(2,INPUT); //Sensor 1
  pinMode(3,INPUT); //Sensor 2
  pinMode(4,INPUT); //Sensor 3
  pinMode(12,OUTPUT); //Alarm
  pinMode(13,OUTPUT); //Alarm lights
}

void loop() {
  if(digitalRead(2) == HIGH || digitalRead(3) == HIGH || digitalRead(4) == HIGH)
        activateAlarm();
  else
        decativateAlarm();
}

void activateAlarm()
{
  digitalWrite(12,HIGH);
  digitalWrite(13,HIGH);
}

void deactivateAlarm()
{
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
}
