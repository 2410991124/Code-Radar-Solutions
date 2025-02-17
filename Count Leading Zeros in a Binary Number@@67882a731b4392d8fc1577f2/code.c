#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int p=1;
    while((a&1)==0){
        a=a>>1;
        p++;
    }
    int c=32-p;
    printf("%d", c);
}