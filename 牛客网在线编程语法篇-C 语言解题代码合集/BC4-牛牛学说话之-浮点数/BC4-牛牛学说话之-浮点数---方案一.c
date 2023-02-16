#include <stdio.h>

int main()
{
    float number = 0; /* 定义一个浮点型变量 */

    scanf("%f", &number); /* 输入一个浮点数 */

    printf("%.3f", number); /* 输出我们输入的浮点数，并保留三位小数 */

    return 0;
}