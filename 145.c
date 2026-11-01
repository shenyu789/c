#include <stdio.h>

struct s {
    char fn[20];
    char ln[20];
    int sc;
};
void sort(struct s* p, int n) {
    int i, j;
    struct s t;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (p[j].sc > p[j + 1].sc) {
                t = p[j];
                p[j] = p[j + 1];
                p[j + 1] = t;
            }
}
void show(struct s* p, int n) {
    int i;
    for (i = 0; i < n; i++)
        printf("%s %s %d\n", p[i].fn, p[i].ln, p[i].sc);
}
int main() {
    struct s a[5] = {{"a", "x", 88},
                     {"b", "y", 72},
                     {"c", "z", 95},
                     {"d", "m", 66},
                     {"e", "n", 79}};
    int sz = 5;
    sort(a, sz);
    show(a, sz);
    return 0;
}
