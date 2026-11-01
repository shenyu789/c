#include <stdio.h>
#include <string.h>

int s(char *p,char a){
    char* q = strchr(p, a);
    if(q==NULL){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    char str[100],a;
    scanf("%s",str);
    printf("please enter the goal alphabet:");
    scanf(" %c", &a);
    int n= s(str, a);
    printf("%d\n", n);
    return 0;
}