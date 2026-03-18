#include <stdio.h>

int main() {
    float sks, ipk, lama_studi, poin_skpi;
    int skripsi, tulisan_ilmiah, sertifikasi;
    int syarat = 1;

    printf("Masukkan total SKS: ");
    scanf("%f", &sks);

    printf("Masukkan nilai IPK: ");
    scanf("%f", &ipk);

    printf("Masukkan lama studi semester: ");
    scanf("%f", &lama_studi);

    printf("Apakah lulus skripsi (iya = 1, tidak = 0): ");
    scanf("%d", &skripsi);

    printf("Apakah sudah memiliki tulisan ilmiah (iya = 1, tidak = 0): ");
    scanf("%d", &tulisan_ilmiah);

    printf("Masukkan jumlah poin skpi: ");
    scanf("%f", &poin_skpi);

    printf("Apakah sudah memiliki sertifikasi (iya = 1, tidak = 0): ");
    scanf("%d", &sertifikasi);

    printf("\nHasil pengecekan kelulusan:\n");

    if (sks < 144) {
        printf("- SKS kurang dari 144\n");
        syarat = 0;
    }

    if (ipk < 2.4) {
        printf("- IPK kurang dari 2.4\n");
        syarat = 0;
    }

    if (lama_studi > 16) {
        printf("- Lama studi lebih dari 16 semester\n");
        syarat = 0;
    }

    if (poin_skpi < 150) {
        printf("- Poin SKPI kurang dari 150\n");
        syarat = 0;
    }

    if (!skripsi) {
        printf("- Belum lulus skripsi\n");
        syarat = 0;
    }

    if (!tulisan_ilmiah) {
        printf("- Belum memiliki tulisan ilmiah\n");
        syarat = 0;
    }

    if (!sertifikasi) {
        printf("- Belum memiliki sertifikasi\n");
        syarat = 0;
    }

    if (syarat == 1) {
        printf("Selamat, anda lulus\n");
    } else {
        printf("Maaf, anda belum memenuhi semua syarat kelulusan\n");
    }

    return 0;
}
