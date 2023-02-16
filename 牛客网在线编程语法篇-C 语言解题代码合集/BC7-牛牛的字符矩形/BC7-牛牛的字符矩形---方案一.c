#include <stdio.h>

int main()
{
    char c = 0;

    scanf("%c", &c); /* 输入一个字符 */

    printf("%c%c%c\n", c, c, c); /* 输出字符组成的 3 * 3 矩形 */
    printf("%c%c%c\n", c, c, c);
    printf("%c%c%c\n", c, c, c);

    return 0;
}