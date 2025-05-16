#include <stdio.h>

int main() {
    int num1,num2,max,little;
    
    printf("请输入两个整数,计算大数减小数的差\n");
    printf("请输入第一个数:\t");
    scanf("%d",&num1);
    printf("请输入第二个数:\t");
    scanf("%d",&num2);

    max = num1 > num2 ? num1 : num2;
    little = max - (num1 < num2 ? num1 : num2);
    printf("两数之间的差为:%d\n",little);
    return 0;
}
