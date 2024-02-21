#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int zar1, zar2, toplam, puan;
    char devam;

    // Rastgele sayı üreteci için zamanı kullan
    srand(time(NULL));

    do {
        // İki zar at
        zar1 = rand() % 6 + 1; // 1 ile 6 arasında rastgele sayı
        zar2 = rand() % 6 + 1;
        toplam = zar1 + zar2;

        printf("Zarlar: %d ve %d\n", zar1, zar2);
        printf("Toplam: %d\n", toplam);

        if (toplam == 7 || toplam == 11) {
            printf("Kazandınız!\n");
        } else if (toplam == 2 || toplam == 3 || toplam == 12) {
            printf("Kaybettiniz!\n");
        } else {
            puan = toplam;
            printf("Puanınız: %d\n", puan);
            printf("Puanınızı tutturana kadar 7 atmayın.\n");

            do {
                zar1 = rand() % 6 + 1;
                zar2 = rand() % 6 + 1;
                toplam = zar1 + zar2;

                printf("Yeni Zarlar: %d ve %d\n", zar1, zar2);
                printf("Yeni Toplam: %d\n", toplam);

                if (toplam == puan) {
                    printf("Kazandınız!\n");
                    break;
                } else if (toplam == 7) {
                    printf("Kaybettiniz!\n");
                    break;
                }
            } while (1);
        }

        printf("Yeniden oynamak istiyor musunuz? (E/H): ");
        scanf(" %c", &devam);
    } while (devam == 'E' || devam == 'e');

    printf("Oyunu kapattınız. İyi günler!\n");

    return 0;
}
