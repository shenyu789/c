#include <stdio.h>

int s(int n,int m){
    int arr[32],i=0;
    if(n==0){
        return 0;
    }
    while(n>0){
        arr[i++] = n % 2;
        n = n / 2;
    }
    if(arr[m-1]==1){
        return 1;
    }
    else
        return 0;
}
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d ", s(n, m));
    return 0;
}