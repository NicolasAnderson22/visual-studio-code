#include <stdio.h>

int main() {
    int arr[10] = {1,2,2,3,3,3,4,4,4,4};
    int count;

    for(int i = 0; i < 10; i++) {
        count = 1;
        if(arr[i] == -1) continue;

        for(int j = i+1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                count++;
                arr[j] = -1;
            }
        }
        printf("%d muncul %d kali\n", arr[i], count);
    }
    return 0;
}