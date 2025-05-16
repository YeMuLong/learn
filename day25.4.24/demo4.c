#include    <stdio.h>
int main(){//生成一个菱形
    for(int i=1;i<=9;i+=2){
        for (int j=1;j<= 5 - i;j++)
        {
            printf(" ");
        }
        for (int o=1;o<=i;o++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
