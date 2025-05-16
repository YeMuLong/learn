#include <stdio.h>
int main(){
    int i = 0,o = 0;
   for(i = 1; i<=5; i++){
    for (o = 1;o<=2*i-1;o++)
    {
        printf("*");
    }
    printf("\n");
    }
    return 0;
}
