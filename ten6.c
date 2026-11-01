#include <stdio.h>
#include <stdlib.h>

typedef struct x{
    int len;
    double arr[];
} x;

void s(double arr[],int n){
    for (int i = 0; i < n;i++){
        int flag = 0;
        for (int j = 0; j < n - i - 1;j++){
            if(arr[j]<arr[j+1]){
                double t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                flag = 1;
            }
        }
        if(flag==0){
            break;
        }
    }
    for (int i=0; i < n;i++){
        printf("%lf\n", arr[i]);
    }
}
int main(){
    int n;
    printf("plese enter the lenth of array:");
    scanf("%d", &n);
    x* a = (x*)malloc(sizeof(x) + sizeof(double) * n);
    a->len = n;
    for (int i = 0; i < a->len;i++){
        scanf("%lf", &a->arr[i]);
    }
    s(a->arr, a->len);
    free(a);
    return 0;
}