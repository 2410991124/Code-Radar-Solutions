#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d\n", &a[i]);
    }
    for(int i=0; i<N; i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            printf("%d", a[i]);
            break;
        }
    }
    return 0;
}