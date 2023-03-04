/*
Nama Program  : gayaSentr
Deskripsi     : menghitung gaya sentripental dalam F (Newton)
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/3/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float m; /* massa dalam kg */
    float v; /* kecepatan dalam m/d */
    float r; /* jari-jari dalam meter */
    float F; /* hasil gaya sentripental Newton */

    printf("Massa :      kg\b\b\b\b\b\b\b");
    scanf("%f",&m);
    printf("Kecepatan :      m/d\b\b\b\b\b\b\b");
    scanf("%f",&v);
    printf("Jari-jari :      m\b\b\b\b\b\b\b");
    scanf("%f",&r);

    F = m * (v * v / r);

    printf("Maka gaya sentripental adalah %f", F);
    printf(" Newton");

}
