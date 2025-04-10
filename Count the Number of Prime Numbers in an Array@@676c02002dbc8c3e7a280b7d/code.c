#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d", &a[N]);
    }
    int c=0;
    for(int i=0; i<N; i++){
        int p=1;
        for(float j=2; j<=N/2;j++){
            if(a[i]%i==0){
                p=0;
                break;
            }
            else{
                p=1;
                c=c+1;
            }
        }
    }
    printf("%d", c);
    return 0;
}