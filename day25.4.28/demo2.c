#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int a[3][4]={0};//定义
    int a1 = sizeof(a)/sizeof(a[0]);//获取行
    int a2 = sizeof(a[0])/sizeof(a[0][0]);//获取列
    for(int b=0;b<a1;b++){ //行数循环输入
        printf("请输入第%d行四个数,中间用空格分隔:",b+1);
        for(int f=0;f<a2;f++){//为避免&a[b][0];使用次数过多，直接把输入scanf做入for循环
        scanf("%d",&a[b][f]);
        }
    }
    
    int max_a[4]={0};//定义最大值
    for(int c=0;c<a1;c++){//循环获取行数
        int max = a[c][0];
        for(int e=0;e<a2;e++){//循环获取列数
            if(a[c][e]>max){//判断每一行的最大值
                max =a[c][e];//每一行最大值赋值给max
            }
        }
        max_a[c]=max;//每判断完一行都被赋值最大值
        printf("第%d组最高分为:%d\n",c,max_a[c]);//输出最大值
    }
    printf("\n");//循环输出后换行
    return 0;
}
