/*
Nama Program  : BilSempN
Deskripsi     : Menentukan N adalah bilangan sempurna atau tidak
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
            for(int j = 1; j <= i; j++){
                if((i % j) == 0){
                    if(i != j){
                        temp = temp + j;
                    }
                }
            }
            if(temp >= i){
                temp = 0;
                printf("%d adalah bilangan sempurna \n", i);
            }else{
                temp = 0;
            }
        }

    }

}

