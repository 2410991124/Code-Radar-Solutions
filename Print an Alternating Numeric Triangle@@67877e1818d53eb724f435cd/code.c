#include <stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    for(int i=1; i<=N; i++){
        for(int b=1; b<=i; b++)
       if(i==1){
        printf("%d", 1);
        printf("\n");
        break;
       }
       else if("b%2!=0"){
        printf("%d ", 0);
        // printf("\n");
       }
       else{
        printf("%d", 1);
       }
    }
}