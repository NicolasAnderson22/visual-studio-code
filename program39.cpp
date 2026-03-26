#include <stdio.h>

int faktorial(int n) {
    if(n == 0)
        return 1;
    else
        return n * faktorial(n - 1);
}

int main() {
    int n;
    printf("Masukkan angka: ");
    scanf("%d", &n);

    printf("Faktorial: %d", faktorial(n));
    return 0;
}