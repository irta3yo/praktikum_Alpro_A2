/*
Nama Program  : FrekNilTabel
Deskripsi     : Menampilkan nilai tabel dengan frekuensi lebih dari satu
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 13/03/2023
*/

#include <stdio.h>

int main() {
    int jumBil;
    int A;
    int T[9999];

    int i, j, k;
    int sum[9999];
    int count, cek;

    printf("Masukkan jumlah yang akan diinput : ");
    scanf("%d", &jumBil);

    /* Mengisi Array */
    for(int i = 0; i < jumBil; i++){
        do{
            printf("Masukkan array bilangan indeks-%d : ", i);
            scanf("%d", &A);
            T[i] = A;
        }while(A < 1);
    }

    k = 0;
    sum[k] = 0;

    for(i = 0; i < jumBil; i++){
        count = 0;
        cek = 0;
        for(j = 0; j < jumBil; j++){
            if(T[i] == T[j]){
                count = count + 1;
            }
        }
        /* Menentukan Nilai yang sama */
        if(count > 1){
            /* Cek duplicate output */
            for(int h = 0; h <= k; h++){
                if(sum[h] == T[i]){
                    cek = 1;
                }
            }

            if(cek == 0){
                sum[k] = T[i];
                k = k + 1;
            }
        }
    }

    printf("Maka hasilnya adalah : ");

    for(i = 0; i < k; i++){
        printf("%d ", sum[i]);
    }



    return 0;
}

