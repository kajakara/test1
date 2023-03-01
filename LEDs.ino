void setup() {
  
  pinMode(10, OUTPUT); //blue led
  pinMode(11, OUTPUT); //red led
  pinMode(12, OUTPUT); //yellow led

  Serial.begin(9600); //starts serial communication @9600 bps

}

void loop() {
  
  if(Serial.available()) {

    char val = Serial.read();

    if(val == 'r'){
      digitalWrite(11, HIGH);
    }
    if(val == 'b'){
      digitalWrite(10, HIGH);
    }
    if(val == 'y'){
      digitalWrite(12, HIGH);
    }
    if(val == 'f'){
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
    }
  }

}
