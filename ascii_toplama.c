#include <stdio.h>

int main() {
    char ch1, ch2;      // Kullanýcýdan alýnan karakterler
    int num1, num2, sum;

    printf("0 ile 9 arasinda birinci rakami girin: ");
    scanf(" %c", &ch1);

    printf("0 ile 9 arasinda ikinci rakami girin: ");
    scanf(" %c", &ch2);

    // Girilen karakterlerin rakam olup olmadýðýný kontrol et
    if (ch1 < '0' || ch1 > '9' || ch2 < '0' || ch2 > '9') {
        printf("Hata: Sadece 0-9 arasinda rakam girmelisiniz!\n");
        return 1;
    }

    // Karakterlerin ASCII farký kullanýlarak sayýya dönüþtürülmesi
    num1 = ch1 - '0';
    num2 = ch2 - '0';

    // Toplama iþlemi
    sum = num1 + num2;

    // Sonuç 9'u geçerse hata ver
    if (sum > 9) {
        printf("\nHata: Toplam tek haneli olmali!\n");
        printf("(%c karakterinin ASCII degeri = %d, %c karakterinin ASCII degeri = %d)\n",
               ch1, ch1, ch2, ch2);
        printf("Toplam = %d (Bu sayi 9'dan buyuk oldugu icin hatali!)\n", sum);
        return 1;
    }

    // Sonuç doðruysa ekrana yazdýr
    printf("\n--- ASCII Sonuc ve Aciklama ---\n");
    printf("'%c' karakterinin ASCII degeri: %d\n", ch1, ch1);
    printf("'%c' karakterinin ASCII degeri: %d\n", ch2, ch2);
    printf("Toplama islemi: (%d + %d) = %d\n", num1, num2, sum);
    printf("Sonuc karakteri: '%c' (ASCII degeri: %d)\n", sum + '0', sum + '0');

    return 0;
}

