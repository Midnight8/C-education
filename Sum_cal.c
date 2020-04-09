#include "Main.h"

int Sum_cal(int *p_Sum){

  if(Sum_count == 5){
    Sum_count = 0;
    return 0;
  }
  else{
    *p_Sum += Array[Sum_count++];
    return Sum_cal(p_Sum);
  }

}