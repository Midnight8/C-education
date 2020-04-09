# include "Main.h"
 
int Max_cal(int *p_Max){

  if(Max_count == 4){
    Max_count = 0;
    return 0;
  }
  if(*p_Max >= Array[++Max_count]){
    return Max_cal(p_Max);
  }
  else{
   *p_Max = Array[Max_count];
   return Max_cal(p_Max);
  }
}