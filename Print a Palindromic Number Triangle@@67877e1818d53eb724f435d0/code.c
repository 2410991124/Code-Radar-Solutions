#include <stdio.h>
int main(){
    int i, j, a, b, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        a=1;
        b=i-1;
        for(j=1; j<=(n-i); j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("%d", a);
            a++;
        }
        for(j=1; j<=(i-1); j++){
            printf("%d", b);
            b--;
        }
        printf("\n");
    }
}