#include <stdio.h>

int main(int argc, char* argv[]) {
    int i;
    FILE* fp;
    int c;
    for (i = 1; i < argc; i++) {
        fp = fopen(argv[i], "r");
        if (fp == NULL) {
            fprintf(stderr, "无法打开文件: %s\n", argv[i]);
            continue;
        }
        while ((c = fgetc(fp)) != EOF) {
            putchar(c);
        }
        fclose(fp);
    }
    return 0;
}