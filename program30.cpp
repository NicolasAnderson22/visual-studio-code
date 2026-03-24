#include <stdio.h>

int hitungRamai(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 100)
            count++;
    }
    return count;
}

int main() {
    int data[7];

    for (int i = 0; i < 7; i++) {
        scanf("%d", &data[i]);
    }

    printf("Hari ramai: %d\n", hitungRamai(data, 7));
    return 0;
}