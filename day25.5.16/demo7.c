#include <stdio.h>
int main(){
    int num1, num2, num3, num4, max;
    printf("请输入四个整数,输出它们的最大值\n");
    printf("请输入第一个数:\t");
    scanf("%d",&num1);
    printf("请输入第二个数:\t");
    scanf("%d",&num2);
    printf("请输入第三个数:\t");
    scanf("%d",&num3);
    printf("请输入第四个数:\t");
    scanf("%d",&num4);
    max = (num1 > num2 ? (num1 > num3 ? (num1 > num4 ? num1 : num4) : (num3 > num4 ? num3 : num4)) 
                       : (num2 > num3 ? (num2 > num4 ? num2 : num4) : (num3 > num4 ? num3 : num4)));
    printf("最大值是: %d\n", max);
    return 0;
}
