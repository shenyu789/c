int i = 0, k = 0;
printf("please enter your name:");
scanf("%s", s);
printf("please enter your first name:");
scanf("%s", c);
i = strlen(s);
k = strlen(c);
printf("%s ", s);
printf("%s\n", c);
for (int j = 0; j < i + k; j++) {
    if (j == i - 1)
        printf("%d", i);
    else
        printf(" ");
}
printf("%d\n", k);
printf("%s ", s);
printf("%s\n", c);
for (int j = 0; j < i + 2; j++) {
    if (j == 0) {
        printf("%d", i);
    } else if (j == i) {
        printf("%d", k);
    }
    printf(" ");
}
return 0;
}