/*
Nama Program  : SimetriTabel
Deskripsi     : Menentukan apakah tabel simetri
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 13/03/2023
*/

#include <stdio.h>

int main() {
    int jumBil1;
    int jumBil2;
    int A;
    int T1[9999];
    int T2[9999];

    int i, count;

    printf("Masukkan jumlah T1 : ");
    scanf("%d", &jumBil1);

    /* Mengisi Array */
    for(i = 0; i < jumBil1; i++){
        do{
            printf("Masukkan array T1 indeks-%d : ", i);
            scanf("%d", &A);
            T1[i] = A;
        }while(A < 0);
    }

    A = 0;

    printf("\nMasukkan jumlah T2 : ");
    scanf("%d", &jumBil2);

    for(i = 0; i < jumBil1; i++){
        do{
            printf("Masukkan array T2 indeks-%d : ", i);
            scanf("%d", &A);
            T2[i] = A;
        }while(A < 0);
    }

    if(jumBil1 != jumBil2){
        printf("Tabel T1 dan T2 tidak simetri");
    }else{
        count = 0;
        for(i = 0; i < jumBil1; i++){
            if(T1[i] != T2[i]){
                printf("Tabel T1 dan T2 tidak simetri");
                i = jumBil1;
            }else{
                count = count + 1;
            }
        }
        if(count == jumBil1){
            printf("Tabel T1 dan T2 simetri");
        }
    }



    return 0;
}

