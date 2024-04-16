#include <stdio.h>

int main(void)
{
  int T, num1, num2, num3 = 0;
  
  scanf("%d", &T);
  
  for(int i = 0; i < T; i++) {
    scanf("%d %d", &num1, &num2);
    num3 = num1 + num2;
    printf("Case #%d: %d + %d = %d\n", i + 1, num1, num2, num3);
  }
  
  return 0;
}