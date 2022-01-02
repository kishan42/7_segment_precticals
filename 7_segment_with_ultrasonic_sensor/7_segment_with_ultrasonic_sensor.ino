long duration;
long distance;

int seg_a = 11; // declare the variables
int seg_b = 10;
int seg_c = 9;
int seg_d = 8;
int seg_e = 7;
int seg_f = 6;
int seg_g = 5;
int seg_dp = 4;
int com = 12;


void setup() {
  Serial.begin(9600);
  pinMode(seg_a,OUTPUT); // configure all pins used to outputs
  pinMode(seg_b,OUTPUT);
  pinMode(seg_c,OUTPUT);
  pinMode(seg_d,OUTPUT);
  pinMode(seg_e,OUTPUT);
  pinMode(seg_f,OUTPUT);
  pinMode(seg_g,OUTPUT);
  pinMode(seg_dp,OUTPUT);
  pinMode(com,OUTPUT);
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);
 
}

void loop()
{   
   digitalWrite(3,LOW);
   delayMicroseconds(2);
   digitalWrite(3,HIGH);
   delayMicroseconds(10);
   digitalWrite(3,LOW);
   

  duration = pulseIn(2,HIGH);

  distance = duration/58.2;

   Serial.println(distance);

   //digitalWrite(com,HIGH);

  switch(distance){ // switch statemet to select the number 
  
  case 0: // set relevent segments HIGH and others LOW
  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,LOW);
  digitalWrite(seg_e,LOW);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,HIGH);
  digitalWrite(seg_dp,HIGH);
  break;

  case 1:
  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  digitalWrite(seg_dp,HIGH);
  
  break;

  case 2:
  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,HIGH);
  digitalWrite(seg_d,LOW);
  digitalWrite(seg_e,LOW);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,LOW);
  digitalWrite(seg_dp,HIGH);
  break;

  case 3:
  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,LOW);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,LOW);
  digitalWrite(seg_dp,HIGH);
  break;

  case 4:
  digitalWrite(seg_a,HIGH);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,LOW);
  digitalWrite(seg_dp,HIGH);
  break;

  case 5:
  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,LOW);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,LOW);
  digitalWrite(seg_dp,HIGH);
  break;

  case 6:
  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,HIGH);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,LOW);
  digitalWrite(seg_e,LOW);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,LOW);
  digitalWrite(seg_dp,HIGH);
  break;

  case 7:
  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,HIGH);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,HIGH);
  digitalWrite(seg_g,HIGH);
  digitalWrite(seg_dp,HIGH);
  break;

  case 8:
  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,LOW);
  digitalWrite(seg_e,LOW);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,LOW);
  digitalWrite(seg_dp,HIGH);
  break;

  case 9:
  digitalWrite(seg_a,LOW);
  digitalWrite(seg_b,LOW);
  digitalWrite(seg_c,LOW);
  digitalWrite(seg_d,LOW);
  digitalWrite(seg_e,HIGH);
  digitalWrite(seg_f,LOW);
  digitalWrite(seg_g,LOW);
  digitalWrite(seg_dp,HIGH);
  break;

 
  //delay(1000); // Show each number for 1 second
  }

   delay(500);
}
