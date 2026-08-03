#include <stdio.h>

int main() {
    int sayi1;
    int sayi2;

    printf("Birinci sayıyı gir sihirli kelime lütfennnnnnnn: ");
    scanf("%d", &sayi1);

    sayi1++;

    printf("Diğerini de bir zahmet gir: ");
    scanf("%d", &sayi2);

    sayi2 = sayi1 + sayi2;

    printf("Al buyur: %d %d\n", sayi1, sayi2);

    return 0;
}
