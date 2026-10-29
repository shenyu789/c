#include <float.h>
#include <stdio.h>

int main() {
    double n;
    float m;
    n = 1.0 / 3.0;
    m = 1.0 / 3.0;
    printf("%.6lf %.12lf %.16lf", n, n, n);
    printf("%.6lf %.12lf %.16lf", m, m, m);
    printf(" FLT_DIG");
    printf(" DBL_DIG");
    return 0;
}