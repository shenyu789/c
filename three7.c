#include <stdio.h>

int main(){
    double inch, cm;
    printf("please enter your hight:");
    scanf("%lf", &inch);
    cm = inch * 2.54;
    printf("%.3lf", cm);
    return 0;
}