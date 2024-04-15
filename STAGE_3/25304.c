#include <stdio.h>

int main(void)
{
  int sum1, sum2 = 0, num1, num2, price;
  
  scanf("%d", &sum1);
  scanf("%d", &num1);
  
  for(int i = 0; i < num1; i++) {
    scanf("%d %d", &price, &num2);
    sum2 += price * num2;
  }
  
  if(sum1 == sum2) {
    printf("Yes\n");
  }
  else {
    printf("No\n");
  }
  
  return 0;
}