#include <stdio.h>
int main(){
    int N, i;
    scanf("%d", &N);
    int a[N];
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    // int c=0;
    for(i=0; i<N; i++){
        int c=0;
        for(int j=1; j<N; j++){
            if(a[i]==a[j]);
            printf("%d", a[i]);
            c=1;
            break;
        }
        break;
    }
    if(c==0){
        printf("-1");
    }
    // printf("%d", a[i]);
    return 0;
}