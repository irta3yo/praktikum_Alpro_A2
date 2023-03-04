/*
Nama Program  : Cek Segitiga
Deskripsi     : Cek segitiga apakah sama sisi, sama kaki, atau sembarang
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 3/4/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
    int s1; /* sisi 1 */
    int s2; /* sisi 2 */
    int s3; /* sisi 3 */

    printf("Masukan sisi 1 : ");
    scanf("%d",&s1);
    printf("Masukan sisi 2 : ");
    scanf("%d",&s2);
    printf("Masukan sisi 3 : ");
    scanf("%d",&s3);

    if((s1 == s2) && ((s2 == s3) && (s1 == s3))){
        printf("%d %d %d Adalah segitiga sama sisi", s1, s2, s3);
    }else if((s1 == s2) || ((s2 == s3) || (s1 == s3))){
        printf("%d %d %d Adalah segitiga sama kaki", s1, s2, s3);
    }else if((s1 <= 0) || ((s2 <= 0) || (s3 <= 0))){
        printf("%d %d %d Bukan segitiga", s1, s2, s3);
    }else if((s1 != s2) || ((s2 != s3) || (s1 != s3))){
        printf("%d %d %d Adalah segitiga sembarang", s1, s2, s3);
    }
}

