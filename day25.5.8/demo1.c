#include<stdio.h>
#include<string.h>
 //字符串复制
void copy(char* dst, char* src){
  while(*src != '\0'){//判断src是不是只剩下一个空字符
    *dst = *src;//把src的字符赋值给dst
    src++;//src字符位置每循环一次加一位
    dst++;//同理
  }
  *dst ='\0';//复制完后最后一位加空字符
}
 
int main(){
  char srcString[] = "We promptly judged antique ivory buckles for the next prize!";//要复制的字符
  char dstString[strlen(srcString)+1];
  copy(dstString,srcString);//调用函数
  printf("%s\n",dstString);//输出
}
