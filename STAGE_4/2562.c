#include <stdio.h>

int main(void)
{
    int N, num[9], num2, num3[9];

    for (int i = 0; i < 9; i++)
    {
        scanf("%d", &num[i]);
        num3[i] = num[i];
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (num[i] < num[j])
            {
                num2 = num[i];
                num[i] = num[j];
                num[j] = num2;
            }
        }
    }

    for (int i = 0; i < 9; i++)
    {
        if(num3[i] == num[8]) {
            N = i;
        }
    }

    printf("%d\n", num[8]);
    printf("%d\n", N+1);
    return 0;
}