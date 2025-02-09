#include <stdio.h>
int main(){
    int a, b;
    char c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    if(c=='+'){
        printf("%d", a+b);
    }
    else if(c=='-'){
        printf("%d", a-b);
    }
    else if(c=='*'){
        printf("%d", a*b);
    }
    else(c=='/'){
        printf("%d", a/b);
    }
}