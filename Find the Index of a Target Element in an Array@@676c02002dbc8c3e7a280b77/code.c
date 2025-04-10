#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int T;
    scanf("%d", &T);
    int f=0;
    for(int i=0; i<=N; i++){
        if(arr[i]==T){
            printf("%d", i);
            f=1;
            break;
        }
    }
    if(f==0){
        printf("-1");
    }
    return 0;
}