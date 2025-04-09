#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d", &a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(int i=1; i<N; i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}