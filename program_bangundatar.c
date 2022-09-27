// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int panjang;
    int lebar;
    double rumus = 0.5;
    int alas;
    int tinggi;
    int hasil_persegi;
    double hasil_segitiga;
    int inputan;
    
    printf(":::PROGRAM BANGUN DATAR:::\n");
    printf("A : Rumus Persegi\n");
    printf("B : Rumus Segitiga\n");
    printf("Masukkan Inputan : ");
    scanf("%c", &inputan);
    
    switch(toupper(inputan)){
        case 'A':
            printf("Masukkan panjang : ");
            scanf("%d", &panjang);
            printf("Masukkan lebar : ");
            scanf("%d", &lebar);
            
            hasil_persegi = panjang * lebar;
            
            printf("Maka hasil persegi adalah %d\n", hasil_persegi);
            break;
        case 'B':
            printf("Masukkan alas : ");
            scanf("%d", &alas);
            printf("Masukkan tinggi : ");
            scanf("%d", &tinggi);
            
            hasil_segitiga = rumus * (alas * tinggi);
            
            printf("Maka luas segitiga adalah %f\n", hasil_segitiga);
        default:
            printf("Inputan Salah");
    }
    
    return 0;
}