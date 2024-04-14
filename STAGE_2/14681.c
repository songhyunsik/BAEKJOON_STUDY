#include <stdio.h>

int main(void)
{
    int x,y;
    int quadrant_n;

    scanf("%d %d", &x, &y);

    if(x > 0 && y > 0) {
        quadrant_n = 1;
        printf("%d\n", quadrant_n);
    }
    else if(x < 0 && y > 0) {
        quadrant_n = 2;
        printf("%d\n", quadrant_n);
    }
    else if(x < 0 && y < 0) {
        quadrant_n = 3;
        printf("%d\n", quadrant_n);
    }
    else if(x > 0 && y < 0) {
        quadrant_n = 4;
        printf("%d\n", quadrant_n);
    }

    return 0;
}