#include<stdio.h>

int main(){

    float panjang, lebar, luas, keliling;

    printf ("Masukkan panjang :");
    scanf ("%f", &panjang);

    printf ("Masukkan lebar :");
    scanf ("%f", &lebar);

    luas = panjang * lebar;
    keliling = 2 * (panjang + lebar);

    printf ("luas persegi panjang : %.2f \n", luas);
    printf ("keliling persegi panjang : %.2f \n", keliling);

    return 0;

}