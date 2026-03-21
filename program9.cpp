#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
int tebak,jawaban;

 srand(time(0));
jawaban = (rand() % 20) + 1;
    printf("Game tebak angka 1-20\n");
    printf("Masukkan angka 99 jika ingin keluar dari permainan\n");
do {
    printf("\nMasukkan angka :");
    scanf("%d", &tebak);
    

    if (tebak < jawaban){
        printf("angka terlalu kecil \n");
    }
    else if (tebak > jawaban && tebak != 99){
    printf("angka terlalu besar \n");
    }

}while(tebak != 99 && jawaban != tebak);
if (tebak == 99 ){
    printf ("anda keluar");
}
else
printf("tebakan benar");
    return 0;
}