#include <stdio.h>
#include <stdlib.h>
int main()
{
    char a[124][124] = {'\0'};
    int i;
    int a1 = sizeof(a) / sizeof(a[0]); // 获取行数
    int a2 = sizeof(a[0])/sizeof(a[0][0]);//获取列数
    for (i = 0; i < 10; i++)
    {
        printf("请输入10位数组");
        for (int y = 0; y < i; y++)
        {
            scanf("%c", &a[i][y]);
        }
    }
    for(int q=0;q<i;q++){
        printf("%s",a[i][q]);
    }
    return 0;
}
