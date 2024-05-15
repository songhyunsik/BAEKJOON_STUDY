#include <stdio.h>

int main()
{
    int N, M, i[100], j[100], k[100], box[100];

    //  각 방법은 세 정수 i j k로 이루어져 있으며, i번 바구니부터 j번 바구니까지에 k번 번호가 적혀져 있는 공을 넣는다
    scanf("%d %d", &N, &M);

    for(int x = 1; x <= M; x++) {
        scanf("%d %d %d", &i[x], &j[x], &k[x]);
    }

    for(int x = 1; x <= N; x++) {
        box[x] = 0;
    }

    for(int x = 1; x <= M; x++) {
        for(int y = i[x]; y <= j[x]; y++) {
            box[y] = k[x];
        }
    }

    for(int x = 1; x <= N; x++) {
        printf("%d ", box[x]);
    }

    printf("\n");
    return 0;
}

//바구니를 총 N개 가지고 있고, 각각의 바구니에는 1번부터 N번까지 번호가 매겨져 있다. 
//또, 1번부터 N번까지 번호가 적혀있는 공을 매우 많이 가지고 있다. 
//가장 처음 바구니에는 공이 들어있지 않으며, 바구니에는 공을 1개만 넣을 수 있다.

// 1 	2 	3 	4 	5

// 3	3
// 		4	4
// 1	1	1	1
// 	    2