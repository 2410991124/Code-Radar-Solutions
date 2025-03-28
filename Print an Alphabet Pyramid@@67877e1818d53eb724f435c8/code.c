#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=0; i<=N; i++){
        for(char b='A'; b<='A'+i-1; b++)
        printf("%c ", b);
        printf("\n");
    }
}