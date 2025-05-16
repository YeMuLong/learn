#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {         //彩票小游戏
    // 初始化随机数种子
    srand(time(0));

    // 生成一个两位数的彩票号码
    int lottery = rand() % 90 + 10;  // 生成范围在10到99之间的随机数

    // 提示用户输入一个两位数
    int guess;
    printf("请输入一个两位数的彩票号码: ");
    scanf("%d", &guess);

    // 提取彩票号码的十位和个位
    int lotteryDigit1 = lottery / 10;
    int lotteryDigit2 = lottery % 10;

    // 提取用户输入的十位和个位
    int guessDigit1 = guess / 10;
    int guessDigit2 = guess % 10;

    // 判断用户是否中奖及中奖等级
    if (guess == lottery) {
        printf("恭喜你！中奖了！奖金：10000美元。\n");//输入号码与中奖号码一致
    } else if ((guessDigit1 == lotteryDigit2) && (guessDigit2 == lotteryDigit1)) {
        printf("恭喜你！中奖了！奖金：3000美元。\n");//输入号码与中奖号码顺序不一致
    } else if ((guessDigit1 == lotteryDigit1) || (guessDigit2 == lotteryDigit2)) {
        printf("恭喜你！中奖了！奖金：1000美元。\n");//输入的号码其中一位数和中奖号码一致正序
    } else if ((guessDigit1 == lotteryDigit2) || (guessDigit2 == lotteryDigit1)) {
        printf("恭喜你！中奖了！奖金：500美元。\n");//输入的号码其中一位数和中奖号码一致倒序
    } else {
        printf("很遗憾，你没有中奖。彩票号码是：%d。\n", lottery);
    }

    return 0;
}
