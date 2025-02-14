#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=10; i++){
        for( int b=N; b<=N; b=b+N)
        printf("%d * %d = %d", N, i, b);
    }
    return 0;
}