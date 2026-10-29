#include <stdio.h>

int main(){
    double n = 1e6,i=0;
    while(n>=0){
        n += n * 0.08;
        n -= 1e5;
        i++;
    }
    printf("%.0lf\n", i);
    return 0;
}