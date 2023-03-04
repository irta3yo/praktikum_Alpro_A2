/*
Nama Program  : CekBilSemp
Deskripsi     : Cek apakah input bilangan sempurna
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
    printf("inputan %d menghasilkan faktor ", N);

    temp = 0;
    if(N > 0){
        for(int i = 1; i <= N; i++){
            if((N % i) == 0){
                if(N != i){
                    printf("%d ", i);
                    temp = temp + i;
                }
            }
        }
        if(temp >= N){
            printf("adalah bilangan sempurna");
        }else{
            printf("bukan bilangan sempurna", N, temp);
        }

    }

}

