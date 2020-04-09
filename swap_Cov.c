#include "Main.h"
#include <stdio.h>

void swap_Cov(int Cov_numA, int Cov_numB){
  Cov_com = Cov_numA;
  Cov_numA = Cov_numB;
  Cov_numB = Cov_com;
  printf("swap_Cov function\nCall by Value numA : %d\nCall by Value numB : %d\n\n",Cov_numA,Cov_numB);
}