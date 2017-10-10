void setup()
{
  pinMode(2,OUTPUT);
  
  pinMode(3,OUTPUT);
  
  pinMode(4,OUTPUT);
  
  pinMode(5,OUTPUT);
  
    pinMode(A2,INPUT);
    
  pinMode(A5,INPUT);
    
pinMode(A3,INPUT);

    pinMode(A4,INPUT);
    
  }
int delay1 = 80;
int delay2 = 75;

void loop()
 {
  if(analogRead(A5)<500) // in black
  {
    digitalWrite(5, HIGH);
       
    
  }
    else
    
    {
        digitalWrite(5, LOW);
    
    }
  if(analogRead(A4)<500)
  {
    digitalWrite(4, HIGH);
    
  }
    else
    
    {
        digitalWrite(4, LOW);
    
    }
    
   if(analogRead(A3)<500)
  {
    digitalWrite(3, HIGH);
    
        
        }
    
    else
    
    {
        digitalWrite(3, LOW);
    
    }
    
   if(analogRead(A2)<500)
  {
   digitalWrite(2, HIGH);
     
  }
    else
    
    {
        digitalWrite(2, LOW);
    
    }
    
  
}

