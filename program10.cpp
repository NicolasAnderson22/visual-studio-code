#include<stdio.h>

int main (){
int n,i;
char c1,c2;

printf("Masukkan n :");
scanf("%d", &n);

printf("Masukkan c1 :");
scanf(" %c", &c1);

printf("Masukkan c2 :");
scanf(" %c", &c2);

printf("\n");
for(i =1 ; i <= n ;i++){
    for(int j = 1; j<= n;j++)
    if (i%2 == 0){
        printf ("%c ", c2);}
    else {printf ("%c ", c1);
    }
    printf("\n");
}

    return 0;
}