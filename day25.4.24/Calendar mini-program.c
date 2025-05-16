#include <stdio.h>
int main(){
    int year=0,month=0;
    printf("请输入年份：");
    scanf("%d",&year);
    printf("请输入月份:");
    scanf("%d",&month);
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)&& month==2){
        printf("%d年%d月是29天\n",year,month);
    }else if(month==2){
        printf("%d年%d月是28天\n",year,month);
    }else if(month==1,3,5,7,9,11){
        printf("%d年%d月是31天\n",year,month);
    }else if(month==4,6,8,10,12){
        printf("%d年%d月是30天\n",year,month);
    }
    return 0;
}
