// #include <stdio.h>
// int main(){
//     int N;
//     scanf("%d", &N);
//     int a[N];
//     for(int i=0; i<N; i++){
//         scanf("%d ", &a[i]);
//     }
//     int max= a[0];
//     int smax= a[0];
//     int f=0;
//     for(int i=0; i<N; i++){
//         f=0;
//         if(a[i]>max){
//             smax=max;
//             max=a[i];
//         }
//         else{
//             if(a[i]>smax && a[i]!=max){
//                 smax=a[i];
//                 f=1;
//                 break; 
//             }
//         }
//     }
//     if(f==1){
//         printf("%d", smax);
//     }
//     else{
//         printf("-1");
//     }
//     return 0;
// }

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    int smax = -10; 
    for (int i = 1; i < N; i++) {
        if (a[i] > max) {
            smax = max;
            max = a[i];
        } else if (a[i] > smax && a[i] != max) {
            smax = a[i];
        }
    }
    if (smax != -1) {
        printf("%d\n", smax);
    } else {
        printf("-1");
        // int all_same = 1;
        // for (int i = 1; i < N; i++) {
        //     if (a[i] != a[0]) {
        //         all_same = 0;
        //         break;
        //     }
        // }
        // if (all_same) {
        //     printf("-1\n");
        // }
        // } else if (N >= 2) {
        //     printf("-1\n");
        // }
    }
    return 0;
}