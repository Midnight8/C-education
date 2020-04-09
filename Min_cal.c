#include "Main.h"


int Min_cal(int *p_Min){

if(Min_count == 4){
  Min_count = 0;
  return 0;
}

if(*p_Min <= Array[++Min_count]){
    return Min_cal(p_Min);
  }
else{
   *p_Min = Array[Min_count];
   return Min_cal(p_Min);
  }
}