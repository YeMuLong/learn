#include <stdio.h>
/*计算快递费用小程序*/
int main() {
    int weight = 7;  //包裹重量
	int cost;  //快递费用

    if (weight <= 1) {
        cost = 10;
    } else if (weight <= 5) {
        cost = 10 + (weight - 1) * 5;
    } else {
        cost = 10 + 4 * 5 + (weight - 5) * 3;
    }
    printf("快递费用为：%d元\n", cost);
    return 0;
}
