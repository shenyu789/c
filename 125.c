#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand((unsigned)time(NULL));
    int arr[105];
    for (int i = 0; i < 100;i++){
        arr[i] = rand() % 10 + 1;
    }
    for (int i = 0; i < 100;i++){
        int flag = 0;
        for (int j = 0; j < 100 - i - 1; j++){
            if(arr[j]<arr[j+1]){
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
                flag = 1;
            }
        }
        if (flag == 0) {
            break;
        }
    }
    for (int i = 0; i < 100;i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}