#include <stdio.h>
int main(){
    int n, p;
    p=0;
    scanf("%d", &n);
    for(int i=2; i<n-1; i++){
        if(n%i==0){
            prime=1;
            break;
        }
        else{
            prime=0;
        }
    }
    prime==1?printf("Not Prime"):printf("Prime");
}
    