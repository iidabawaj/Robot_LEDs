
int columns[]= { 10, 11,  12,  13,  A0,  A1,  A2,  A3};


const byte rows[]= {2, 3, 4, 5, 6, 7, 8, 9};



void setup()
{
 
pinMode (13, OUTPUT);
pinMode (12, OUTPUT);
pinMode (11, OUTPUT);
pinMode (10, OUTPUT);
pinMode (9, OUTPUT);
pinMode (8, OUTPUT);
pinMode (7, OUTPUT);
pinMode (6, OUTPUT);


pinMode (5, OUTPUT);
pinMode (4, OUTPUT);
pinMode (3, OUTPUT);
pinMode (2, OUTPUT);
pinMode (A4, OUTPUT);
pinMode (A3, OUTPUT);
pinMode (A2, OUTPUT);
pinMode (A1, OUTPUT);

  digitalWrite(10, OUTPUT);
 digitalWrite(11, OUTPUT);
 digitalWrite(12, OUTPUT);
 digitalWrite(13, OUTPUT);
 digitalWrite(A0, OUTPUT);
 digitalWrite(A1, OUTPUT);
 digitalWrite(A2, OUTPUT);
digitalWrite(A3, OUTPUT);
}


                       
void loop()
{
  // put your main code here, to run repeatedly:
for ( int i=0; i<8; i++)
{
    for (int j=0; j<8; j++)
  {
    digitalWrite(columns[i], LOW);
    digitalWrite(rows[j], HIGH);
    delay(50);
    digitalWrite(rows[j], LOW);
    digitalWrite(columns[i], HIGH);
  }
}

}

