#include <stdio.h>
int main(){
    int a;
    // int c=0;
    scanf("%d", &a);
    int l=0;
    if(a==0){
        l==32;
    }
    else{
        int p=1;
        while((a&1)==0){
        a=a>>1;
        p++;
    }
    int l=32-p;
    printf("%d", l);
    }
}