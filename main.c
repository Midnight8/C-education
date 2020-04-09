#include <stdio.h>
#include "Main.h"

 
int main(void){

  init_Var();

  printf("first Variable state\nNumA : %d\nNumB : %d\n********************\n",NumA, NumB);

  swap_Cov(NumA,NumB);
  printf("Main Function\nCall by Value NumA : %d\nCall by value NumB : %d\n\n",NumA,NumB);
  
  swap_Cor(&NumA,&NumB);
  printf("Main Function\nCall by Reference NumA : %d\nCall by Reference NumB : %d\n\n",NumA,NumB);
  

  return 0 ;
}

