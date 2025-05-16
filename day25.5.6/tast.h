#include <stdio.h>
#include <time.h>
#include <stdlib.h>
float time1(){
    srand(time(NULL));
    return rand()%100;
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
