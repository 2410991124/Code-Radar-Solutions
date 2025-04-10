#include <stdio.h>
int main(){
    int N, i;
    scanf("%d", &N);
    int a[N];
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    for(i=0; i<N; i++){
        for(int j=1; j<N; j++){
            if(a[i]==a[j]);
            printf("%d", a[i]);
            break;
        }
    }
    // printf("%d", a[i]);
    return 0;
}