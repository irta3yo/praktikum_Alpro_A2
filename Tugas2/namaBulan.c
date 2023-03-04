/*
Nama Program  : namaBulan
Deskripsi     : Menentukan bulan berdasarkan angka
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/4/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int nB; /* Menentukan bulan dari angka */

    printf("Masukan bilangan integer : ");
    scanf("%d",&nB);

    if(nB == 1){
        printf("%d Adalah bulan Januari", nB);
    }else if(nB == 2){
        printf("%d Adalah bulan Februari", nB);
    }else if(nB == 3){
        printf("%d Adalah bulan Maret", nB);
    }else if(nB == 4){
        printf("%d Adalah bulan April", nB);
    }else if(nB == 5){
        printf("%d Adalah bulan Mei", nB);
    }else if(nB == 6){
        printf("%d Adalah bulan Juni", nB);
    }else if(nB == 7){
        printf("%d Adalah bulan Juli", nB);
    }else if(nB == 8){
        printf("%d Adalah bulan Agustus", nB);
    }else if(nB == 9){
        printf("%d Adalah bulan September", nB);
    }else if(nB == 10){
        printf("%d Adalah bulan Oktober", nB);
    }else if(nB == 11){
        printf("%d Adalah bulan November", nB);
    }else if(nB == 12){
        printf("%d Adalah bulan Desember", nB);
    }else{
        printf("Masukkan salah");
    }
}

