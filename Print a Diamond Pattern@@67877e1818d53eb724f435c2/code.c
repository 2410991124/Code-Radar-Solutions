#include <stdio.h>
int main(){
    int i, j , n, m;
    scanf("%d", &n);
    m=n/2+1;
    for(i=1;i<=m;i++){
        for(j=1; j<=m-i; j++){
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=m+1; i<=n; i++){
        for(j=1; j<=(i-m); j++){
            printf(" ");
        }
        for(j=1; j<=2*(n-i)+1; j++){
            printf("*");
        }
    }
}