#include <stdio.h>
#include <time.h>

void dly(double d) {
    clock_t s = clock();
    double e = d * CLOCKS_PER_SEC;
    while (clock() - s < e)
        ;
}
int main() {
    dly(1.5);
    return 0;
}