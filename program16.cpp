#include<stdio.h>

int main(){
    float suhu [7];
    float sum = 0;
    float rata_rata;
    float max;
    float min;

    for (int i = 0;i < 7;i++){
    printf("Masukkan suhu pada hari ke [%d] : ", i+1);
    scanf("%f", &suhu[i]);
    sum += suhu[i];

    }
    rata_rata = sum / 7;
    max = suhu[0];
    min = suhu[0];
    for (int i = 0;i < 7;i++){
        if (suhu[i] > max){
            max = suhu[i];
        }
        if (suhu[i] < min){
            min = suhu[i];
        }
    }
    printf("suhu rata : %.2f\n", rata_rata);
    printf("suhu terdingin : %.2f\n", min);
    printf("suhu terpanas : %.2f\n", max);
    
    return 0;
}