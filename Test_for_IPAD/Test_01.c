#include <stdio.h>

int main(void)
{
  int num;
  
  printf("별로 이루어진 삼각형의 크기 : ");
  scanf("%d", &num);
  
  for(int i = 0; i <= num; i++) {
    for(int j = 0; j < i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
  
  // test
}