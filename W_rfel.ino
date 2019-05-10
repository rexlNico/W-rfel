
int pins[6][6] = {{3}, {0,6}, {0,3,6}, {0,2,4,6}, {0,2,3,4,6}, {0,1,2,4,5,6}};
boolean used = true;
 
void setup() {
  for(int i = 0; i < 6; i++){
    pinMode(i, OUTPUT);
  }
  pinMode(7, INPUT);
}

void loop() {
  if(digitalRead(7) == HIGH){
    if(used == true){
      for(int i = 0; i< 6; i++){
         digitalWrite(i, LOW);
      }
      delay(1000);
      if(digitalRead(7) == HIGH){
      for(int i = 0; i< 6; i++){
          for(int i = 0; i< 6; i++){
            digitalWrite(i, LOW);
          }
          for(int i2 = 0; i2 < sizeof(pins[i]); i2++){
            digitalWrite(pins[i][i2], HIGH);
          }
        }
        for(int i = 0; i< 6; i++){
          digitalWrite(pins[5][i], LOW);
        }
        used = true;
      }else{
        for(int i = 0; i< 6; i++){
          for(int i = 0; i< 6; i++){
            digitalWrite(i, LOW);
          }
          for(int i2 = 0; i2 < sizeof(pins[i]); i2++){
            digitalWrite(pins[i][i2], HIGH);
          }
        }
        int r = random(0, 5);
        for(int i = 0; i< sizeof(pins[r]); i++){
          digitalWrite(pins[r][i], HIGH);
        }
        used = true;
      }
    }
  }
}
