#include <stdio.h>
#include <stdlib.h>

typedef struct x {
    int len;
    char str[];
} x;
void s(char q[]){
    int l = 0;
    int r = sizeof(q) - 1;
    while(l<r){
        char t = q[l];
        q[l] = q[r];
        q[r] = t;
        l++;
        r--;
    }
}
int main(){
    int n;
    printf("please enter the length of the string:");
    scanf("%d", &n);
    x* a = (x*)malloc(sizeof(x) + sizeof(char) * n + 1);
    a->len = n;
    for (int i = 0; i < a->len; i++) {
        scanf(" %c", &a->str[i]);
    }
    s(a->str);
    for (int i = 0; i < n;i++){
        printf("%c", a->str[i]);
    }
        free(a);
    return 0;
}