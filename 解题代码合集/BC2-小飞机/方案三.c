#include <stdio.h>

int main()
{
    int x = 0, y = 0;

    for (x = 0; x < 2; x++) /* 控制输出 x 行 */
    {
        for (y = 0; y < 7; y++) /* 控制输出 x 行的 y 列 */
        {
            if (y < 5) /* 控制输出 y 列中的' ' */
            {
                putchar(' ');
            }
            else /* 控制输出 y 列中的'*' */
            {
                putchar('*');
            }
        }

        putchar('\n'); /* 回车换行 */
    }

    for (x = 0; x < 2; x++) /* 3、4 行 */
    {
        for (y = 0; y < 12; y++)
        {
            putchar('*');
        }

        putchar('\n');
    }

    for (x = 0; x < 2; x++) /* 5、6 行 */
    {
        for (y = 0; y < 8; y++)
        {
            if ((y < 4) || (y == 5) || (y == 6))
            {
                putchar(' ');
            }
            else
            {
                putchar('*');
            }
        }

        putchar('\n');
    }

    return 0;
}