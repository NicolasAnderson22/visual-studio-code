#include <stdio.h>

int palindrom(int arr[], int n) {
    for (int i = 0; i < n/2; i++) {
        if (arr[i] != arr[n-1-i])
            return 0;
    }
    return 1;
}

int main() {
    int data[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &data[i]);

    if (palindrom(data,5))
        printf("Palindrom\n");
    else
        printf("Bukan\n");

    return 0;
}