#include <stdio.h>

int main(void)
{
    int N, num[100000], num2;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (num[i] < num[j])
            {
                num2 = num[i];
                num[i] = num[j];
                num[j] = num2;
            }
        }
    }

    printf("%d %d\n", num[0], num[N-1]);
    return 0;
}