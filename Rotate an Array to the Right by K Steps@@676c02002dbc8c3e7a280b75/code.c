#include <stdio.h>
int reverse(int arr[], int x, int y){
    int temp;
    for(int r=x, j=y; i<=j; i++, j--){
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return 0;
}
int main(){
    int N;
    scanf("%d", &N);
    int a[N];
    for(int i=0; i<N; i++){
        scanf("%d ", &a[i]);
    }
    int k;
    scanf("%d", &k);
    k=k%N;
    reverse(a,0,N-1);
    reverse(a,0,k-1);
    reverse(a,k,n-1);
    for(int i=0; i<N; i++){
        printf("%d ", a[i]);
    }
    return 0;
}