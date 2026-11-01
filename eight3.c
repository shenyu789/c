#include <stdio.h>
#include <ctype.h>

int main(){
    int n = 0, m = 0,l;
    while((l=getchar())!=EOF){
        if(isalpha(l)!=0){
            if(islower(l)!=0)
                n++;
            else
                m++;
        }
    }
    printf("大写字母有：%d 个，小写字母有：%d 个",m, n);
    return 0;
}