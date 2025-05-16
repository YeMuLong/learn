#include <stdio.h>
int main(){
    int a,b,c;
    //获得第一个整数
    printf("请输入一个整数:");
    scanf("%d",&a);
    printf("1.做加法,2.做减法,3.做乘法,4.做除法:");
    scanf("%d",&b);
    printf("请输入一个整数:");
    scanf("%d",&c);
    if(b==1){
        printf("%d+%d=%d\n",a,c,a+c);
    }else if(b==2){
        printf("%d-%d=%d\n",a,c,a-c);
    }else if(b==3){
        printf("%d*%d=%d\n",a,c,a*c);
    }else if(b==4){
        printf("%d/%d=%d\n",a,c,a/c);
    }
    return 0;
}
