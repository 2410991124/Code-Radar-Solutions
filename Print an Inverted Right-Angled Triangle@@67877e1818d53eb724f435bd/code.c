#include <stdio.h>
int main(){
    int a, b;
    int N;
    scanf("%d", &N);
    for(a=1; a<=N; a++){
        for(b=N; b<=a; b--)
        printf("*");
        printf("\n");
    }
}