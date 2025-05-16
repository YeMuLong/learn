#include <stdio.h>
int main(){
    int num1,num2;
    printf("请输入两个整数,判段是否相等\n");
    printf("请输入第一个数:\t");
    scanf("%d",&num1);
    printf("请输入第二个数:\t");
    scanf("%d",&num2);
    if(num1 == num2){
        printf("两数相等\n");
    }else{
        printf("两数不相等\n");
    }

    return 0;
}
