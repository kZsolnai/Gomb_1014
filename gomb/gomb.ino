int gomb = 3;
void setup() {
 Serial.begin(9600);
 pinMode(3,INPUT_PULLUP);
 

}

void loop() {
 
//Serial.println(digitalRead(3));

if(digitalRead(3)==0)
{
  Serial.println("megnyomtak! Udv a gomb!");
  delay(150);
  }else
  {
  /*  Serial.println("nem vagyok megnyomva");
    delay(100);*/
    }
  

}
