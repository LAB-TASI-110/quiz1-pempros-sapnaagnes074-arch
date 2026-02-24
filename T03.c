#include <stdio.h>
#include <string.h>

#define MAX 100
#define HARGA_PER_KG 8000

// Struktur data transaksi
typedef struct {
    char nama[50];
    float berat;
    float total;
} Transaksi;

Transaksi data[MAX];
int jumlah = 0;

// Tambah transaksi
void tambahTransaksi() {
    if (jumlah >= MAX) {
        printf("Data penuh!\n");
        return;
    }

    printf("Masukkan nama pelanggan: ");
    getchar();
    fgets(data[jumlah].nama, sizeof(data[jumlah].nama), stdin);
    data[jumlah].nama[strcspn(data[jumlah].nama, "\n")] = 0;

    printf("Masukkan berat laundry (kg): ");
    scanf("%f", &data[jumlah].berat);

    data[jumlah].total = data[jumlah].berat * HARGA_PER_KG;

    printf("Total bayar: Rp %.0f\n", data[jumlah].total);

    jumlah++;
}

// Tampilkan semua transaksi
void tampilkanTransaksi() {
    if (jumlah == 0) {
        printf("Belum ada transaksi.\n");
        return;
    }

    float totalPendapatan = 0;

    printf("\n=== DAFTAR TRANSAKSI LAUNDRY DEL ===\n");
    for (int i = 0; i < jumlah; i++) {
        printf("%d. %s | %.2f kg | Rp %.0f\n",
               i + 1,
               data[i].nama,
               data[i].berat,
               data[i].total);

        totalPendapatan += data[i].total;
    }

    printf("\nJumlah pelanggan: %d\n", jumlah);
    printf("Total pendapatan: Rp %.0f\n", totalPendapatan);
}

// Program utama
int main() {
    int pilihan;

    do {
        printf("\n=== SISTEM MANAJEMEN TRANSAKSI LAUNDRY DEL ===\n");
        printf("1. Tambah Transaksi\n");
        printf("2. Tampilkan Semua Transaksi\n");
        printf("3. Keluar\n");
        printf("Pilih menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                tambahTransaksi();
                break;
            case 2:
                tampilkanTransaksi();
                break;
            case 3:
                printf("Terima kasih!\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }

    } while (pilihan != 3);

    return 0;
}