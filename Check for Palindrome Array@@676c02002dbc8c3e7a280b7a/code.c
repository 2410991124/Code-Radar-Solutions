// #include <stdio.h>
// int main(){
//     int N;
//     scanf("%d", &N);
//     int a[N];
//     for(int i=0; i<N; i++){
//         scanf("%d", &N);
//     }
//     int p=1;
//     for(int i=0, j=N-1; i<j; i++, j--){
//         if(a[i]!=a[j]){
//             p=0;
//             break;
//         }
//     }
//     if(p==1){
//         printf("YES");
//     }
//     else{
//         printf("NO");
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int a[N]; 
    for (int i = 0; i < N; i++) {
        // if (scanf("%d", &a[i]) != 1) {
        //     printf("Invalid input. Please enter integers only.\n");
        //     return 1; 
        // }
        scanf("%d", &a[i]);
    }
    int isPalindrome = 1; 
    for (int i = 0, j = N - 1; i < j; i++, j--) {
        if (a[i] != a[j]) {
            isPalindrome = 0; 
            break;
        }
    }
    if (isPalindrome == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}