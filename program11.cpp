#include<stdio.h>
#include <string.h>

int main (){
char produk[5][20] = {"coca-cola","sprite","fanta","kopi","teh botol"};
int harga[5] = {20000,15000,18000,30000,20000};
int pilihan,jumlah_produk = 0,total = 0;    
char keranjang[3][20];

while(1){
for(int i = 0; i < 5; i++){
    printf("%d." "%-15s " "-RP%6d\n",i+1,produk[i],harga[i]);
}
printf("6.selesai\n"); 
printf("Pilih produk(1-6): ");
scanf("%d", &pilihan);

if (pilihan == 6){
    break;
}
else if(pilihan >= 1 && pilihan <= 5){
    if (jumlah_produk < 3 && total + harga[pilihan-1] <= 50000){
        total += harga[pilihan - 1];
        strcpy(keranjang[jumlah_produk] , produk[pilihan-1]);
        jumlah_produk++;
        printf("Produk ditambahkan. Total: RP%d, Jumlah produk: %d\n\n", total, jumlah_produk);
    }else {
                printf("Batas produk (max 3) atau harga (max 50000) tercapai.\n");
                break;
            }

    }

    if(jumlah_produk == 3 || total >= 50000){
        break;
    
}

}
printf("\n=== Ringkasan Belanja ===\n");
    for (int i = 0; i < jumlah_produk; i++) {
        printf("%d. %s\n", i+1, keranjang[i]);
    }
    printf("Total Harga: Rp%d\n", total);
    printf("Terima kasih!\n");


    return 0;
}