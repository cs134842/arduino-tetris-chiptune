void setup() {
  pinMode(2, OUTPUT);
}
int z;
int f(){
  tone(2, 349);
}
int fs(){
  tone(2, 370);
}
int g(){
  tone(2, 392);
}
int af(){
  tone(2,416);
}
int a(){
  tone(2,440);
}
int bf(){
  tone(2, 466);
}
int b(){
  tone(2, 493);
}
int c(){
  tone(2,523);
}
int cs(){
  tone(2,554);
}
int d(){
  tone(2,587);
}
int ef(){
  tone(2,622);
}
int e(){
  tone(2,659);
}
int fh(){
  tone(2,698);
}
int fsh(){
  tone(2, 740);
}
int gh(){
  tone(2, 784); 
}
int blank(){
  noTone(2);
}
void loop() {
  z=c();
  delay(500);
  z=g();
  delay(250);
  z=af();
  delay(250);
  z=bf();
  delay(500);
  z=af();
  delay(250);
  z=g();
  delay(250);
  z=f();
  delay(500);
  z=blank();
  delay(50);
  z=f();
  delay(200);
  z=af();
  delay(250);
  z=c();
  delay(500);
  z=bf();
  delay(250);
  z=af();
  delay(250);
  z=g();
  delay(500);
  z=blank();
  delay(50);
  z=g();
  delay(200);
  z=af();
  delay(250);
  z=bf();
  delay(500);
  z=af();
  delay(250);
  z=g();
  delay(250);
  z=af();
  delay(500);
  z=f();
  delay(500);
  z=blank();
  delay(50);
  z=f();
  delay(500);
  z=blank();
  delay(250);
  for (int i=0; i < 2; i++){
    z=bf();
    delay(250);
    z=cs();
    delay(250);
    z=fh();
    delay(500);
    z=ef();
    delay(250);
    z=cs();
    delay(250);
    z=c();
    delay(750);
    z=af();
    delay(250);
    z=c();
    delay(500);
    z=bf();
    delay(250);
    z=af();
    delay(250);
    z=g();
    delay(500);
    z=blank();
    delay(50);
    z=g();
    delay(250);
    z=af();
    delay(250);
    z=bf();
    delay(500);
    z=af();
    delay(250);
    z=g();
    delay(250);
    z=af();
    delay(500);
    z=f();
    delay(500);
    z=blank();
    delay(50);
    z=f();
    delay(450);
    z=blank();
    delay(250);
  }
  delay(1000);
}
