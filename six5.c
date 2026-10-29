#include <stdio.h>

int main(){
    char a,b='A';
    printf("pleaase ehter the letter:");
    scanf("%c", &a);
    int n = a - 'A';
    for (int i = 0; i <= n;i++){
        for (int y = n - i; y > 0; y--) {
            printf(" ");
        }
        for (int j = 0; j <= i;j++){
            printf("%c", (char)((int)b + j));
        }
        for (int k = i - 1; k >= 0; k--) {
            printf("%c", (char)((int)b + k));
        }
        printf("\n");
    }
    printf("%d", n);
    return 0;
}