#include <stdio.h>
int reverse(int a[], int x, int y){
    for(int i=x, int j=y; i<=j; i++, j--){
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return 0;
}
int main(){
    int N, k;
    scanf("%d", &N);
    int arr[N];
    for(int r=0; r<N; r++){
        scanf("%d\n", &arr[r]);
    }
    scanf("%d", &k);
    k=k%N;
    reverse(arr,0,N-1);
    reverse(arr,0,k-1);
    reverse(arr,k,N-1);
    for(int r=0; r<N; r++){
        printf("%d\n", arr[r]);
    }
    return 0;
}