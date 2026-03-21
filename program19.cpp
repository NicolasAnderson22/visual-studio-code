#include <stdio.h>

void kategori(float tinggi[], int n) {
    int pendek = 0, sedang = 0, tinggi_b = 0;

    for (int i = 0; i < n; i++) {
        if (tinggi[i] < 160)
            pendek++;
        else if (tinggi[i] <= 170)
            sedang++;
        else
            tinggi_b++;
    }

    printf("Pendek: %d\n", pendek);
    printf("Sedang: %d\n", sedang);
    printf("Tinggi: %d\n", tinggi_b);
}

int main() {
    float tinggi[5];

    for (int i = 0; i < 5; i++) {
        printf("Tinggi ke-%d: ", i+1);
        scanf("%f", &tinggi[i]);
    }

    kategori(tinggi, 5);

    return 0;
}