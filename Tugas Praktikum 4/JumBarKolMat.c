/*
Nama Program  : JumBarKolMat
Deskripsi     : menjumlahkan semua elemen pada baris dan kolomnya
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 13/03/2023
*/

#include <stdio.h>

int main() {
    int jumBil;
    int A, B;
    int T[99][99];
    int barisSum[99] = {0};
    int kolomSum[99] = {0};

    int i, j, count;

    printf("Tentukan dimensi array T1 : ");
    scanf("%d", &jumBil);

    /* Mengisi Array */
    for(i = 0; i < jumBil; i++){
        for(j = 0; j < jumBil; j++){
            do{
                printf("Indeks array tabel T[%d][%d]: ", i, j);
                scanf("%d", &T[i][j]);
            }while(T[i][j] < 1);

            barisSum[i] = barisSum[i] + T[i][j];
            kolomSum[j] = kolomSum[j] + T[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("Baris ke-%d: %d\n", i + 1, barisSum[i]);
    }

    for (int j = 0; j < 3; j++) {
        printf("Kolom ke-%d: %d\n", j + 1, kolomSum[j]);
    }


    return 0;
}

