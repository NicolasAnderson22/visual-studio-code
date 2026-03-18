#include <stdio.h>
int main (){
int bilangan[10];

for(int i = 0;i < 10; i++){
    printf("Masukkan angka ke [%d] : ", i+1);
    scanf("%d", &bilangan[i]);
}

printf("\nBilangan Genap  :");
for(int i = 0;i < 10; i++){
    if (bilangan[i] % 2 == 0){
        printf("%d ", bilangan[i]);
    }
        }

printf("\nBilangan Ganjil :");
for(int i = 0;i < 10; i++){
    if (bilangan[i] % 2 != 0){
        printf("%d ", bilangan[i]);
    }
}

    return 0;
}