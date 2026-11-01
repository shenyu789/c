#include <stdio.h>

int main(int argc, char* argv[]) {
    char name1[256], name2[256];
    const char *f1, *f2;
    FILE *fp1, *fp2;
    int c1, c2, same = 1;
    if (argc == 3) {
        f1 = argv[1];
        f2 = argv[2];
    } else {
        printf("第一个文件名: ");
        if (scanf("%255s", name1) != 1)
            return 1;
        printf("第二个文件名: ");
        if (scanf("%255s", name2) != 1)
            return 1;
        f1 = name1;
        f2 = name2;
    }
    if ((fp1 = fopen(f1, "r")) == NULL) {
        fprintf(stderr, "无法打开文件: %s\n", f1);
        return 1;
    }
    if ((fp2 = fopen(f2, "r")) == NULL) {
        fprintf(stderr, "无法打开文件: %s\n", f2);
        fclose(fp1);
        return 1;
    }
    do {
        c1 = fgetc(fp1);
        c2 = fgetc(fp2);
        if (c1 != c2) {
            same = 0;
            break;
        }
    } while (c1 != EOF);
    printf("两个文件内容%s\n", same ? "相同" : "不同");
    fclose(fp1);
    fclose(fp2);
    return 0;
}