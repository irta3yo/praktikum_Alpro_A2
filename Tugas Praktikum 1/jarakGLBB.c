/*
Nama Program  : jarakGLBB
Deskripsi     : menghitung jarak (S dalam meter) yang ditempuh benda yang mengalami gerak lurus berubah beraturan dengan kecepatan awal v0 dalam waktu t, dan percepatan a.
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/3/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float v0; /* Kecepatan awal dalam m/d */
    float t; /* waktu dalam detik */
    float a; /* percepatan dalam m/d */
    float S; /* jarak yang ditempuh dalam m */

    printf("Kecepatan awal :      m/d\b\b\b\b\b\b\b");
    scanf("%f",&v0);
    printf("Waktu :      detik\b\b\b\b\b\b\b");
    scanf("%f",&t);
    printf("Percepatan :      m/d\b\b\b\b\b\b\b");
    scanf("%f",&a);

    S = v0 * t + 0.5 * (a * t * t);

    printf("Maka jarak yang ditempuh adalah %f", S);
    printf(" m");

}
