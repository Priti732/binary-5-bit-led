int input;
int binaryNumber;

int n;
int j=5;
void setup() {
  Serial.begin(9600);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  
  
Serial.print("Enter the number to be converted:");

}
int binary(int number) {
  int r=0;
  while(number!=0) {
    r = (number % 2 == 0 ? 0 : 1)+(r*10); 
    number /= 2;
  }
  return r;
}

void loop() 
{
if(Serial.available())
{
int input = Serial.read();                
  binaryNumber = binary(input);
for(int i=0;i<5;i++)
{
  n=binaryNumber%10;
  binaryNumber/=10;
  
    if(n==0)
    {
      digitalWrite(j,LOW);
      
    }
    else
    digitalWrite(j,HIGH);

    j++;
  }



}
}
