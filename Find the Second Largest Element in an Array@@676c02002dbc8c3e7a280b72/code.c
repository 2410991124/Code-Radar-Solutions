#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d ", &a[i]);
    }
    int max= a[0];
    int smax= a[0];
    int f=0;
    for(int i=0; i<N; i++){
        f=0;
        // for(j=1; j<N; j++){
        //     if(a[i])
        // }
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
        else{
            if(a[i]>smax){
                smax=a[i];
                f=1;
                break;
            }
        }
    }
    if(f==1){
        printf("%d", smax);
    }
    else{
        printf("-1");
    }
    // printf("%d", smax);
    return 0;
}