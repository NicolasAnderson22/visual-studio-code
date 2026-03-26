#include <stdio.h>

int main() {
    int arr[10] = {1,2,2,3,3,3,4,4,4,4};
    int maxCount = 0, modus;

    for(int i = 0; i < 10; i++) {
        int count = 0;
        for(int j = 0; j < 10; j++) {
            if(arr[i] == arr[j])
                count++;
        }
        if(count > maxCount) {
            maxCount = count;
            modus = arr[i];
        }
    }

    printf("Modus: %d", modus);
    return 0;
}