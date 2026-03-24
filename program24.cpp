#include <stdio.h>

void unik(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int duplikat = 0;

        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplikat = 1;
                break;
            }
        }

        if (!duplikat)
            printf("%d ", arr[i]);
    }
}

int main() {
    int data[6];

    for (int i = 0; i < 6; i++)
        scanf("%d", &data[i]);

    unik(data,6);

    return 0;
}