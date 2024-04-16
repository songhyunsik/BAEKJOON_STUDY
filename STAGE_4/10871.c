#include <stdio.h>

int main(void)
{
  int N, NUM[10000], N2;
  
  scanf("%d %d", &N, &N2);
  
  for(int i = 0; i < N; i++) {
    scanf("%d", &NUM[i]);
  }
  
  for(int i = 0; i < N; i++) {
    if(NUM[i] < N2) {
      printf("%d ", NUM[i]);
    }
  }
  printf("\n");
  
  return 0;
}