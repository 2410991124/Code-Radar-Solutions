// #include <stdio.h>
// int main(){
//     int N;
//     scanf("%d", &N);
//     int a[N];
//     for(int i=0; i<N; i++){
//         scanf("%d", &a[N]);
//     }
//     int c=0;
//     for(int i=0; i<N; i++){
//         int p=1;
//         for(int j=2; j<=a[i]/2;j++){
//             if(a[i]%i==0){
//                 p=0;
//                 break;
//             }
//             else{
//                 p=1;
//                 c=c+1;
//             }
//         }
//     }
//     printf("%d", c);
//     return 0;
// }

// #include <stdio.h>
// int Prime(int num) {
//     if (num <= 1) {
//         return 0;
//     }
//     for (int i = 2; i <= num/2; i++) {
//         if (num % i == 0) {
//             return 0;
//         }
//         // return 0;
//         else(){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main() {
//     int N;
//     scanf("%d", &N);
//     int a[N];
//     for (int i = 0; i < N; i++) {
//        scanf("%d", &a[i]);
//     }
//     int primeCount = 0;
//     for (int i = 0; i < N; i++) {
//         if (Prime(a[i])) {
//             primeCount++;
//         }
//     }
//     printf("%d", primeCount);
//     return 0;
// }

#include <stdio.h>

int Prime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    int primeCount = 0;
    for (int i = 0; i < N; i++) {
        if (Prime(a[i])) {
            primeCount++;
        }
    }
    printf("%d", primeCount);
    return 0;
}