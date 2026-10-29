#include <stdio.h>

int main(){
    int n;
    printf("please enter the number of day:");
    scanf("%d", &n);
    printf("%d days are %d weeks, %d days.", n, n / 7, n % 7);
    return 0;
}