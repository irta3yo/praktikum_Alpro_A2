/*
Nama Program  : FaktorBil
Deskripsi     : Jumlah deret sesuai input
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/4/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int N; /* input bilangan */

    printf("input bilangan N : ");
    scanf("%d",&N);
    printf("Maka faktor bilangan adalah ");
    if(N > 0){
        for(int i = 1; i <= N; i++){
            if((N % i) == 0){
                printf("%d ", i);
            }
        }
    }

}

