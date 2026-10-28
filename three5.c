#include <stdio.h>
int s(int month) {
    int m = 0;
    int s[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    m = s[month - 1];
    return m;
}

int main() {
    int year, month, day, nowyear, nowmonth, nowday, n = 0, m = 0;
    printf("Please enter your birthday:");
    scanf("%d %d %d", &year, &month, &day);
    printf("Please enter the today's date:");
    scanf("%d %d %d", &nowyear, &nowmonth, &nowday);
    for (int i = year; i <= nowyear; i++) {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0) {
            n++;
        }
    }
    if ((year % 4 == 0 && year % 100 != 0 || year % 400 == 0) && month > 2){
            n--;
    }
    if ((nowyear % 4 == 0 && nowyear % 100 != 0 || nowyear % 400 == 0) && nowmonth <= 2) {
            n--;
    }
        n += (nowyear - year) * 365;
    for (int i = month; i < nowmonth;i++){
        n += s(i);
    }
    for (int i = nowmonth; i < month; i++) {
        n -= s(i);
    }
        n += nowday - day;
    printf("据你出生已经：%d 秒。", n*86400);
    return 0;
}