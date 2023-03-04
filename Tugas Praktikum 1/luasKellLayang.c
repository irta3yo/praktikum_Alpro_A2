/*
Nama Program  : luasKellLayang
Deskripsi     : menghitung luas keliling layang
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/3/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float s1; /* sisi satu layang */
    float s2; /* sisi dua layang */
    float d1; /* diagonal satu layang */
    float d2; /* diagonal dua layang */
    float luas; /* luas layang-layang */
    float kell; /* keliling layang-layang */

    printf("Sisi satu :      m\b\b\b\b\b\b\b");
    scanf("%f",&s1);
    printf("Sisi dua :      m\b\b\b\b\b\b\b");
    scanf("%f",&s2);
    printf("Diagonal satu :      m\b\b\b\b\b\b\b");
    scanf("%f",&d1);
    printf("Diagonal dua :      m\b\b\b\b\b\b\b");
    scanf("%f",&d2);

    luas = 0.5 * d1 * d2;
    kell = 2 * (s1 + s2);

    printf("Maka luas layang-layang adalah %f", luas);
    printf(" m2 \n");
    printf("Maka keliling layang-layang adalah %f", kell);
    printf(" m");

}
