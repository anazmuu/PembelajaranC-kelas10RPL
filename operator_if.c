// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf(":::Program Penjualan Retail:::\n");
    
    char nama[20];
    int uang;
    int dsc;
    int jml1;
    int jml2;
    int jml3;
    int hasil;
    int mie = 2000;
    int beras = 12000;
    int minyak = 21000;
    int total;
    
    printf("Masukkan Nama Anda : \n");
    scanf("%s", &nama);
    printf("Masukkan Uang Anda : \n");
    scanf("%d", &uang);
    printf("Masukkan Belanjaan 1 : \n");
    scanf("%d", &jml1);
    printf("Masukkan Belanjaan 2 : \n");
    scanf("%d", &jml2);
    printf("Masukkan Belanjaan 3 : \n");
    scanf("%d", &jml3);
    
    hasil = (jml1 * mie) + (jml2 * beras) + (jml3 * minyak);
    total = uang - hasil;
    
    printf("Hallo %s\n", nama);
    printf("Maka Jumlah belanjaan nya adalah %d\n", hasil);
    printf("Maka Jumlah Kembalian nya adalah %d\n", total);
    
    if (hasil > 100000 && hasil < 250000){
        dsc = 0.9 * hasil;
        printf("maka dengan diskon adalah : %d\n", dsc);
    }else if(hasil > 250000 && hasil < 400000){
        dsc = 0.85 * hasil;
        printf("maka dengan diskon adalah : %d\n", dsc);
    }else if(hasil > 400000){
        dsc = 0.8 * hasil;
        printf("maka dengan diskon adalah : %d\n", dsc);
    }
    

    return 0;
}
