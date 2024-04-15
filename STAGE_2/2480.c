#include <stdio.h>
#include <stdlib.h>

//같은 눈이 3개가 나오면 10,000원+(같은 눈)×1,000원의 상금을 받게 된다.
//같은 눈이 2개만 나오는 경우에는 1,000원+(같은 눈)×100원의 상금을 받게 된다.
//모두 다른 눈이 나오는 경우에는 (그 중 가장 큰 눈)×100원의 상금을 받게 된다.

// test

int main(void)
{
  int num1, num2, num3;

//   srand(time(NULL));

//   num1 = rand() % 6 + 1;
//   num2 = rand() % 6 + 1;
//   num3 = rand() % 6 + 1;
  
//   printf("%d %d %d\n", num1, num2, num3);
  scanf("%d %d %d", &num1, &num2, &num3);

  if(num1 == num2 && num2 == num3 && num1 == num3) {
     printf("%d\n", 10000 + num1 * 1000);
  }
  else if(num1 == num2 || num2 == num3 || num1 == num3) {
      if(num1 == num2) {
         printf("%d\n", 1000 + num1 * 100);
      }
      else if(num2 == num3) {
         printf("%d\n", 1000 + num2 * 100);
      }
      else if(num1 == num3) {
         printf("%d\n", 1000 + num1 * 100);
      }
  }
  else if(num1 != num2 && num2 != num3 && num1 != num3) {
     if(num1 > num2 && num1 > num3) {
      printf("%d\n", num1 * 100);
     }
     else if(num2 > num1 && num2 > num3) {
      printf("%d\n", num2 * 100);
     }
     else if(num3 > num1 && num3 > num2) {
      printf("%d\n", num3 * 100);
     }
  }
   

   return 0;
}
