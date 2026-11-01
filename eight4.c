#include <stdio.h>
#include <ctype.h>

int main(){
    int l, n = 0, m = 0, k = 0;
    while ((l = getchar()) != EOF) {
        if(isalpha(l)){
            n++;
            if(!k){
                m++;
                k = 1;
            }
        }
        else
            k = 0;
    }
    printf("每个单词平均有%.2lf个字母", n*1.0 / m);
    return 0;
}