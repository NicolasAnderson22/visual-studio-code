#include <stdio.h>

int modus(int arr[], int n) {
    int maxCount = 0, mode = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                count++;
        }

        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    return mode;
}

int main() {
    int data[6];

    for (int i = 0; i < 6; i++)
        scanf("%d", &data[i]);

    printf("Modus: %d\n", modus(data,6));

    return 0;
}