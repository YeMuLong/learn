#include <stdio.h>
#include <string.h>

int main() {
    char a1[128] = {'\0'}; // 初始化数组
    char a2[128] = {'\0'};
    printf("输入第一组字符: ");
    fgets(a1, sizeof(a1), stdin); // 使用 fgets 读取一行字符串
    a1[strlen(a1)-1] = '\0'; // 去除可能存在的换行符
    printf("输入第二组字符: ");
    fgets(a2,sizeof(a2),stdin);
    a2[strlen(a2)-1] = '\0';
    //获取这两组字符的长度
    int int1 = 0;
    while (a1[int1] != '\0' && ++int1);
    int int2 = 0;
    while (a2[int2] != '\0' && ++int2);
    //换位
    int i = 0;
    while(a2[i] != '\0'){
        a1[int1+i]=a2[i];
        i++;
    }
    a1[int1+int2] = '\0';
    printf("a1=%s\n",a1);
    printf("a2=%s\n",a2);

    
    return 0;
}
