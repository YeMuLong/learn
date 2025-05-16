#include <stdio.h>
int main(){
    printf("本段代码展示倒序输出\n");
    int a;
    printf("请输入三位数:");
    scanf("%d",&a);
    int e = a/100;//百位
    int f = (a/10)%10;//十位
    int d = a%10;//个位
    int t = d*100+f*10+e;
    printf("倒序输出：%d\n",t);

    return 0;
}
