/*
Nama Program  : NilMax2Tabel
Deskripsi     : Menampilkan nilai maksimum ke-2
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 13/03/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int jumBil;
    int A;
    int bil[9999];

    printf("Masukkan jumlah yang akan diinput : ");
    scanf("%d", &jumBil);

    /* Mengisi Array */
    for(int i = 0; i < jumBil; i++){
        do{
            printf("Masukkan array bilangan indeks-%d : ", i);
            scanf("%d", &A);
            bil[i] = A;
        }while(A < 1);
    }

    int simpan;

    for(int i = 0; i < jumBil; i++){
        if(bil[0] <= bil[i]){
            simpan = i;
        }
    }

    int min = 0;

    for(int i = 0; i < jumBil; i++){
        if(bil[i] != bil[simpan]){
            if(bil[i] > min){
                min = bil[i];
            }
        }
    }

    printf("Maka hasil dari max-2 adalah : %d", min);
}
