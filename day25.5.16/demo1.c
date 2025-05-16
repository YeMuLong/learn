#include <stdio.h>

int main() {
    int num;
    char choice;
    
    do {
        printf("请输入一个整数（输入非数字将退出程序）:\n");
        if (scanf("%d", &num) != 1) {
            printf("输入有误，请重新输入！\n");
            // 清空输入缓冲区
            while (getchar() != '\n');
        } else if (num % 2 != 0) {
            printf("是奇数\n");
        } else {
            printf("是偶数\n");
        }
        
        printf("是否继续输入？(y/n): ");
        scanf(" %c", &choice); // 注意前面的空格，用于跳过可能的换行符
    } while (choice == 'y' || choice == 'Y');
    
    return 0;
}
