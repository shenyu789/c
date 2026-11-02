#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pick(int a[], int n, int k) {
    int i, j, t;
    for (i = 0; i < k; i++) {
        j = rand() % (n - i) + i;
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        printf("%d ", a[i]);
    }
    printf("\n");
}
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    srand(time(0));
    pick(a, 10, 3);
    return 0;
}