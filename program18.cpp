#include <stdio.h>

int main() {
    int angka[10];
    int genap = 0, ganjil = 0;

    for (int i = 0; i < 10; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &angka[i]);

        if (angka[i] % 2 == 0)
            genap++;
        else
            ganjil++;
    }

    printf("Jumlah bilangan genap: %d\n", genap);
    printf("Jumlah bilangan ganjil: %d\n", ganjil);

    return 0;
}