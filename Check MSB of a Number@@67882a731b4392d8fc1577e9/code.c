#include <stdio.h>
#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    // a=a>>10;
    if((a>>31)&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}