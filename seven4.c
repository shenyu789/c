#include <stdio.h>

int main(){
    int i = 0,n;
    while ((n=getchar())!=EOF){
        if(n=='#')
            break;
        else if(n=='.'){
            i++;
        }
        else if(n=='!'){
            i++;
        }
    }
    printf("进行了%d次替换", i);
    return 0;
}