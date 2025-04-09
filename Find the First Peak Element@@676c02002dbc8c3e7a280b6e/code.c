#include <stdio.h>
int main(){
    int N;
    int p=1;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d\n", &a[i]);
    }
    for(int i=0; i<N; i++){
        if(i>0 && a[i]<=a[i-1]){
            p=0;
            // printf("%d", a[i]);
            // break;
        }
        if(i<N-1 && a[i]<=a[i+1]){
            p=0;
        }
        if(p==1){
            printf("%d", a[i]);
            break;
        }
    }
    return 0;
}