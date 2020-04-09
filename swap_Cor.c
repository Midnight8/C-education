#include "Main.h"
#include <stdio.h>

void swap_Cor(int *Cor_numA, int *Cor_numB){
  Cor_com = *Cor_numA;
  *Cor_numA = *Cor_numB;
  *Cor_numB = Cor_com;
  printf("swap_Cor function\nCall by Reference numA : %d\nCall by Reference numB : %d\n\n",*Cor_numA,*Cor_numB);
}