#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d", &N);
    }
    int p=1;
    for(int i=0, j=N-1; i<j; i++, j--){
        if(a[i]!=a[j]){
            p=0;
            break;
        }
    }
    if(p==1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}