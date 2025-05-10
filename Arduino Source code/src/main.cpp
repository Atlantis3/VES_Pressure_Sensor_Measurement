#include <Arduino.h>


// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float voltage_readings[6];

  // Read the value from the pin A0 to A5 and put them in the list volatge _readings
  int analog_value_1 = analogRead(A0);
  voltage_readings[0] = analog_value_1 * (5.0 / 1023.0);

  int analog_value_2 = analogRead(A1);
  voltage_readings[1] = analog_value_2 * (5.0 / 1023.0);

  int analog_value_3 = analogRead(A2);
  voltage_readings[2] = analog_value_3 * (5.0 / 1023.0);

  int analog_value_4 = analogRead(A3);
  voltage_readings[3] = analog_value_4 * (5.0 / 1023.0);

  int analog_value_5 = analogRead(A4);
  voltage_readings[4] = analog_value_5 * (5.0 / 1023.0);

  int analog_value_6 = analogRead(A5);
  voltage_readings[5] = analog_value_6 * (5.0 / 1023.0);

  // send the readings over the serial communication
  Serial.write((byte*)voltage_readings,6*sizeof(voltage_readings[0]));
  delay(290);
}

