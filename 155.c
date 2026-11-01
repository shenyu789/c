#include <stdio.h>

unsigned int r(unsigned int x, int n) {
    n %= sizeof(unsigned int) * 8;
    if (n <= 0)
        return x;
    return (x << n) | (x >> (B - n));
}
void p(unsigned int v) {
    for (int i = sizeof(unsigned int) * 8 - 1; i >= 0; i--) {
        if (v & (1U << i))
            putchar('1');
        else
            putchar('0');
    }
    putchar('\n');
}
int main() {
    unsigned int a;
    int s;
    scanf("%u", &a);
    scanf("%d", &s);
    p(a);
    unsigned int t = r(a, s);
    p(t);
    printf("%u\n", t);
    return 0;
}
