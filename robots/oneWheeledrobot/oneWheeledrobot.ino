/*
 * Judy's One Wheeled Robot
 * 
 * behavior: 
 * when it's light, LED is off and motor is on
 * when it's dark, LED is on and motor off
*/

// motor
const int motorPin = 3;


// light sensor
const int ldrPin = A1;

// LED
const int ledPin = 6;

void setup()
{
	// Set the mode of the digital pins to outputs to drive the motors
	// (the analog inputs are automatically inputs and so don’t need to be set)
	pinMode( motorPin , OUTPUT ); 
	pinMode( ledPin , OUTPUT ); 
	Serial.begin(9600);
}

void loop()
{
  
	int ldrValue = (analogRead(ldrPin));
  Serial.print( ldrValue );
  Serial.println();

  if ( ldrValue > 750 )
  {
    digitalWrite( ledPin, LOW ); 
    digitalWrite( motorPin, HIGH ); 
  }
  
  else 
  {
    digitalWrite( ledPin, HIGH ); 
    digitalWrite( motorPin, LOW ); 
  }
  
  delay (10);

}
