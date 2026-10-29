#include <stdio.h>
#include <math.h>

void s(double n){
    printf("%lf", pow(n, 3));
}

int main(){
    double a;
    scanf("%lf", &a);
    s(a);
    return 0;
}