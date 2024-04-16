#include <stdio.h>

int main(void)
{
  int N, NUM[100], N2, cnt;
  
  scanf("%d", &N);
  
  cnt = 0;
  
  for(int i = 0; i < N; i++) {
    scanf("%d", &NUM[i]);
  }
  
  scanf("%d", &N2);
  
  for(int i = 0; i < N; i++) {
    if(NUM[i] == N2) {
      cnt++;
    }
  }
  
  printf("%d\n", cnt);
  return 0;
}