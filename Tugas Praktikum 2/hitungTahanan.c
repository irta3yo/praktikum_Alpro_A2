/*
Nama Program  : hitungTahanan
Deskripsi     : Menjumlahkan tahanan apabila seri
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/4/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int t1; /* Tahanan 1 */
    int t2; /* Tahanan 2 */
    int t3; /* Tahanan 3 */

    printf("Masukan input 1 : ");
    scanf("%d",&t1);
    printf("Masukan input 2 : ");
    scanf("%d",&t2);
    printf("Masukan input 3 : ");
    scanf("%d",&t3);

    if((t1 == t2) && ((t2 == t3) && (t1 == t3))){
        printf("Karena tahanan seri maka hasilnya adalah %d", t1 + t2 + t3);
    }else if((t1 < 0) && ((t2 < 0) && (t3 < 0))){
        printf("%d %d %d terdapat bilangan negatif", t1, t2, t3);
    }else{
        printf("%d %d %d bilangan tidak seri", t1, t2, t3);
    }
}

