#include <stdio.h>

int lulus(float arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 60)
            count++;
    }
    return count;
}

int main() {
    float nilai[5];

    for (int i = 0; i < 5; i++) {
        scanf("%f", &nilai[i]);
    }

    printf("Jumlah lulus: %d\n", lulus(nilai, 5));
    return 0;
}