#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int p=0;
    while((a&1)==0){
        a=a>>1;
        p++;
    }
    printf("%d", p);
}