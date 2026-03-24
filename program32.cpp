#include <stdio.h>

float rata(float arr[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    float tinggi[5];

    for (int i = 0; i < 5; i++) {
        scanf("%f", &tinggi[i]);
    }

    printf("Rata-rata: %.2f\n", rata(tinggi, 5));
    return 0;
}