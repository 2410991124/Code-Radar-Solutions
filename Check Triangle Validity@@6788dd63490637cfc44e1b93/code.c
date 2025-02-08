#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    // if((a^2 + b^2 == c^2)||(b^2 + c^2 == a^2)||(a^2 + c^2 == b^2)){
    //     printf("Valid");
    // }
    if((a*a + b*b < c*c)||(b*b + c*c < a*a)||(a*a + c*c < b*b)){
        printf("Invalid");
    }
    else{
        printf("Valid");
    }
    return 0;
}