#include <stdio.h>

int main()
{
    int number1 = 0, number2 = 0, number3 = 0; /* 定义三个整型变量 */

    scanf_s("%d%d%d", &number1, &number2, &number3); /* 输入 3 个整数 */

    printf("%d\n", number2); /* 输出第二个整数的值 */

    return 0;
}