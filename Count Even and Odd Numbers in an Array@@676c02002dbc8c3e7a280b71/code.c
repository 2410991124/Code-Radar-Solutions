#include <stdio.h>
int main(){
    int N;
    int e=0, o=0;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<N; i++){
        if(a[i]%2==0){
            e=e+1;
        }
        else{
            o=o+1;
        }
    }
    printf("%d %d", e, o);
    return 0;
}