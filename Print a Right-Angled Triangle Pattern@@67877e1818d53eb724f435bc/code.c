#include <stdio.h>
int main(){
    int a, b, N;
    scanf("%d", &N);
    for(a=1; a<=N; a++){
        for(b=1; b<=a; b++)
        printf("* ");
        printf("\n");
    }
}