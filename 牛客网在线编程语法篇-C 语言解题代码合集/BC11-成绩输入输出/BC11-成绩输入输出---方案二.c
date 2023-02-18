#include <stdio.h>

int main()
{
    /* 采用数组存储数据 */
    int score[3] = {0};

    scanf("%d %d %d", &score[0], &score[1], &score[2]);

    printf("score1=%d,score2=%d,score3=%d", score[0], score[1], score[2]);

    return 0;
}