#include <stdio.h>

int main()
{
    float num = 0;

    scanf("%f", &num);

    printf("%.0f\n", num); /* 精确到小数点后 0 位，自动四舍五入 */

    return 0;
}