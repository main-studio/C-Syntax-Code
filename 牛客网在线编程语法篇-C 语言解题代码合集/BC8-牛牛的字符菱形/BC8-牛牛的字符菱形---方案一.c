#include <stdio.h>

int main()
{
    char c = 0;

    scanf("%c", &c); /* 输入一个字符 */

    printf("  %c  \n", c); /* 输出菱形 */
    printf(" %c%c%c \n", c, c, c);
    printf("%c%c%c%c%c\n", c, c, c, c, c);
    printf(" %c%c%c \n", c, c, c);
    printf("  %c  \n", c);

    return 0;
}