#include <stdio.h>

int main (){
int pin_input;
int pin_benar = 123456;
int i = 3;

while(i >= 1 & pin_input != pin_benar ){
    i--;
    printf("Masukkan pin 6 digit ATM :");
    scanf("%d", &pin_input);
}
if (pin_input == pin_benar){
    printf("pin anda benar\n");}
else {printf("anda sudah melakukan kesalahan sebanyak 3 kali sehingga kartu anda kami blokir");}

    return 0;
}