#include <stdio.h>

int selisih(int arr[], int n){
    int gen=0, gan=0;

    for(int i=0;i<n;i++){
        if(arr[i]%2==0) gen+=arr[i];
        else gan+=arr[i];
    }

    return gen-gan;
}

int main(){
    int a[5];
    for(int i=0;i<5;i++) scanf("%d",&a[i]);

    printf("%d\n", selisih(a,5));
}