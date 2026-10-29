#include <stdio.h>
#define a (x) (10*(x))
#define b (X) (1.5*(x))

int main(){
    double n,tax,q,total;
    printf("please enter the time of work in a week:");
    scanf("%lf", &n);
    if(n>40){
        q = n - 40;
        total = 400 + q * 15;
    } 
    else{
        q = 0;
        total = n * 10;
    }
    if(total<=300)
        tax = total * 0.15;
    else if (total > 300 && total <= 450)
        tax = 45 + (total - 300)*0.2;
    else{
        tax = 75 + (total - 450) * 0.25;
    }
    printf("total: %.2lf tax: %.2lf final: %.2lf", total, tax, total - tax);
    return 0;
}