#include <stdio.h>

double larger_of(double n,double m){
    if(n>m){
        return n;
    }
    else
        return m;
}
int main(){
    double n, m;
    scanf("%lf %lf", &n, &m);
    n = larger_of(n, m);
    m = larger_of(n, m);
    printf("%lf %lf", n, m);
    return 0;
}