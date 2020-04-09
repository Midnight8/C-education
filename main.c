#include <stdio.h>
#include "Main.h"

 
int main(void){

  struct Employee employee1;
  printf("종업원 이름을 입력해주세요 : ");
  scanf("%s",employee1.name);
  printf("종업원의 주민번호를 입력해주세요 : ");
  scanf("%s",employee1.social_num);
  printf("종업원의 급여정보를 입력해주세요 : ");
  scanf("%d",&employee1.salary_info);
  printf("\n입력하신 종업원의 정보는 다음과 같습니다.\n # 종업원의 이름 : %s\n # 종업원의 주민번호 : %s\n # 종업원의 급여정보 : %d원\n", employee1.name, employee1.social_num, employee1.salary_info);

  return 0;
}

