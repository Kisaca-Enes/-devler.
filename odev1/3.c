#include <stdio.h>

int main() {
    int sayi1;
    int sayi2;
        
    printf("Birinci Sayıyı Giriniz: ");
    scanf("%d", &sayi1);
    
    printf("İkinci Sayıyı Giriniz: ");
    scanf("%d", &sayi2);
    
    printf("Toplamı: %d\n", sayi1 + sayi2);
    return 0;
}
