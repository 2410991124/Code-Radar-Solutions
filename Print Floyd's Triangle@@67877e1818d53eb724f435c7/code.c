#include <stdio.h>
int main(){
    int a, b, n, i=1;
    scanf("%d", &n);
    for(a=1; a<=n; a++){
        for(b=1; b<=a; b++)
        printf("%d",i);
        i++;
    }
    printf("\n");
    return 0;
}