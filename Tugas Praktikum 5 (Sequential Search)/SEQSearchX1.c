/*
Nama Program  : SEQSearchX1
Deskripsi     : Sequential Search
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 05/20/2023
*/

#include <stdio.h>

void SEQSearchX1(int T[], int N, int IX, int X){
    int i = 1;
    while((i < N) && (T[i] != X)){
        i = i + 1;
    }
    if(T[i] == X){
        IX = i;
    }else{
        IX = 0;
    }
    if(IX == 0){
        printf("Tidak Ketemu");
    }else{
        printf("Ketemu");
    }
}

int main() {
    int N = 8;
    int T[] = {1, 3, 5, -8, 12, 90, 3, 5};
    int X = 5;
    int IX = 0;
    SEQSearchX1(T, N, IX, X);
}
