#include "PID.h"
#include <iostream>

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_, double fraction) {
  Kp = Kp_ * fraction;
  Ki = Ki_ * fraction;
  Kd = Kd_ * fraction;

  p_error = -999.9; // init value
  i_error = 0;
  d_error = 0;

}

void PID::UpdateError(double cte) {
  // updating D
  if (p_error == -999.9){ // if this is the first frame
    d_error = 0;
  }
  else{
    d_error = cte - p_error;
  }

  // updating P&I
  p_error = cte;
  i_error += cte;
  
}

double PID::TotalError() {
  return 0;
}

double PID::GetSteer(){
  double steer;
  double p_factor = Kp * p_error;
  double d_factor = Kd * d_error;
  double i_factor = Ki * i_error;
  steer = - p_factor - d_factor - i_factor;

  if(steer > 1){
    steer = 1;
  }

  if(steer < -1){
    steer = -1;
  }

  return steer;
}


