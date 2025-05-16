#include <stdio.h>
/*输出小星星*/
int main(){
    int a;
    for(a=0;a<=10;a++){
        if(a>=1&& a<=10){
            for(int b=0;b<a;b++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
