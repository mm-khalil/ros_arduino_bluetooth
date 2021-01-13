void setup() 
{  Serial.begin(9600);
   pinMode(LED_BUILTIN, OUTPUT);  }
  
void loop() 
{  if(Serial.available() > 0) //means Blutooth is connected
   {    
        int Blue_value = Serial.read(); //values are alsways in ASCII
        Serial.print("Blue ASCII Value = ");
        Serial.println(Blue_value);
           
        if (Blue_value == 48) 
        {   digitalWrite(LED_BUILTIN, LOW);   
            Serial.println("led OFF");          
        }
        else if (Blue_value == 49)
        {   digitalWrite(LED_BUILTIN, HIGH);
            Serial.println("led ON");                           
        } 
   }
}

                         
 
  
