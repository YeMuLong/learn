#include <stdio.h>

int main() {
    char make;

    // 从键盘接收一个字符
    printf("请输入一个字符: ");
    scanf("%c", &make);
    printf("原始字符: %c (ASCII: %d)\n", make, make);
    make &=~(0x01 << 3 | 0x01 << 5);
    // 输出结果（以字符和ASCII码形式）
    printf("处理后的字符: %c (ASCII: %d)\n", make, make);

    return 0;
}
