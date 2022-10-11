// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int tomat;
    int sawi;
    int kgtomat = 6000;
    int kgsawi = 1500;
    int uang;
    int total;
    int kembalian;
    
    printf("Berapa KG belanjaan Tomat : ");
    scanf("%d", &tomat);
    printf("Berapa KG belanjaan SAWI : ");
    scanf("%d", &sawi);
    printf("Masukkan Uang anda : ");
    scanf("%d", &uang);
    
    total = (tomat * kgtomat) + (sawi * kgsawi);
    kembalian = uang - total;
    
    printf("Maka jumlah belanjaan adalah %d\n", total);
    printf("Maka kembalian anda adalah %d\n", kembalian);

    return 0;
}
