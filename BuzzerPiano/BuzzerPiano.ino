/*Burak Dogucu
 * 02/03/2019(dd/mm/yyyy)
 * An arduino program that plays a note determined by which button is pressed
*/
int C = 4;
int D = 5;
int E = 6;
int F = 7;
int G = 8;
int A = 9;
int B = 10;
int buzzerPin = 11;

void setup() {
  // put your setup code here, to run once:
  //pinMode(A,INPUT);
  //pinMode(B,INPUT);
  pinMode(C,INPUT);
  pinMode(D,INPUT);
  pinMode(E,INPUT);
  pinMode(F,INPUT);
  pinMode(G,INPUT);
  pinMode(buzzerPin,OUTPUT);
  
}

void loop() {
  //depending on the input it plays any of these frequencies
  if(digitalRead(C) == HIGH){
    tone(buzzerPin,261);
  }
  else if(digitalRead(D) == HIGH){
    tone(buzzerPin,293);
  }
  else if(digitalRead(E) == HIGH){
    tone(buzzerPin,329);
  }
  else if(digitalRead(F) == HIGH){
    tone(buzzerPin,349);
  }
  else if(digitalRead(G) == HIGH){
    tone(buzzerPin,391);
  }
  else if(digitalRead(A) == HIGH){
    tone(buzzerPin,440);
  }
  else if(digitalRead(B) == HIGH){
    tone(buzzerPin,493);
  }
  //if no key is pressed than it doesn't play anything
  else{
    noTone(buzzerPin);
  }
  
  }
  
  
