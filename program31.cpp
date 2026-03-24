#include <stdio.h>

int hujan(float arr[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= 5)
            c++;
    }
    return c;
}

int main() {
    float data[7];

    for (int i = 0; i < 7; i++) {
        scanf("%f", &data[i]);
    }

    printf("Hari hujan: %d\n", hujan(data, 7));
    return 0;
}