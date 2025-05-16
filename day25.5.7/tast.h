#include <stdio.h>
#include <time.h>
#include <stdlib.h>
float time1()
{
    srand(time(NULL));
    return rand() % 100;
}
void tast1()
{
    printf(".......hehhe\n");
}
/*99乘法表*/
void print_99()

{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%d\t", j, i, j * i);
        }
        printf("\n");
    }
}

/*输入两个值，输出两个值中的最大值*/
int max(int a, int b)
{
    return a > b ? a : b;
}

double fac(int n)
{
    double f = 1;
    for (int i = 1; i < n; i++)
    {
        f = f * i;
    }
    return f;
}
