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
    for(int i=0; i<N; i++){
        // for(j=1; j<N; j++){
        //     if(a[i])
        // }
        if(a[i]>max){
            smax=max;
            max=a[i];
        }
        else{
            if(a[i]>smac){
                smax=a[i];
            }
        }
    }
    printf("%d", smax);
    return 0;
}