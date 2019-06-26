#define led1 D2
#define switch1 D3
#define led2 D4
#define switch2 D5


void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(switch1,INPUT);
  pinMode(switch2,INPUT);
  


}

void loop() {
  // put your main code here, to run repeatedly:
  boolean state1,state2;
  state1=digitalRead(switch1);
  state2=digitalRead(switch2);
  digitalWrite(led1,state1);
  digitalWrite(led2,state2);
  delay(500);
}
