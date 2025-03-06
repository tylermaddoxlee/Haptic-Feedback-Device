#include <NewPing.h> // calculates distance automatically

#define MAX_DISTANCE 400 //13 feet equivalent
#define motorDown 6 //6
#define motorBack 7 //7 for practice 
#define motorLeft 5
#define motorRight 4

bool stair = 0, left = 0, right = 0, wall = 0, fall = 0;
int dDown, rDown, dBack, rBack;
int dRight, rRight, dLeft, rLeft;

//sonar(TRIGGER, ECHO, MAX_DISTANCE)
NewPing sonarDown(11,10,100); //blue echo, green trig
NewPing sonarBack(3,2,MAX_DISTANCE); //13 12
NewPing sonarLeft(9,8,100);
NewPing sonarRight(13,12,100);

void setup(){
  Serial.begin(9600);
  pinMode(motorLeft, OUTPUT);
  pinMode(motorRight, OUTPUT);
  pinMode(motorBack, OUTPUT);
  pinMode(motorDown, OUTPUT);
}

void loop(){

  // reference readings
  rDown = dDown;
  rBack = dBack;
  rLeft = dLeft;
  rRight = dLeft;

  // comparison readings

  dLeft = sonarLeft.ping_cm(); 
  dRight = sonarRight.ping_cm(); 
  dBack = sonarBack.ping_cm(); 
  dDown = sonarDown.ping_cm();
  
  fall = !dDown;
  wall = abs(dLeft - dRight) < 5 && dLeft && dRight;
  stair = dDown < 80 && dDown;
  right = dRight < 100 && dRight;
  left = dLeft < 100 && dLeft; 

  debugPrint();

  if(rBack - dBack > 5 && dBack) digitalWrite(motorBack, HIGH);
  else digitalWrite(motorBack, LOW);

  if(stair || fall) digitalWrite(motorDown, HIGH);
  else digitalWrite(motorDown, LOW);

  if(wall || right || stair) digitalWrite(motorRight, HIGH);
  else digitalWrite(motorRight, LOW);

  if(wall || left || stair) digitalWrite(motorLeft, HIGH);
  else digitalWrite(motorLeft, LOW);

  delay(500);

}

void debugPrint(){
  Serial.print("fall "); Serial.print(fall); Serial.println(dDown); 
  Serial.print("wall "); Serial.println(wall);   
  Serial.print("stair "); Serial.println(stair); 
  Serial.print("right "); Serial.print(right); Serial.println(dRight); 
  Serial.print("left "); Serial.print(left);   Serial.println(dLeft); 
  Serial.print("Back "); Serial.println(dBack);
  Serial.println();
}