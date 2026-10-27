#include <stdio.h>

int main(){
    double inch, cm;
    printf("Please enter the length of inches.\n");
    scanf("%lf", &inch);
    cm = inch * 2.54;
    printf("%.4lf", cm);
    return 0;
}
