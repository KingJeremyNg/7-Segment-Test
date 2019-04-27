#include <Servo.h>
#include <stdio.h>

Servo segment0;
Servo segment1;
Servo segment2;
Servo segment3;
Servo segment4;
Servo segment5;
Servo segment6;

Servo segment7;
Servo segment8;
Servo segment9;
Servo segment10;
Servo segment11;
Servo segment12;
Servo segment13;

Servo segment14;
Servo segment15;
Servo segment16;
Servo segment17;
Servo segment18;
Servo segment19;
Servo segment20;

Servo segment21;
Servo segment22;
Servo segment23;
Servo segment24;
Servo segment25;
Servo segment26;
Servo segment27;

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

int digit_array[4] = {num_array, num_array, num_array, num_array};

void setup() {
  segment0.attach(2);
  segment1.attach(3);
  segment2.attach(4);
  segment3.attach(5);
  segment4.attach(6);
  segment5.attach(7);
  segment6.attach(8);

  segment7.attach(9);
  segment8.attach(10);
  segment9.attach(11);
  segment10.attach(12);
  segment11.attach(13);
  segment12.attach(14);
  segment13.attach(15);

  segment14.attach(16);
  segment15.attach(17);
  segment16.attach(18);
  segment17.attach(19);
  segment18.attach(20);
  segment19.attach(21);
  segment20.attach(22);

  segment21.attach(23);
  segment22.attach(24);
  segment23.attach(25);
  segment24.attach(26);
  segment25.attach(27);
  segment26.attach(28);
  segment27.attach(29);
}

void servo90(int digit, int counter) {
  int counter2 = 0;
  segment0.write(90 * num_array[counter][counter2 + 0]);
  segment1.write(90 * num_array[counter][counter2 + 1]);
  segment2.write(90 * num_array[counter][counter2 + 2]);
  segment3.write(90 * num_array[counter][counter2 + 3]);
  segment4.write(90 * num_array[counter][counter2 + 4]);
  segment5.write(90 * num_array[counter][counter2 + 5]);
  segment6.write(90 * num_array[counter][counter2 + 6]);
  //DO CASES HERE FOR 4 DIGITS
}

void loop() {
  //GET TIME FROM RTC OR COMPUTER
  //SEPARATE TIME INTO 4 POSITIONS FOR DIGITS
  for (int digit = 0; digit < 4; digit++) {
    for (int counter = 0; counter < 10; counter++){
      servo90(digit, counter);
      delay(1000);
    }
  }
}
