#include <stdio.h>

int prima(int x) {
    if (x < 2) return 0;
    for (int i = 2; i < x; i++) {
        if (x % i == 0)
            return 0;
    }
    return 1;
}

int countPrima(int arr[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (prima(arr[i]))
            c++;
    }
    return c;
}

int main() {
    int data[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &data[i]);

    printf("Jumlah prima: %d\n", countPrima(data,5));
    return 0;
}