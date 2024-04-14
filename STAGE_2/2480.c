#include <stdio.h>
//#include <rand.h>

//같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
//같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
//모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.


int main(void)
{
  int num1, num2, num3, money;
  
  num1 = rand() % 6;
  num2 = rand() % 6;
  num2 = rand() % 6;
  
  printf("%d %d %d\n", num1, num2, num3);
  
  /*if(num1 == num2 && num2 == num3 && num1 == num3) {
     money = 10000 + num1*1000;
     printf("%d\n", money);
  }
  else if(num1 == num2 && num2 == num3 && num1 == num3) {
     money = 1000 + num1*100;
     printf("%d\n", money);
  }
  else if(num1 == num2 && num2 == num3 && num1 == num3) {
     money = num1*100;
     printf("%d\n", money);
  }*/
   

   return 0;
}
