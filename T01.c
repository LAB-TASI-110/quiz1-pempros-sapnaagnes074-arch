#include <stdio.h>
#include <string.h>

int main() {
    char kode[10];
    int porsi;
    int harga;
    int total = 0;

    printf("Masukkan Kode Menu dan Porsi (ketik END untuk selesai)\n");

    while (1) {
        scanf("%s", kode);

        if (strcmp(kode, "END") == 0) {
            break;
        }

        scanf("%d", &porsi);

        if (strcmp(kode, "NGS") == 0) {
            harga = 15000;
        }
        else if (strcmp(kode, "SA") == 0) {
            harga = 25000;
        }
        else if (strcmp(kode, "BU") == 0) {
            harga = 18000;
        }
        else if (strcmp(kode, "MAP") == 0) {
            harga = 15000;
        }
        else if (strcmp(kode, "GG") == 0) {
            harga = 15000;
        }
        else if (strcmp(kode, "sa") == 0) {
            harga = 17000;
        }
        else {
            printf("Kode tidak valid!\n");
            continue;
        }

        total += harga * porsi;
    }

    printf("\n===== STRUK PEMBELIAN =====\n");
    printf("Total Belanja : Rp %d\n", total);

    if (total >= 200000) {
        printf("Kupon        : Kuning\n");
    }
    else if (total >= 100000) {
        printf("Kupon        : Biru\n");
    }
    else {
        printf("Kupon        : Tidak dapat kupon\n");
    }

    printf("===========================\n");

    return 0;
}