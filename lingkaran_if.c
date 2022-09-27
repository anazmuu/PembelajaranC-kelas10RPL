// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf(":::PROGRAM MENCARI SETENGAH LUAS LINGKARAN:::\n");
    double phi = 3.14;
    double rumus = 0.5;
    int jari2;
    double hasil;
    
    printf("Silahkan masukkan jari jari : ");
    scanf("%d", &jari2);
    
    hasil = rumus * (phi * (jari2 * jari2));
    
    printf("Maka luas setengah lingkaran adalah %f\n", hasil);
    
    if(hasil <= 200){
        printf("Maka luasnya kecil");
    }else if(hasil >= 200){
        printf("Maka Luasnya besar");
    }

    return 0;
}