#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>//strlen头文件，strlen = length
int main(){
    char c1[128]={'\0'};
    printf("请输入字符:");
    //fgets(目前使用的数组名'c1',表示最多可以获取的字符数,(stdin是标准输入设备'键盘输入'))
    fgets(c1,sizeof(c1),stdin);
    //fgets输入会把回车输入进去，如果不想要要替换成'\0'
    c1[strlen(c1)-1]='\0';
    printf("输入的字符是:%s\n",c1);
    printf("sizeof(c1)%lu\n",sizeof(c1));
    printf("strlen(c1);字符串的个数为%lu\n",strlen(c1));
    return 0;
}
