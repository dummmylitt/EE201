int val =0;

void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(13);
  if(val == HIGH){
    Serial.println("Hello World!");
  }
  else {
    Serial.println("It's 2023!");
  }
}
