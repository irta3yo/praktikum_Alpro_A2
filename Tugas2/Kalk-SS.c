/*
Nama Program  : Kalk-SS
Deskripsi     : kalkulator sederhana
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/4/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float iA; /* input 1 */
    float iB; /* input 2 */
    char cI; /* inputan character */
    int temp1;
    int temp2;
    int hasil;

    printf("a untuk iA + iB \n");
    printf("b untuk iA - iB \n");
    printf("c untuk iA * iB \n");
    printf("d untuk iA / iB \n");
    printf("e untuk iA div iB \n");
    printf("f untuk iA mod iB \n \n");

    printf("Masukan inputan dari menu diatas : ");
    scanf("%c",&cI);
    printf("Masukan inputan ke-1 : ");
    scanf("%f",&iA);
    printf("Masukan inputan ke-2 : ");
    scanf("%f",&iB);

    if (cI == 'a'){
        printf("hasil adalah %f", iA + iB);
    }else if (cI == 'b'){
        printf("hasil adalah %f", iA - iB);
    }else if (cI == 'c'){
        printf("hasil adalah %f", iA * iB);
    }else if (cI == 'd'){
        printf("hasil adalah %f", iA / iB);
    }else if (cI == 'e'){
        printf("hasil adalah %f", iA / iB);
    }else if (cI == 'f'){
        temp1 = (int)iA;
        temp2 = (int)iB;
        hasil = temp1 % temp2;
        printf("hasil adalah %d", hasil);
    }else{
        printf("Kamu salah input");
    }

}

