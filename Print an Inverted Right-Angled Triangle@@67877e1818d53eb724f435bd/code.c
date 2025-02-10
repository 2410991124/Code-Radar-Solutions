#include <stdio.h>
int main(){
    int a, b, N;
    scanf("%d", &N);
    for(a=N; a>=1; a--){
        for(b=1; b<=a; b++)
        printf("* ");
        printf("\n");
    }
}