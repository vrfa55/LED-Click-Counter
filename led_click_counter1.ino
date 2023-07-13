// C++ code
//

int x = 0;
int input = 0;
int green = 1;
int yellow = 7;
int red = 13;
int counter = 0;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(input,INPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(red,OUTPUT);

}

void loop() 
{
 x = digitalRead(input);

  if(x==1)  
  {
    counter++ ;
  }
      
    if(counter==1)  
    {
      digitalWrite(red , 1);
    }
  
    if(counter==2)  
    {   
      digitalWrite(yellow , 1);
    }

    if(counter==3)  
    {  
      digitalWrite(green , 1);
    }
    if(counter==4)  
    {  
      digitalWrite(red , 0);
      digitalWrite(yellow , 0);
      digitalWrite(green , 0);
        counter=0;
    }
    delay(250);
}