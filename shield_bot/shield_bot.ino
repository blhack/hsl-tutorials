#include <Shieldbot.h>;

Shieldbot shieldbot = Shieldbot();
int s1,s2,s3,s4,s5;

void setup() {
 shieldbot.setMaxSpeed(255);
 Serial.begin(9600);
}

void print_sensors()
  {
  Serial.print(s1);
  Serial.print(s2);
  Serial.print(s3);
  //Serial.print(s4);
  Serial.print(s5);
  Serial.println();
}
  
void loop() {
  s1 = shieldbot.readS1();
  s2 = shieldbot.readS2();
  s3 = shieldbot.readS3();
  s4 = shieldbot.readS4();
  s5 = shieldbot.readS5();
  print_sensors();
  
  //shieldbot.forward();
  //shieldbot.backward();
  //Turn to the left (quickly)
  //shieldbot.drive(-127,127); //these numbers could be closer to zero if you want to turn slowly
  //Turn to the right (quickly)
  //shieldbot.drive(127,-127);
  
  //Turn to the left (slowly)
  //shieldbot.drive(-32,32); //these numbers could be closer to zero if you want to turn slowly
  //Turn to the right (quickly)
  //shieldbot.drive(32,-32);
  
  delay(10);
}
