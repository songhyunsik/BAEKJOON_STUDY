#include <stdio.h>

int main(void)
{
    int H, M;
    scanf("%d %d", &H, &M);
    if(M - 45 < 0) {
        if(H==0){
            printf("%d %d\n", H+23, M+15);
        }
        else if(H!=0) {
            printf("%d %d\n", H-1, M+15);
        }
    }
    else  if(M - 45 >= 0) {
            printf("%d %d\n", H, M-45); 
    }
    return 0;
}