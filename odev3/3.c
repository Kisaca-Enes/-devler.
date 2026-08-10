#include <stdio.h>

int main() {

   int a = 3; // ya bu en büyüğü işte ne bu kadar uzatıyorsun (Soru: x i bulunuz cevap:hocam x burada)

   int b = 2;
       
   int c = 1;

   if (c > b && c > a) { printf("%d en büyüğü", c); }
    
   else if (a > c && a > b) { printf("%d en büyüğü", a); }
                       
   else if (b > a && b > c) { printf("%d en büyüğü", b); }
    
   else { printf("hepsi eşit"); }




   return 0;

}


