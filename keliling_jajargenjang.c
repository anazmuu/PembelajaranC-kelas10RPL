// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf(":::PROGRAM MENCARI KELILING JAJAR GENJANG:::\n");
    int p;
    int l;
    int rumus = 2;
    int hasil;
    
    printf("Masukkan Panjang : ");
    scanf("%d", &p);
    printf("Masukkan Lebar : ");
    scanf("%d", &l);
    
    hasil = (rumus * p) + (rumus * l) + (rumus * (p+l));
    
    printf("Maka Keliling jajar genjang adalah %d\n", hasil);
    

    return 0;
}