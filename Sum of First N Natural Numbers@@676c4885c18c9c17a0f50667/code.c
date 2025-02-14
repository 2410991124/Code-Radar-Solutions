#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int s =0;
    for( int i=1; i<=N; i++){
        s+=i;
        printf("%d", s);
    }
}