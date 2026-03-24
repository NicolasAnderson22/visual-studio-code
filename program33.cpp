#include <stdio.h>

float min(float arr[], int n) {
    float m = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < m)
            m = arr[i];
    }
    return m;
}

int main() {
    float harga[5];

    for (int i = 0; i < 5; i++) {
        scanf("%f", &harga[i]);
    }

    printf("Termurah: %.2f\n", min(harga, 5));
    return 0;
}