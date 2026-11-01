#include <stdio.h>
#include <ctype.h>

void s(void){
    int a;
    while ((a = getchar()) != EOF) {
        if(isalpha(a)){
            printf("It's a letter\n");
            if(islower(a)){
                printf("%d\n", a - 'a'+1);
            }
            else
                printf("%d\n", a - 'A'+1);
        }
        else
            printf("-1\n");
    }
}
int main(){
    s();
    return 0;
}