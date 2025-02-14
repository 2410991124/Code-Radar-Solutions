#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=N; i<=1; i--){
        for(int b='A'; b<=i; b++)
        printf("%c", b);
        printf("\n");
    }
}