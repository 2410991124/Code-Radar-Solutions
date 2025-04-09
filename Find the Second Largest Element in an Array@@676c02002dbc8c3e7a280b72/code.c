#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d ", &a[i]);
    }

    // Sort the array using bubble sort (without library)
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap a[j] and a[j+1]
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // After sorting, the second largest element will be at index N-2
    if (N >= 2) {
        printf("%d\n", a[N - 2]);
    } else {
        printf("-1\n"); // If the array has less than 2 elements
    }

    return 0;
}