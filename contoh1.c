/*
Nama Program  : Pertemuan 1
Deskripsi     : Pengenalan tipe data dan bahasa C yang digunakan pada mata kuliah Algoritma dan Pemrograman 
Nama Pembuat  : Asprak Alpro A2
NIM           : ------
Tanggal       : ------
*/
 
// Header atau library yang digunakan pada program 
#include <stdio.h> // library yang digunakan untuk input dan output
#include <stdlib.h> // library yang digunakan untuk fungsi-fungsi umum seperti malloc(), free(), dll
#include <string.h> // library yang digunakan untuk fungsi-fungsi string seperti strlen(), strcpy(), dll
#include <math.h> // library yang digunakan untuk fungsi-fungsi matematika seperti sqrt(), pow(), dll

int  main(void){
    /* CARA COMMENT
    gunakan "//" untuk comment satu baris
    gunakan "/*" untuk comment lebih dari satu baris
    */

    // Kamus Lokal
    /*Kamus lokal berisikan variabel 
    yang ingin dideklarasikan
    */
    int a; // Deklarasi variabel a dengan tipe data integer
    float b; // Deklarasi variabel b dengan tipe data float
    char c; // Deklarasi variabel c dengan tipe data char
    double d; // Deklarasi variabel d dengan tipe data double
    char e[100]; // Deklarasi variabel e dengan tipe data char dan panjang 100 karakter
    const int f = 10; // Deklarasi variabel f dengan tipe data integer dan nilai konstan 10

    // Algoritma
    /* 
    Algortima berisikan langkah-langkah
    yang akan dilakukan oleh program
    */ 
    /*
            CARA MENAMPILKAN TIPE DATA PADA PROGRAM
        %d untuk integer
        %f untuk float
        %c untuk char
        %s untuk string
    */
    // contoh membuat program menghitung luas persegi
    // input diambil dari user menggunakan scanf()
    printf("Masukkan sisi persegi: "); // printf() berguna untuk menampilkan output ke layar
    scanf("%d", &a); // &a berguna untuk mengambil alamat variabel a
    printf("Luas persegi adalah %d", a*a); // menampilkan output luas persegi

    // cara mengakses char array
    printf("Masukkan nama: ");
    scanf("%s", e);
    printf("Nama anda adalah %s", e);

    // contoh menampilkan char pada program
    printf("Masukkan karakter: ");
    scanf("%c", &c);
    printf("Karakter yang anda masukkan adalah %c", c);
    
    return 0; // return 0 berguna agar program tidak memakan banyak memori dan mengakhiri program
}