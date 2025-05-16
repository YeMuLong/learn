#include <stdio.h>
#include <stdlib.h>//rand、srand函数使用需要这个头文件
#include <time.h>//使用time函数需要这个头文件
int main() {
    int k = 0;
	int max = -1;
    int i[10]={0};
    int j = sizeof(i)/sizeof(i[0]);
    srand(time(NULL));//使用当前时间自动获取值
    for(k = 0;k<j;k++){
        i[k]=rand()%1000;
        //printf("请输入第%d个格子要存放的数:\n",k);
        printf("第%d个格子是%d\n",k+1,i[k]);
        
        if(i[k]>max){
            max = i[k];
            
        }
    }
    printf("最大值是%d\n",max);
    
	return 0;
}
