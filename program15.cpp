#include<stdio.h>

int main(){

    float panjang, luas, volume;

    printf ("Masukkan panjang sisi kubus :");
    scanf ("%f", &panjang);

    luas = panjang * panjang;
    volume = panjang * panjang * panjang;

    printf ("luas kubus : %.2f", luas);
    printf ("volume kubus : %.2f", volume);

    return 0;

}