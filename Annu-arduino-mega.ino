 

const unsigned int RESET = 1;
const unsigned int ACK = 2;
const unsigned int TEST = 3;
const unsigned int MUTE = 4;

const int BEP = 52; //kept 29 as spare contact
const int BUZ = 53;

int TESTstate = 0;
int RESETstate = 0;
int ACKstate = 0;
int MUTEstate = 0;

byte BUZnumber[]={0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1}; // Buzzer input configuration

int BLINK_TIME = 1000;

int x[30];
int y[30];
byte A=0;

int BUTTONstate[34];
int BLINK_LED[32] ;

int button[34];
int LED[32];
int i;
int j;


void setup() {

  pinMode(TEST, INPUT);
  pinMode(RESET, INPUT);
  pinMode(ACK, INPUT);
  pinMode(MUTE, INPUT);

pinMode(BUZ, OUTPUT);
pinMode(BEP, OUTPUT);

digitalWrite(BUZ, HIGH);
digitalWrite(BEP, HIGH);  


for (i=0; i<31; i++) x[i]=0;  
i=0;

for (i=0; i<31; i++) y[i]=0;  
i=0;

for (i=0; i<34; i++) BUTTONstate[i]=0;  
i=0;

for (i=0; i<32; i++) BLINK_LED[i]=0;  
i=0;

for (j=0; j<32; j++) LED[j]=j+22;
for (j=0; j<29; j++) pinMode(LED[j], OUTPUT);

for (j=8; j<21; j++) button[j-8]=j;// 21 digital input removed
for (j=8; j<21; j++) pinMode(button[j], INPUT);

for (j=0; j<30; j++) digitalWrite(LED[j], HIGH); 





}

void loop() {




  TESTstate = digitalRead(TEST);
  RESETstate = digitalRead(RESET);
  ACKstate = digitalRead(ACK);
  MUTEstate = digitalRead(MUTE);

if (ACKstate== HIGH)
{
 ACK_detect ();
}

if (RESETstate== HIGH)
{
 RESET_detect ();
  
  }

if (TESTstate== HIGH)
{
  RESET_detect ();
  TEST_detect();
}

if (MUTEstate== HIGH)
{
  MUTE_detect ();
  
  }




for (j=8; j<21; j++) {
  
if ((digitalRead (button[j-8])==HIGH)&& BUTTONstate[j-8] == LOW) {
  
  digitalWrite(BEP, LOW);
  BLINK_LED[j-8] = HIGH;
  BUTTONstate[j-8] = HIGH;
  if (BUZnumber[j-8]==1) digitalWrite(BUZ, LOW);               
    } 
}







i=13;
if ((analogRead(A0)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
  
}
i=i+1;


if ((analogRead(A1)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;

if ((analogRead(A2)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;

if ((analogRead(A3)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;


if ((analogRead(A4)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;

if ((analogRead(A5)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;


if ((analogRead(A6)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;


if ((analogRead(A7)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;

if ((analogRead(A8)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;

if ((analogRead(A9)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;

if ((analogRead(A10)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;

if ((analogRead(A11)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;


if ((analogRead(A12)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;


if ((analogRead(A13)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;


if ((analogRead(A14)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}
i=i+1;

if ((analogRead(A15)>800)&& BUTTONstate[i] == LOW) {

  digitalWrite(BEP, LOW);
  if (BUZnumber[i]==1) digitalWrite(BUZ, LOW);
  BLINK_LED[i] = HIGH;
  BUTTONstate[i] = HIGH;
}


// LED light 01

for (int k=0;k<29;k++) {
                     if (BUTTONstate[k] == HIGH)
                          {
                            if (BLINK_LED[k] == HIGH)
                            {
                                x[k]++;
                                if (x[k]<BLINK_TIME)
                                {
                                  digitalWrite(LED[k], LOW);
                                } else
                                {
                                  digitalWrite(LED[k], HIGH);
                                  y[k]++;

                                  if (y[k]>BLINK_TIME)
                                      {
                                        x[k]=0;
                                        y[k]=0;
                                      }
                                }
                            }else
                                 {
                                    digitalWrite(LED[k], LOW);  
                                 }
                          }



     if ((digitalRead(button[k])== LOW&&(BUTTONstate[k] == LOW)) )
     {
       digitalWrite(LED[k], HIGH);           
     }

   }



}

void ACK_detect () {
  digitalWrite(BEP, HIGH);
  digitalWrite(BUZ, HIGH);
  for ( i=0;i<30;i++) BLINK_LED[i]=0;
}

void TEST_detect () {
  for (i=0; i<30;i++) digitalWrite(LED[i], HIGH);
  for (i=0; i<30;i++){ 
  digitalWrite(LED[i], LOW);
  if (A==1) digitalWrite(BEP, LOW);
  else digitalWrite(BEP, HIGH);
  if (A==0) A=1;
  else A=0;
  delay (700);
  digitalWrite(LED[i], HIGH);
  }
  digitalWrite(BEP, HIGH);
}

void RESET_detect () {
  digitalWrite(BEP, HIGH);
  digitalWrite(BUZ, HIGH);
  for ( i=0;i<30;i++) BLINK_LED[i]=0;
  for ( i=0;i<30;i++) BUTTONstate[i]=0;
  for (i=0; i<30;i++) digitalWrite(LED[i], HIGH); 
}

void MUTE_detect () {
  digitalWrite(BUZ, HIGH);
  digitalWrite(BEP, HIGH);
}
