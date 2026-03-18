#include <stdio.h>
#include <windows.h>

int main(){
int i;

printf("Masukkan waktu untuk countdown (detik) :");
scanf("%d", &i);

printf("Countdown timer dimulai\n");

while (i >= 0){
    printf("%d\n", i);
    Sleep(100);
    i --;
}
   printf("Waktu telah habis!\n");
   return 0;
}