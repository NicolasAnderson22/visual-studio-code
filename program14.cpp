#include <stdio.h>

int main() {
    float diameter, jarijari, keliling, luas;
    const float phi = 3.14f;

    printf("Masukkan diameter lingkaran :");
    scanf("%f", &diameter);
    
    jarijari = diameter / 2;
    keliling = phi * diameter;
    luas = phi * jarijari * jarijari;

    printf("jari-jari lingkaran : %.2f\n" , jarijari);
    printf("Keliling lingkaran : %.2f\n", keliling);
    printf("Luas lingkaran     : %.2f\n", luas);


    return 0;
}
