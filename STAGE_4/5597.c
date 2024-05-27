#include <stdio.h>

int main()
{
    int student[29], roll_book[31], cnt[30]={0};

    for(int i = 1; i <= 28; i++) {
        scanf("%d", &student[i]);
    }
    for(int i = 1; i <= 30; i++) {
        roll_book[i] = i;
    }
    for(int i = 1; i <= 28; i++) {
        for(int j = 1; j <= 30; j++) {
            if(student[i] == roll_book[j]) {
                cnt[j] = 1;
            }
        }
    }
    for(int j = 1; j <= 30; j++) {
        if(cnt[j] == 0) {
            printf("%d\n", roll_book[j]);
        }
    }
    return 0;
}