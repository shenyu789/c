#include <stdio.h>

void s(){
            printf("Smile ! ");
}

int main(){
    int n;
    printf("请输入打印排数:");
    scanf("%d", &n);
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            s();
        }
        printf("\n");
    }
    return 0;
}
