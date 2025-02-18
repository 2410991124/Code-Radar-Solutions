#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    if(a<=1){
        printf("Not Prime");
    //     return 0;
    //     // break;
    }
    for(int i=2; i*i<=a; i++){
        if(a%i==0){
            printf("Not Prime");
            return 0;
        }
        // else{
        //     printf("Prime");
        //     // brea
        // }
    }
    else{
    // printf("Prime");
    }
    // return 0;
}