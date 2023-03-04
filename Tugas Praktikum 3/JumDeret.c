/*
Nama Program  : JumDeret
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
    int tD; /* total deret */

    printf("input bilangan N : ");
    scanf("%d",&N);

    if(N > 0){
        for(int i = 1; i <= N; i++){
            tD = tD + i;
        }

        printf("jumlah deret maka %d", tD);
    }

}

