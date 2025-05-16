#include <stdio.h>
#include "tast.h"
int main()
{
    double a = 0;
    for (int i = 1; i <= 10; i++)
    {
        a = a + fac(i);
    }
    printf("%.lf\n", a);
    return 0;
}
