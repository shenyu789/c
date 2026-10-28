#include <stdio.h>

int main(){
    int kt;
    printf("please enter the number of kt;");
    scanf("%d", &kt);
    printf("水分子的数量为：%e", (950 * kt) / (3e-23));
    return 0;
}