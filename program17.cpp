#include <stdio.h>

int main() {
    float penjualan[7];
    float total = 0, rata;

    for (int i = 0; i < 7; i++) {
        printf("Penjualan hari ke-%d: ", i + 1);
        scanf("%f", &penjualan[i]);
        total += penjualan[i];
    }

    rata = total / 7;

    printf("Total penjualan: %.2f\n", total);
    printf("Rata-rata penjualan: %.2f\n", rata);

    return 0;
}