#include <stdio.h>

int main(void)
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("%d\n", num1*(num2-((num2/10)*10)));             // 472 * (385 - ((385/10) * 10)) = 472 * 5
    printf("%d\n", num1*((num2/10) - ((num2/100)*10))); 
    printf("%d\n", num1*(num2/100));
    printf("%d\n", num1*num2); 

    return 0;
}