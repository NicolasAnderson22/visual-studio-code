#include<stdio.h>

int main (){

    for (int i = 1;i <= 5; i += 2){
        for(int spasi = 1 ; spasi <= (5 - i)/2; spasi++)
         {  printf(" ");}
         for(int j = 1 ;j <= i ; j++){
            printf("*");
         }
         printf ("\n");
        }
    
    for (int i = 3; i >= 1; i -=2){
        for (int spasi = 1; spasi <= (5 - i)/2; spasi++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}