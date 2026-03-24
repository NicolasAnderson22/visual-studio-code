#include <stdio.h>

void selisih(int arr[], int n, int hasil[]) {
    for (int i = 0; i < n-1; i++) {
        hasil[i] = arr[i+1] - arr[i];
    }
}

int main() {
    int data[5], hasil[4];

    for (int i = 0; i < 5; i++)
        scanf("%d", &data[i]);

    selisih(data,5,hasil);

    for (int i = 0; i < 4; i++)
        printf("%d ", hasil[i]);

    return 0;
}