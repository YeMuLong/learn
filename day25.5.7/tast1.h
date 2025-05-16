#include <stdio.h>
#include <string.h>
void counter1_1(char *str, int counter[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a')
        {
            counter[0]++;
        }
        else if (str[i] == 'b')
        {
            counter[1]++;
        }
        else if (str[i] == 'c')
        {
            counter[2]++;
        }
        else if (str[i] == 'd')
        {
            counter[3]++;
        }
    }
}
