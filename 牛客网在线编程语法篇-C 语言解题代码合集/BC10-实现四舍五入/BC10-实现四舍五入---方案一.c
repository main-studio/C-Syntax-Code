#include <stdio.h>

int main()
{
    float num = 0;

    scanf("%f", &num);

    if (num > 0) /* 对输入的浮点数进行正负数的判断 */
    {
        num += 0.5;
    }
    else
    {
        num -= 0.5;
    }

    printf("%d\n", (int)num); /* 强制转换数据类型为整数类型，输出此数 */

    return 0;
}