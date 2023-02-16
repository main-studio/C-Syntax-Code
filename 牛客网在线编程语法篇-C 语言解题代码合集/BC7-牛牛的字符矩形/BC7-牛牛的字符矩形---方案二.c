#include <stdio.h>

int main()
{
    char c = 0;
    int i = 0, j = 0;

    scanf("%c", &c); /* 输入一个字符 */

    for (i = 0; i < 3; i++) /* 控制行数 */
    {
        for (j = 0; j < 3; j++) /* 控制一行输出字符的个数 */
        {
            printf("%c", c);
        }

        printf("\n"); /* 换行 */
    }

    return 0;
}