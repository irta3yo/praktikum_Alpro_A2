/*
Nama Program  : namaHari
Deskripsi     : Menentukan hari berdasarkan bilang 1 sd 7
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/4/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int nomorHari; /* bilangan integer sembarang */

    printf("Masukan bilangan integer : ");
    scanf("%d",&nomorHari);

    if(nomorHari == 1){
        printf("%d Adalah hari Senin", nomorHari);
    }else if(nomorHari == 2){
        printf("%d Adalah hari Selasa", nomorHari);
    }else if(nomorHari == 3){
        printf("%d Adalah hari Rabu", nomorHari);
    }else if(nomorHari == 4){
        printf("%d Adalah hari Kamis", nomorHari);
    }else if(nomorHari == 5){
        printf("%d Adalah hari Jum'at", nomorHari);
    }else if(nomorHari == 6){
        printf("%d Adalah hari Sabtu", nomorHari);
    }else if(nomorHari == 7){
        printf("%d Adalah hari Minggu", nomorHari);
    }else{
        printf("Masukkan tidak sesuai");
    }
}

