/*
Nama Program  : CekBilPrima
Deskripsi     : Cek apakah input bilangan prima atau tidak
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
    int temp; /* penyimpanan temporari */

    printf("input bilangan N : ");
    scanf("%d",&N);

    temp = 0;
    if(N > 0){
        for(int i = 1; i <= N; i++){
            if((N % i) == 0){
                temp = temp + 1;
            }
        }
        if(temp == 2){
            printf("%d adalah bilangan prima", N);
        }else{
            printf("%d adalah bukan bilangan prima", N);
        }
    }

}

