#include <stdint.h>
#ifndef READLINE_H
#define READLINE_H

#include <Arduino.h>
#include <Zumo32U4LineSensors.h>
#include "Zumo32U4Motors.h"
#include "colorVariables.h"

#define NUM_SENSORS 5 

class readLine {
  
private:
  Zumo32U4LineSensors lineSensors;
  uint16_t lineSensorValues[NUM_SENSORS];
  String getSideColor(int);
  String getMidColor(int);
  void calibrateLineSensors();

public:
  readLine();

  // void LineSensorColors(const uint16_t* sensorValues);
  String getColor0();
  String getColor1();
  String getColor2();
  String getColor3();
  String getColor4();
  // String color1;
  // String color2;
  // String color3;
  // String color4;
  // String color5;

  String color0;
  String color1;
  String color2;
  String color3;
  String color4;
  void identifyColor();
};

#endif
