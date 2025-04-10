#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    for(int  i=0; i<N; i++){
        for(int j=1; j<N; j++){
            if(a[i]==a[j]);
            break;
        }
    }
    printf("%d", a[i]);
    return 0;
}