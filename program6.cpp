#include <stdio.h>

int main(){
int usia, praktik, teori;

printf("Masukkan usia:");
scanf("%d",&usia);

printf("Apakah lolos praktik? (iya = 1, tidak = 0 )");
scanf("%d", &praktik);

printf("Masukkan nilai teori :");
scanf("%d", &teori);

if (usia >=16 && praktik == 1 && teori >= 75){
printf("Selamat anda memenuhi syarat untuk memperoleh sim\n");
}
else {
printf("Maaf,anda belum memenuhi syarat untuk memperoleh sim\n");
}

return 0;
}