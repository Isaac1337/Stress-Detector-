#include <M5Core2.h>

float accX = 0.0F;  // Define variables for storing inertial sensor data
float accY = 0.0F;
float accZ = 0.0F;

float gyroX = 0.0F;
float gyroY = 0.0F;
float gyroZ = 0.0F;

float pitch = 0.0F;
float roll = 0.0F;
float yaw = 0.0F;

float temp = 0.0F;
float x_c;  //define variables to calculate the different directions
float y_c;
float z_c;
float sumx = 0; //define a variable to calculate the sum
float sumy = 0;
float sumz = 0;
float averagex; // define a variable to calculate the average
float averagey;
float averagez;
float ctr = 0;

float total_average;//define a variable to calculate the average of the three directions
float prev_total_average = 0; //define and initialize a variable to store the previous average value of each iteration.
unsigned long starttime; //define a variable to store the duration of each iteration
unsigned long endtime;

int point_sys(){
  int p=0;
  while (1) {
  M5.update();
  if (M5.BtnA.wasReleased() || M5.BtnA.pressedFor(10000, 2000)) {
    M5.Lcd.print('A');
    p = p;
    M5.Lcd.clear(WHITE);
    M5.Lcd.setCursor(0, 0);
    return (p);
    break;
  }
   
  else if (M5.BtnB.wasReleased() || M5.BtnB.pressedFor(10000, 2000)) {
    M5.Lcd.print('B');
    p = p + 3;
    M5.Lcd.clear(WHITE);
    M5.Lcd.setCursor(0, 0);
    return (p);
    break;
  }
  else if (M5.BtnC.wasReleased() || M5.BtnC.pressedFor(10000, 2000)) {
    M5.Lcd.print('C');
    p = p + 5;
    M5.Lcd.clear(WHITE);
    M5.Lcd.setCursor(0, 0);
    return (p);
    break;
  }
  }

 
  }
int question_1() {
  M5.Lcd.print("Question 1 \n");
  M5.Lcd.println("In the last month, how often have you been upset because of something that happened unexpectedly?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");

  int p = point_sys();

  return(p);
}

int question_2() {
  M5.Lcd.print("Question 2 \n");
  M5.Lcd.println("In the last month, how often have you felt that you were unable to control the important things in your life?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_3() {
  M5.Lcd.print("Question 3 \n");
  M5.Lcd.println("In the last month, how often have you felt nervous and stressed?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_4() {
  M5.Lcd.print("Question 4 \n");
  M5.Lcd.println("In the last month, how often have you felt confident about your ability to handle your personal problems?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_5() {
  M5.Lcd.print("Question 5 \n");
  M5.Lcd.println("In the last month, how often have you felt that things were going your way?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_6() {
  M5.Lcd.print("Question 6 \n");
  M5.Lcd.println("In the last month, how often have you found that you could not cope with all the things that you had to do? ");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_7() {
  M5.Lcd.print("Question 7 \n");
  M5.Lcd.print('C');
  M5.Lcd.println("In the last month, how often have you been able to control irritations in your life?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_8() {
  M5.Lcd.print("Question 8 \n");
  M5.Lcd.println("In the last month, how often have you felt that you were on top of things?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_9() {
  M5.Lcd.print("Question 9 \n");
  M5.Lcd.println("In the last month, how often have you been angered because of things that happened that were outside of your control?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_10() {
  M5.Lcd.print("Question 10 \n");
  M5.Lcd.println("In the last month, how often have you felt difficulties were piling up so high that you could not overcome them?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_11() {
  M5.Lcd.print("Question 11 \n");
  M5.Lcd.println("Do you want to be alone more than usual?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_12() {
  M5.Lcd.print("Question 12 \n");
  M5.Lcd.println("Have you been sick lately? (infections, flu,...)");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_13() {
  M5.Lcd.print("Question 13 \n");
  M5.Lcd.println("Have you been more distracted than usual?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_14() {
  M5.Lcd.print("Question 14:  \n");
  M5.Lcd.print("Have you been forgetting things more than usual?");
  M5.Lcd.println("          ");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

int question_15() {
  M5.Lcd.print("Question 15:  \n");
  M5.Lcd.print("Have you experienced vertigo/dizziness lately?");
  M5.Lcd.println("          ");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();
  return(p);
}

int question_16() {
  M5.Lcd.print("Question 16 \n");
  M5.Lcd.println("Have you experienced headaches ?");
  M5.Lcd.println("Press A for: Not at all");
  M5.Lcd.println("Press B for: Sometimes");
  M5.Lcd.println("Press C for: Constantly");
  int p = point_sys();

  return(p);
}

void cuestionario(){
   
  int total = 0;
  int x;

  x = question_1();
  total += x;
  x = question_2();
  total += x;
  x = question_3();
  total += x;
  x = question_4();
  total += x;
  x = question_5();
  total += x;
  x = question_6();
  total += x;
  x = question_7();
  total += x;
  x = question_8();
  total += x;
  x = question_9();
  total += x;
  x = question_10();
  total += x;
  x = question_11();
  total += x;
  x = question_12();
  total += x;
  x = question_13();
  total += x;
  x = question_14();
  total += x;
  x = question_15();
  total += x;
  x = question_16();
  total += x;


  M5.Lcd.println(total);

  if (total >= 60) {
  M5.Lcd.println ("high");
  M5.Lcd.println("Your stress levels are at dangerous rates. You need to reach out for medical assistance. Do not try self medication. In the meantime, you can try the following recommendations to help you feel better.");
  M5.Lcd.println("-Exercice to regulate the brain’s chemical response to stress. ");
  M5.Lcd.println("-Meditation!");
 
  }
  else if (total >= 35 && total < 60) {
  M5.Lcd.println ("medium");
  M5.Lcd.println("There is a considerable amount of stress. Here are some steps to follow:");
  M5.Lcd.println("-Exercice: regulate the brain’s chemical response to stress.");
  M5.Lcd.println("-Meditation! Focusing on your respiration can help your brain to focus");
  }
  else if (total >= 0 && total < 35) {
  M5.Lcd.println ("low");
  M5.Lcd.println("There is no significant stress. Check your sleeping schedules so you can have around 8 hours of sleep. "); }
    
  while (1){
  M5.update();
  if (M5.BtnB.wasReleased() || M5.BtnB.pressedFor(10000, 2000)) {
    M5.Lcd.print('B');
    int num = num + 1;
   
    M5.Lcd.clear(WHITE);
    M5.Lcd.setCursor(0, 0);
   
    break;
  }
    
  }
 
  }

 int movement()
 {
   int pt = 0;
   unsigned long start; //define a variable to store the duration of each iteration
   unsigned long endt;
   start = millis(); //initialize the start time to milliseconds  
   endt = start;
  while((endtime - starttime) <= 360000)
  {
  M5.IMU.getGyroData(&gyroX, &gyroY, &gyroZ); //Stores the triaxial gyroscope data of the inertial sensor to the relevant variable
  M5.IMU.getAccelData(&accX, &accY, &accZ); //Stores the triaxial accelerometer
  M5.IMU.getAhrsData(&pitch, &roll, &yaw);  //Stores the inertial sensor attitude.
  M5.IMU.getTempData(&temp);  //Stores the inertial sensor temperature to temp.
  /* The M5Core screen is 320x240 pixels, starting at the top left corner of the screen (0,0).
  gyroscope output related*/
  M5.Lcd.setCursor(0, 20);  //Move the cursor position to (x,y).
  M5.Lcd.println("Running...");
   x_c = abs(gyroX); //store the absolute value of the change in direction
  y_c = abs(gyroY);
  z_c = abs(gyroZ);
  starttime = millis(); //initialize the start time to milliseconds  
  endtime = starttime;
  while ((endtime - starttime) <= 1000) //loops every one second
  {
      sumx += x_c; //find the sum of the change in direction to find the average
      sumy += y_c;
      sumz += z_c;
      ctr++;
      M5.IMU.getGyroData(&gyroX, &gyroY, &gyroZ);
      x_c = abs(gyroX);
      y_c = abs(gyroY);
      z_c = abs(gyroZ);
      endtime = millis();
      delay(5);
  }
  averagex = (sumx / ctr); //calculate the average change in direction for one second
  averagey = (sumy / ctr);
  averagez = (sumz / ctr);
  total_average = ((averagex + averagey + averagez) / 3);
  if (abs(total_average - prev_total_average) < 60) //minimizes the number of intentional (non stress related) movements
  {
      if (total_average > 60 && total_average < 120) //for low range of movement
      {
          pt = pt + 2;
      }
      if (total_average >= 120 && total_average < 240) // for medium level of movement
      {
          pt = pt + 5;
      }
      if (total_average >= 240) //for high level of movement
      {
          pt = pt + 10;
      } 
  }
  if(pt>20){
    break;
  }
  prev_total_average = total_average;
  sumx = 0;
  sumy = 0;
  sumz = 0;
  ctr = 0;
  endt = millis();
  delay(5);
  }
  return pt;
 }

void setup() {
M5.begin(); //Init M5Core.
  M5.IMU.Init();  //Init IMU sensor.
   M5.Lcd.setTextColor(BLUE);
  M5.Lcd.setTextSize(2);
  M5.Lcd.setCursor(65, 10);
  M5.Lcd.println("Welcome");
  M5.Lcd.setCursor(3, 35);

  M5.Lcd.println(":)");
  M5.Lcd.println("Press B to continue");
  M5.Lcd.setTextColor(BLUE);
  int count, num ;
}
void loop() {
  
  while (1){
  M5.update();
  if (M5.BtnB.wasReleased() || M5.BtnB.pressedFor(100000, 200000)) {
    M5.Lcd.print('B');
   
    M5.Lcd.clear(WHITE);
    M5.Lcd.setCursor(0, 0);
   
    break;
  }
    
  }
  M5.Lcd.clear(WHITE);
  M5.Lcd.setCursor(0, 0);

  int h = movement();

  if(h>20)
  {
    M5.Lcd.clear(WHITE);
    M5.Lcd.setCursor(0, 0);
    cuestionario();
  }
  
}

