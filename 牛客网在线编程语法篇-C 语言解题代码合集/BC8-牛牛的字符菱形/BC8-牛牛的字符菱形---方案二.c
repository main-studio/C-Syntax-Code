#include <stdio.h>

#define DIAMOND_ROW 5 /* 字符菱形的行数，须为单数 */

int main()
{
    int x = 0, y = 0;          /* 控制字符菱形行与列的输出 */
    int num = DIAMOND_ROW / 2; /* 正三角与倒三角的行数 */
    char ch = 0;

    scanf("%c", &ch);

    /* 输出正三角形 */
    for (y = 1; y <= num; y++)
    {
        for (x = y; x <= num; x++) /* 控制空格 */
        {
            putchar(' ');
        }
        for (x = 1; x <= ((2 * y) - 1); x++) /* 控制字符 */
        {
            putchar(ch);
        }

        putchar('\n');
    }

    /* 输出中间一行 */
    for (x = 1; x <= DIAMOND_ROW; x++)
    {
        putchar(ch);
    }
    putchar('\n');

    /* 输出倒三角形 */
    for (y = num; y >= 1; y--) /* 更改的此处 */
    {
        for (x = y; x <= num; x++)
        {
            putchar(' ');
        }
        for (x = 1; x <= ((2 * y) - 1); x++)
        {
            putchar(ch);
        }

        putchar('\n');
    }

    return 0;
}