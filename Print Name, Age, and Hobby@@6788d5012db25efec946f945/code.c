#include <stdio.h>
int main(){
    char a[50];
    int b;
    char c[50];
    scanf("%c%d%c", &a, &b, &c);
    printf("Name: %c\n", a);
    printf("Age: %d\n", b);
    printf("Hobby: %c", c);
    return 0;
}