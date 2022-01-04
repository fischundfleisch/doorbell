// this is for arduino uno and an unnamed sound dedector from my old kit
// is placed near doorbell, triggers A0 when louder than standard sound in hallway 
// A0 is Pin 14 on UNO

const int LED = 12;
int noise_ = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Willkommen im Setup!");
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop(){
  noise_ = analogRead(A0);
  Serial.println(noise_);
  
  if (noise_ > 200) {
    digitalWrite(LED, HIGH);
    Serial.println("LED ein");
  }
  else {
    digitalWrite(LED, LOW);
    Serial.println("LED aus");
  }
    
    
