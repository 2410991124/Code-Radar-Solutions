#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=N; i>=1; i++){
        for(int b=1; b<=i; b++)
        printf("%d ", b);
        printf("\n");
    }
}