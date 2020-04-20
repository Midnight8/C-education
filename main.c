#include <stdio.h>
#include "Main.h"

 
int main(void){

  init_Num();

  for(int j = 0; j<5; j++){
    printf("%d번째 정수를 입력해주세요. : ",j+1);
    scanf("%d",&Array[j]);
  }

int Max = Array[0], Min = Array[0], Sum = 0;

  Max_cal(&Max);
  Min_cal(&Min);
  Sum_cal(&Sum);
 

  printf("배열의 최대값 : %d\n배열의 최솟값 : %d\n배열의 합 : %d\n ",Max, Min, Sum);

  return 0 ;
}

