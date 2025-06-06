#include <stdio.h>
#include <stdbool.h>
bool is_leap_year(int year){
  return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}
void add_days_to_date(int *mm,int *dd,int *yy,int days_left_to_add){
int days_in_month[13] = {0;31;28;31;30;31;30;31;31;30;31;30;31}
int days_left_in_month;
while (days_left_to_add > 0){
days_left_in_month = days_in_month[*mm] - *dd;
if ( *mm == 2 && is_leap_year(*yy)){
  days_left_in_month += 1;
       }
    }
if(days_left_to_add > days_left_in_month){
    days_left_to_add -= (days_left_in_month +1);
    *dd = 1;
    if(*mm == 12){
        *mm = 1;
        *yy += 1;
    }else{
        *mm += 1;
    }
}else {
    *dd = *dd + days_left_to_add;
    days_left_to_add = 0;
    }
}
int main() {
/*int year;
printf("请输入一个年份，判断是不是闰年");
scanf("%d",&year);
is_leap_year(year);
if (is_leap_year(year)){
  printf("Leap Year\n");
}else{
  printf("Not Leap Year\n");
}*/
int mm;
int dd;
int yy;
int days_left_to_add;
printf("请输入一个日期，该日期在 1800 年至 10000 年之间，格式为 mm dd yy，并给出要添加到该日期的天数：");
scanf("%d %d %d %d",&mm,&dd,&yy,&days_left_to_add);
add_days_to_date(&mm,&dd,&yy,days_left_to_add);
printf("%d %d %d",mm,dd,yy);
}
