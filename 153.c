#include <stdio.h>

int s(int n) {
    int cnt = 0;
    unsigned int m = n;
    while (m) {
        m = m & (m - 1);
        cnt++;
    }
    return cnt;
}
int main() {
    int num;
    printf("输入 int：");
    scanf("%d", &num);
    printf("置 1 的位数 = %d\n", s(num));
    return 0;
}
