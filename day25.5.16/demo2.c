#include <stdio.h>
int main(){
    int num;
    char choice;
    
    do{
        printf("请输入一个整数数组,判断是否能被6整除(输入任意字母结束程序)\n");
        if(scanf("%d",&num) != 1){
            printf("输入有误,重新输入!\n");
        }else if(num %6 == 0){
            printf("%d可以被6整除\n",num);
        }else{
            printf("%d不可以被6整除\n",num);
        }
    printf("是否继续?(Y/n):");
    scanf(" %c",&choice);
    }while (choice == 'Y' || choice == 'y');
    return 0;
}
