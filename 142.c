#include <stdio.h>
#include <string.h>

struct m {
    char n[12];
    char ab[4];
    int d;
};
int f(int dy, char* ms, int y) {
    struct m t[] = {{"january", "jan", 31},   {"february", "feb", 28},
                    {"march", "mar", 31},     {"april", "apr", 30},
                    {"may", "may", 31},       {"june", "jun", 30},
                    {"july", "jul", 31},      {"august", "aug", 31},
                    {"september", "sep", 30}, {"october", "oct", 31},
                    {"november", "nov", 30},  {"december", "dec", 31}};
    int i, mon = -1, s = 0;
    if (ms[0] >= '0' && ms[0] <= '9') {
        mon = atoi(ms) - 1;
    } else {
        char tmp[12];
        for (i = 0; ms[i]; i++)
            tmp[i] = tolower(ms[i]);
        tmp[i] = '\0';
        for (i = 0; i < 12; i++) {
            if (strcmp(tmp, t[i].n) == 0 || strcmp(tmp, t[i].ab) == 0) {
                mon = i;
                break;
            }
        }
    }
    if (mon < 0 || mon > 11)
        return -1;
    for (i = 0; i < mon; i++)
        s += t[i].d;
    s += dy;
    if (mon >= 1) {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
            s++;
    }
    return s;
}
int main() {
    int d, y, res;
    char m[20];
    scanf("%d %s %d", &d, m, &y);
    res = f(d, m, y);
    if (res == -1)
        printf("err\n");
    else
        printf("%d\n", res);
    return 0;
}
