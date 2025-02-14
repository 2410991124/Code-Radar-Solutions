#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=N; i>=1; i--){
        for(char b='A'+i-1; b>='A'; b--)
        printf("%c", b);
        printf("\n");
    }
}