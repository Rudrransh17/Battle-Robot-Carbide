/* Differential steering with 2 DC motors 
 *  controlled using Arduino and FlySky CT6B
 */

// =========================================

// Input Pins, Channel 1 and 3
#define CH4 2
#define CH3 3


// --------------------

// Output Pins
#define P4 4
#define P5 5
#define P6 6
#define P7 12


// --------------------

// Integers to represent values from sticks and pots
int ch4Value;
int ch3Value;



// =========================================

// Function to read the number of a specified channel and convert to the range provided.
int readChannel(int channelInput, int minLimit, int maxLimit, int defaultValue)
{
  int ch = pulseIn(channelInput, HIGH, 30000);
  if (ch < 100)
  {
    return defaultValue;
  }
    
  return map(ch, 1000, 2000, minLimit, maxLimit);
}

// =========================================

void setup()
{
  // Serial Monitor
  Serial.begin(115200);

  // Input Pins
  pinMode(CH4, INPUT);
  pinMode(CH3, INPUT);


  // Output Pins
  pinMode(P4, OUTPUT);
  pinMode(P5, OUTPUT);
  pinMode(P6, OUTPUT);
  pinMode(P7, OUTPUT);

}

// =========================================

void loop()
{
  // Getting the values for each channel.
  ch4Value = readChannel(CH4, -100, 100, 0);
  ch3Value = readChannel(CH3, -100, 100, 0);

  // Printing to Serial Monitor.
  Serial.print("Ch4: ");
  Serial.print(ch4Value);
  Serial.print(" | Ch3: ");
  Serial.println(ch3Value);

  
if(ch3Value == 0  && ch4Value == 0)
  {
    // Motor 1
    digitalWrite(P4, LOW);
    digitalWrite(P5, LOW);

    // Motor 2
    digitalWrite(P6, LOW);
    digitalWrite(P7, LOW);
  }

  // ---------------------------

  else if(ch3Value > 25)
  {
    if(ch4Value > 25)
    {
      digitalWrite(P4, LOW);
      digitalWrite(P5, LOW);

      digitalWrite(P6, HIGH);
      digitalWrite(P7, LOW);
    }

    else if(ch4Value < -25)
    {
      digitalWrite(P4, HIGH);
      digitalWrite(P5, LOW);

      digitalWrite(P6, LOW);
      digitalWrite(P7, LOW);
    }

    else
    {
      digitalWrite(P4, HIGH);
      digitalWrite(P5, LOW);

      digitalWrite(P6, HIGH);
      digitalWrite(P7, LOW);
    }
  }

  // ---------------------------------

  else if(ch3Value < -25)
  {
    if(ch4Value > 25)
    {
      digitalWrite(P4, LOW);
      digitalWrite(P5, LOW);

      digitalWrite(P6, LOW);
      digitalWrite(P7, HIGH);
    }

    else if(ch4Value < -25)
    {
      digitalWrite(P4, LOW);
      digitalWrite(P5, HIGH);

      digitalWrite(P6, LOW);
      digitalWrite(P7, LOW);
    }

    else
    {
      digitalWrite(P4, LOW);
      digitalWrite(P5, HIGH);

      digitalWrite(P6, LOW);
      digitalWrite(P7, HIGH);
    }
  }

  else
  {
    if(ch4Value > 25)
    {
      digitalWrite(P4, HIGH);
      digitalWrite(P5, LOW);

      digitalWrite(P6, LOW);
      digitalWrite(P7, HIGH);
    }

    else if(ch4Value < -25)
    {
      digitalWrite(P4, LOW);
      digitalWrite(P5, HIGH);

      digitalWrite(P6, HIGH);
      digitalWrite(P7, LOW);
    }

    else
    {
      digitalWrite(P4, LOW);
      digitalWrite(P5, LOW);

      digitalWrite(P6, LOW);
      digitalWrite(P7, LOW);
    }
  }
}

// ============ END OF PROGRAM ==============
