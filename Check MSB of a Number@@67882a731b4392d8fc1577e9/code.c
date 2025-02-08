#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    a=a>>31;
    if(a%2==0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}