#include <stdio.h>

int hitungLembur(int jam[], int n) {
    int lembur = 0;

    for (int i = 0; i < n; i++) {
        if (jam[i] > 8)
            lembur++;
    }

    return lembur;
}

int main() {
    int jam[5];

    for (int i = 0; i < 5; i++) {
        printf("Jam kerja hari ke-%d: ", i+1);
        scanf("%d", &jam[i]);
    }

    printf("Hari lembur: %d\n", hitungLembur(jam, 5));

    return 0;
}