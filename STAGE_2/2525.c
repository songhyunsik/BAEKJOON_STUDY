#include <stdio.h>

int main(void)
{
    int H, M;
    int PM;

    scanf("%d %d", &H, &M);
    scanf("%d", &PM);

    if(M + PM >= 60) {
    	int temp = (M + PM)/60;
    	int temp2 = (M + PM)%60;
        if(H + temp >= 24) {
           H -= 24;
           printf("%d %d\n", H+temp, temp2);
        }
        else {
           printf("%d %d\n", H+temp, temp2);
        }
        
    }
    else if(M + PM < 60) {
        printf("%d %d\n", H, M + PM);
    }
    return 0;
}
