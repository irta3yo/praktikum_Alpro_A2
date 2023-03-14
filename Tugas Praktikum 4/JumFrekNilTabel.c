/*
Nama Program  : JumFrekNilTabel
Deskripsi     : Jumlah frekuensi tabel
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 13/03/2023
*/

#include <stdio.h>

int main() {
    int jumBil;
    int A;
    int T[9999];

    int i, j;
    int sum;
    int count;

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

    sum = 0;
    for(i = 0; i < jumBil; i++){
        count = 0;
        for(j = 0; j < jumBil; j++){
            if(T[i] == T[j]){
                count = count + 1;
            }
        }
        if(count > 1){
            sum = sum + T[i];
        }
    }
    printf("Maka jumlah frekuensi nilai tabel adalah : %d", sum);



    return 0;
}

