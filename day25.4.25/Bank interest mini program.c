#include <stdio.h>
/*银行利息小程序*/
int main(){
    int year = 20;
    double money = 10;
    for(int i = 0;i<=year;i++){
        printf("第%d年,%.2lf\n",i,money);
        money += money*0.2;
    }
    return 0;
}
