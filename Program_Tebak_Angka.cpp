#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int secret, guess, attempts = 0;

    srand(time(0));
    secret = (rand() % 10) + 1;

printf("Game Tebak Angka (1-10)");

do {
        printf("Masukkan tebakan Anda: ");
        scanf("%d", &guess);
        attempts++;

    if (guess == secret){
        printf("Selamat anda berhasil menebak angka.\n");
        printf("Total percobaan :%d", attempts);
    }
    else if (guess < secret){
        printf("Tebakan anda salah ,terlalu kecil\n");
    }
    else {
        printf("Tebakan anda salah ,terlalu besar\n");
    }
}   while (secret != guess);

    return 0;
}