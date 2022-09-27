// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf(":::PROGRAM MENCARI LUAS TRAPESIUM:::\n");
    int sisi1;
    int sisi2;
    int tinggi;
    int rumus = 2;
    int hasil;
    
    printf("Masukkan SISI 1 : ");
    scanf("%d", &sisi1);
    printf("Masukkan SISI 2 : ");
    scanf("%d", &sisi2);
    printf("Masukkan Tinggi : ");
    scanf("%d", &tinggi);
    
    hasil = ((sisi1 + sisi2) * tinggi) / rumus;
    
    printf("Maka Luas Trapesium adalah %d\n", hasil);
    

    return 0;
}