#include <stdio.h>

int main(){
    int year, month, day, nowyear, nowmonth, nowday, n = 0, m = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printf("Please enter your birthday:");
    scanf("%d %d %d", &year, &month, &day);
    printf("Please enter the today's date:");
    scanf("%d %d %d", &nowyear, &nowmonth, &nowday);
    for (int i = year; i < nowyear;i++){
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0){
            n++;
        }
    }
    n += (nowyear - year) * 365;
    if (month > nowmonth){
        for (int i = nowmonth; i < month;i++){
            for (int j = 1; j <= 11;j+=2){
                if (arr[i - 1] == j && j <= 7 || arr[i-1] == 8 || arr[i-1] == 10 || arr[i-1] == 12) {
                    m += 31;
                    break;
                } else if (arr[i - 1] == j + 1 && j + 1 <= 6 || j == 9 ||
                           j == 11) {
                    m += 30;
                    break;
                }
            }
            if(arr[i-1] == 2){
                m -= 2;
            }
        }
        n -= m;
    } else {
        for (int i = month; i < nowmonth; i++) {
            for (int j = 1; j <= 11; j += 2) {
                if (arr[i - 1] == j && j <= 7 || arr[i - 1] == 8 || arr[i - 1] == 10 || arr[i - 1] == 12) {
                    m += 31;
                } else if (arr[i - 1] == j + 1 && j + 1 <= 6 || j == 9 ||
                           j == 11) {
                    m += 30;
                }
            }
            if (arr[i] == 2) {
                m -= 2;
            }
        }
    }
    n += nowday - day; 
    printf("据你出生已经：%d 天。", n);
    return 0;
}