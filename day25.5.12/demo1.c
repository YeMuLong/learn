#include <stdio.h>

void print_array(int *arr, int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]); // 添加空格提高可读性
    }
    printf("\n"); // 换行
}

int main(void) {
    int a[5] = {1, 2, 3, 4, 5};
    int len = sizeof(a) / sizeof(a[0]); // 计算数组长度
    print_array(a, len); // 将数组长度传入函数
    return 0;
}
