#include <stdio.h>

void s(char a,int n,int m){
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n;j++){
                printf("%c", a);
            }
            printf("\n");
        }
    }
int main(){
    int n,m;
    char a;
    scanf("%C %d %d", &a, &n,&m);
    s(a, n, m);
    return 0;
}