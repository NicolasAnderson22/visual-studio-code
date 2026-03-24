#include <stdio.h>

void sort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

float median(int arr[], int n) {
    sort(arr,n);
    if (n % 2 == 0)
        return (arr[n/2-1] + arr[n/2]) / 2.0;
    else
        return arr[n/2];
}

int main() {
    int data[5];

    for (int i = 0; i < 5; i++)
        scanf("%d", &data[i]);

    printf("Median: %.2f\n", median(data,5));
    return 0;
}