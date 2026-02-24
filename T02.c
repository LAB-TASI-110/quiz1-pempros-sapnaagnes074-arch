#include <stdio.h>

int main() {
    int N;

    printf("Masukkan jumlah data: ");
    scanf("%d", &N);

    int nilai[N];

    printf("Masukkan deret nilai:\n");
    for(int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }

    int kode;
    printf("Masukkan kode kelompok (1 = ganjil, 2 = genap): ");
    scanf("%d", &kode);

    int total = 0;

    for(int i = 0; i < N; i++) {

        if(kode == 1) { // kelompok posisi ganjil
            if(i % 2 == 0) {
                total += nilai[i];
            }
        }
        else if(kode == 2) { // kelompok posisi genap
            if(i % 2 == 1) {
                total += nilai[i];
            }
        }

    }

    printf("Total nilai kelompok %d adalah: %d\n", kode, total);

    return 0;
}