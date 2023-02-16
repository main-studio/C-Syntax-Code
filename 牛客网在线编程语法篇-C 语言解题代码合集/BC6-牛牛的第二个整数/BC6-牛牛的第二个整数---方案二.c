#include <stdio.h>

int main()
{
    int number[3] = {0}; /* 定义一个整型数组，数组中有 3 个元素 */
    int i = 0;

    for (i = 0; i < 3; i++) /* 循环输入 3 个整数，依次存入数组中 */
    {
        scanf("%d", &number[i]);
    }

    printf("%d", number[1]); /* 输出第二个整数的值 */

    return 0;
}