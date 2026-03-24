#include <stdio.h>

void geser(int arr[], int n) {
    int last = arr[n-1];

    for (int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = last;
}

int main() {
    int data[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &data[i]);

    geser(data,5);

    for (int i = 0; i < 5; i++)
        printf("%d ", data[i]);

    return 0;
}