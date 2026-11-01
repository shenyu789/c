#include <stdio.h>
#include <ctype.h>

char get_first(void){
    int n;
    while((n=getchar())!=EOF){
        if(isspace(n)){
            continue;
        }
        else
            break;
    }
    while(getchar()!='\n')
        continue;
    return n;
}
int main(){
    printf("%c", get_first());
    return 0;
}