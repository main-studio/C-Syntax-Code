#include <stdio.h>

int main()
{
    /* 采用变量存储数据 */
    int id = 0;
    float c_score = 0, math_score = 0, english_score = 0;

    scanf("%d;%f,%f,%f", &id, &c_score, &math_score, &english_score);

    /* 在 %f 中间加上 .2 ，写为 %.2f ，即可实现四舍五入且保留2位小数 */
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.",
           id, c_score, math_score, english_score);

    return 0;
}