#include <stdio.h>

int main(void) {
    char filename[256];
    FILE* fp;
    long pos;
    int c;
    printf("请输入文件名: ");
    if (scanf("%255s", filename) != 1)
        return 1;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        fprintf(stderr, "无法打开文件: %s\n", filename);
        return 1;
    }
    for (;;) {
        printf("请输入位置（负数或非数字结束）: ");
        if (scanf("%ld", &pos) != 1 || pos < 0)
            break;
        fseek(fp, pos, SEEK_SET);
        while ((c = fgetc(fp)) != EOF && c != '\n')
            putchar(c);
        putchar('\n');
    }
    fclose(fp);
    return 0;
}