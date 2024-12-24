int incomingByte;

int red = D2;
int yellow = D3;
int green = D1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red,HIGH);
  if(Serial.available()){
    incomingByte = Serial.read();

    if(incomingByte == 'H'){
      digitalWrite(red,LOW);
      digitalWrite(yellow,HIGH);
      delay(1000);
      digitalWrite(yellow,LOW);
      digitalWrite(green,HIGH);
      delay(3000);
      digitalWrite(green,LOW);
      digitalWrite(red,HIGH);
      delay(1000);
    }

  }
  
} 
