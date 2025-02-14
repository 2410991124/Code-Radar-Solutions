#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int b=1; b<=i; b++)
        printf("%d", b);
        printf("\n");
    }
}