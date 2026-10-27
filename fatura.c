
#include <stdio.h>

int main() {
    float odenecekFatura;
    float eskiBirimFiyat, yeniBirimFiyat;
    float enflasyon;
    float eskiAboneUcreti, yeniAboneUcreti;

    int yeniOkuma, eskiOkuma;
    int toplamHarcananElektrik;

    printf("=== ELEKTRIK FATURASI HESAPLAMA ===\n\n");

    printf("Aylik enflasyon oranini giriniz (%%): ");
    if (scanf("%f", &enflasyon) != 1 || enflasyon < 0) {
        printf("Hata: Gecersiz enflasyon orani!\n");
        return 1;
    }

    printf("Onceki ayin birim fiyatini giriniz: ");
    if (scanf("%f", &eskiBirimFiyat) != 1 || eskiBirimFiyat < 0) {
        printf("Hata: Gecersiz birim fiyat!\n");
        return 1;
    }

    printf("Onceki ayin abonelik ucretini giriniz: ");
    if (scanf("%f", &eskiAboneUcreti) != 1 || eskiAboneUcreti < 0) {
        printf("Hata: Gecersiz abonelik ucreti!\n");
        return 1;
    }

    printf("Onceki ayin sayac degerini giriniz: ");
    if (scanf("%d", &eskiOkuma) != 1 || eskiOkuma < 0) {
        printf("Hata: Gecersiz sayac degeri!\n");
        return 1;
    }

    printf("Bu ayin sayac degerini giriniz: ");
    if (scanf("%d", &yeniOkuma) != 1 || yeniOkuma < eskiOkuma) {
        printf("Hata: Yeni sayac degeri eski degerden kucuk olamaz!\n");
        return 1;
    }

    toplamHarcananElektrik = yeniOkuma - eskiOkuma;

    yeniAboneUcreti = eskiAboneUcreti * (1 + enflasyon / 100);
    yeniBirimFiyat = eskiBirimFiyat * (1 + enflasyon / 100);

    odenecekFatura =
        toplamHarcananElektrik * yeniBirimFiyat + yeniAboneUcreti;

    printf("\n========== FATURA OZETI ==========\n");
    printf("Elektrik tuketimi : %d birim\n", toplamHarcananElektrik);
    printf("Yeni birim fiyati : %.2f TL\n", yeniBirimFiyat);
    printf("Abonelik ucreti   : %.2f TL\n", yeniAboneUcreti);
    printf("----------------------------------\n");
    printf("Odenecek tutar    : %.2f TL\n", odenecekFatura);
    printf("==================================\n");

    return 0;
}

