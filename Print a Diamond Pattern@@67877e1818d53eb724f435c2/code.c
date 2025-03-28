#include <stdio.h>
int main(){
    int i, j , n, m;
    scanf("%d", &n);
    // m=n/2+1;
    for(i=1;i<=n;i++){
        for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n+1; i<=2*n-1; i++){
        for(j=1; j<=(i-n); j++){
            printf(" ");
        }
        for(j=1; j<=2*((2*n-1)-i)+1; j++){
            printf("*");
        }
        printf("\n");
    }
}