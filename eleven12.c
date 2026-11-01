#include <stdio.h>
#include <ctype.h>

int main(){
    int l, n = 0, m = 0, k = 0, z = 0, b = 0, h = 0;
    while ((l = getchar()) != EOF) {
        if (isalpha(l)) {
            if(islower(l))
                n++;
            else
                b++;
            if (!k) {
                m++;
                k = 1;
            }
        } else if(isspace(l) || ispunct(l)){
            k = 0;
            if(ispunct(l))
                z++;
        }
        else{
            h++;
        }
    }
    printf("大写字母有：%d个，小写字母有：%d个，标点符号有：%d个，单词有：%d个,数字有：%d个",b,n,z,m,h);
    return 0;
}