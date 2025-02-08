#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    a=a>>31;
    if(a%2==1){
        printf("Not Set");
    }
    else{
        printf("Set");
    }
}