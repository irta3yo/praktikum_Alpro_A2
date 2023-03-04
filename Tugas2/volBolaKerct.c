/*
Nama Program  : volBolaKerct
Deskripsi     : menghitung volume Bola Kerucut
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/3/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    float r; /* jari-jari dalam meter */
    float Vb; /* hasil volume bola m3 */
    float Vk; /* hasil volume kerucut m3 */
    const float PHI = 3.1415; /* hasil gaya sentripental Newton */

    printf("Jari-jari :      m\b\b\b\b\b\b\b");
    scanf("%f",&r);

    Vb = 4 / 3 * (PHI * r * r * r);
    Vk = 0.5 * Vb;

    printf("Maka volume bola adalah %f", Vb);
    printf(" m3 \n");
    printf("Maka volume kerucut adalah %f", Vk);
    printf(" m3");

}
