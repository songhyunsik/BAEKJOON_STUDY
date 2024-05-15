#include <stdio.h>

int main()
{
    int N, M, i[100], j[100], box[100], box2;

    scanf("%d %d", &N, &M);

    for(int x = 1; x <= N; x++) {
        box[x] = x;
    }

    for(int x = 1; x <= M; x++) {
        scanf("%d %d", &i[x], &j[x]);
    }

    for(int x = 1; x <= M; x++) {
        box2 = box[i[x]];
        box[i[x]] = box[j[x]];
        box[j[x]] = box2;
    }

    for(int x = 1; x <= N; x++) {
        printf("%d ", box[x]);
    }    

    printf("\n");
    return 0;
}

// 1 2 3 4 5

// // 1 2
// 2 1 3 4 5

// // 3 4
// 2 1 4 3 5

// // 1 4
// 3 1 4 2 5

// // 2 2
// 3 1 4 2 5