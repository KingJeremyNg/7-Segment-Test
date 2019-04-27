#include <Servo.h>
#include <stdio.h>
#include <Wire.h>

Servo segment0;
Servo segment1;
Servo segment2;
Servo segment3;
Servo segment4;
Servo segment5;
Servo segment6;

int num_array[10][7] = {{ 1,1,1,1,1,1,0 },    // 0
                        { 0,1,1,0,0,0,0 },    // 1
                        { 1,1,0,1,1,0,1 },    // 2
                        { 1,1,1,1,0,0,1 },    // 3
                        { 0,1,1,0,0,1,1 },    // 4
                        { 1,0,1,1,0,1,1 },    // 5
                        { 1,0,1,1,1,1,1 },    // 6
                        { 1,1,1,0,0,0,0 },    // 7
                        { 1,1,1,1,1,1,1 },    // 8
                        { 1,1,1,0,0,1,1 }};   // 9

void setup() {
  segment0.attach(2);
  segment1.attach(3);
  segment2.attach(4);
  segment3.attach(5);
  segment4.attach(6);
  segment5.attach(7);
  segment6.attach(8);
}

void servo90(int counter) {
  int counter2 = 0;
  segment0.write(90 * num_array[counter][counter2 + 0]);
  segment1.write(90 * num_array[counter][counter2 + 1]);
  segment2.write(90 * num_array[counter][counter2 + 2]);
  segment3.write(90 * num_array[counter][counter2 + 3]);
  segment4.write(90 * num_array[counter][counter2 + 4]);
  segment5.write(90 * num_array[counter][counter2 + 5]);
  segment6.write(90 * num_array[counter][counter2 + 6]);
}

void loop() {
  for (int counter = 0; counter < 10; counter++){
    servo90(counter);
    delay(1000);
  }
}
