#include <stdio.h>

struct n {
    char f[20];
    char m[20];
    char l[20];
};
struct p {
    long s;
    struct n nm;
};
void pr(struct p ar[], int sz) {
    int i;
    for (i = 0; i < sz; i++) {
        printf("%s, %s", ar[i].nm.l, ar[i].nm.f);
        if (ar[i].nm.m[0] != '\0')
            printf(" %c.", ar[i].nm.m[0]);
        printf(" -- %ld\n", ar[i].s);
    }
}
void pr2(struct p x) {
    printf("%s, %s", x.nm.l, x.nm.f);
    if (x.nm.m[0] != '\0')
        printf(" %c.", x.nm.m[0]);
    printf(" -- %ld\n", x.s);
}
int main(void) {
    struct p a[5] = {{302039823, {"Flossie", "M", "Dribble"}},
                     {123456789, {"Alice", "", "Smith"}},
                     {234567890, {"Bob", "A", "Brown"}},
                     {345678901, {"Cindy", "B", "Lee"}},
                     {456789012, {"David", "", "Wang"}}};
    printf("版本a（传地址）：\n");
    pr(a, 5);
    printf("\n版本b（传值）：\n");
    int i;
    for (i = 0; i < 5; i++)
        pr2(a[i]);
    return 0;
}
