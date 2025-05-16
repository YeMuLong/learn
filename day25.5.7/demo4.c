#include <stdio.h>
#include <string.h>
#include "tast1.h"
int main()
{
    int counter1[4] = {0, 0, 0, 0};                   // 计数器1
    int counter2[4] = {0, 0, 0, 0};                   // 计数器2
    char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad"; // 字符1
    char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";  // 字符2
    counter1_1(s1, counter1);                         // 调用函数
    counter1_1(s2, counter2);                         // 调用函数

    int flag = 0;
    for (int c = 0; c < sizeof(counter1) / sizeof(int); c++)
    {
        for (int d = 0; d < sizeof(counter2) / sizeof(int); d++)
        {
            if (counter1[c] == counter2[d])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
    }
    if (flag == 1)
    {
        printf("Anagram!\n");
    }
    else
    {
        printf("Not Anagram\n");
    }

    return 0;
}
