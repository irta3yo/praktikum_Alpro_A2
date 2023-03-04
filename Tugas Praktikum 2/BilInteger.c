/*
Nama Program  : BilInteger
Deskripsi     : Cek apakah bilangan integer atau tidak
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/4/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int i; /* bilangan integer sembarang */

    printf("Masukan bilangan integer : ");
    scanf("%d",&i);

    if(i < 0){
        printf("%d Adalah bilangan bulat negatif", i);
    }else if(i > 0){
        printf("%d Adalah bilangan bulat positif", i);
    }else if(i == 0){
        printf("%d Adalah nol", i);
    }else{
        printf("%d bukan bilangan", i);
    }
}

