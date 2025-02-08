#include <stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    // if(a=='R'){
    //     printf("Stop");
    // }
    // else if(a=='G'){
    //     printf("Go");
    // }
    // else if(a=='Y'){
    //     printf("Slow Down");
    // }
    // else{
    //     printf("Invalid input");
    // }
    switch (a){
        case 'R':
             printf("Stop");
             break;
        case 'G':
             printf("Go");
             break;
        case 'Y':
             printf("Slow Down");
             break;
        default:
             printf("Invalid input");
    }
}