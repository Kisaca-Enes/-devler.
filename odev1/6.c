#include <stdio.h>

int main() {
    
  int sayi1;
  int sayi2;
   
  printf("Birinci Sayıyı Giriniz: ");
  scanf("%d", &sayi1);
    
  printf("İkinci Sayıyı Giriniz: ");
  scanf("%d", &sayi2);
    
  printf("İki Sayınında Bölümü: ", sayi1 / sayi2);
  printf("İki Sayınında Kalanı: ", sayi1 % sayi2);
    
  return 0;

}
