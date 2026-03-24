#include <stdio.h>

float totalDiskon(float harga[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        if (harga[i] > 100000)
            total += harga[i] * 0.9;
        else
            total += harga[i];
    }
    return total;
}

int main() {
    float harga[5];

    for (int i = 0; i < 5; i++)
        scanf("%f", &harga[i]);

    printf("Total bayar: %.2f\n", totalDiskon(harga,5));
    return 0;
}