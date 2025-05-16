#include <stdio.h>
int main(){
    int num1;//定义整数
    char choice;//定义字符
    do{
        printf("请输入一整数,判断它是奇数还是偶数\n");//输出一段话
        printf("请输入:\t");//输出
        if(scanf("%d",&num1) != 1){//判断是否输入的是数字
            printf("输入有误，请重新输入！\n");//如果输入的不是数字，输出这段话，否则不会输出
        }else if(num1 % 2 != 0){
            printf("%d是奇数\n",num1);
        }else {
            printf("%d是偶数\n",num1);
        }
        printf("是否继续?(Y/n)\t");
        scanf(" %c",&choice);
    }  while (choice == 'y' || choice == 'Y');
    
    return 0;
}
