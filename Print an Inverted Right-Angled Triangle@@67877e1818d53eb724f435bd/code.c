#include <stdio.h>
int main(){
    int a, b, N;
    scanf("%d", &N);
    for(a=3; a<=N; a--){
        for(b=3; b<=a; b--)
        printf("*");
        printf("\n");
    }
}