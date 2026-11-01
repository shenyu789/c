#include <stdio.h>

int s(void){
    static int n = 0;
    n++;
    return n;
}

int main(){
    int m = 0,n;
    while ((m=getchar())!=EOF){
        n = s();
    }
    printf("%d", n);
    return 0;
}