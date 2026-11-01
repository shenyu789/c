#include <stdio.h>

void s(int arr[3][5]){
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 5;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void a(int arr[3][5]){
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 5;j++){
            arr[i][j] *= 2;
        }
    }
}
int main(){
    int arr[3][5];
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 5;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    s(arr);
    a(arr);
    s(arr);
    return 0;
}