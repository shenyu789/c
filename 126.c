#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n = 0, m = 0, a = 0, b = 0, c = 0, d = 0, f = 0, e = 0, r = 0, t = 0;
    srand((unsigned)time(NULL));
    int arr[1005];
    for (int i = 0; i < 1000; i++) {
        arr[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < 1000; i++) {
        if(arr[i]==1){
            n++;
        }
        if (arr[i] == 2) {
            m++;
        }
        if (arr[i] == 3) {
            a++;
        }
        if (arr[i] ==4) {
            b++;
        }
        if (arr[i] == 5) {
            c++;
        }
        if (arr[i] == 6) {
            d++;
        }
        if (arr[i] == 7) {
            e++;
        }
        if (arr[i] == 8) {
            f++;
        }
        if (arr[i] == 9) {
            r++;
        }
        if (arr[i] == 10) {
            t++;
        }
    }
    printf("%d %d %d %d %d %d %d %d %d %d", n, m, a, b, c, d, e, f, r, t);
    return 0;
}