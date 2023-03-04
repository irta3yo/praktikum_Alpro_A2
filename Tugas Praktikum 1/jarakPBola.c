/*
Nama Program  : jarakPbola
Deskripsi     : menghitung gerak bola dengan jarak meter
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
    const float g = 9.80665; /* konstanta gravitasi m/s2 */
    float y; /* jarak gerak bola dalam meter */

    printf("Kecepatan awal :      m/d\b\b\b\b\b\b\b");
    scanf("%f",&v0);
    printf("Waktu :      detik\b\b\b\b\b\b\b");
    scanf("%f",&t);

    y = v0 * t - 0.5 * (g * t * t);

    printf("Maka jarak yang ditempuh adalah %f", y);
    printf(" m");

}
