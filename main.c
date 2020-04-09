#include <stdio.h>
#include "Main.h"

 
int main(void){

  init_Num();

  printf("first Variable state\nNumA : %d\nNumB : %d\n********************\n",numA, numB);

  swap_Cov(numA,numB);
  printf("Main Function\nCall by Reference NumA : %d\nCall by Reference NumB : %d\n",numA,numB);
  
  swap_Cor(&numA,&numB);
  printf("Main Function\nCall by Reference NumA : %d\nCall by Reference NumB : %d\n",numA,numB);
  

  return 0 ;
}

