/*
Nama Program  : Descending(BubbleShort)
Deskripsi     : Pengurutan Descending
Nama Pembuat  : Tryo Irtadlo
NIM           : 24060118130128
Tanggal       : 05/20/2023
*/

#include <stdio.h>
void BubbleSort(int T[], int N){
    int i, j, temp;
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (T[j] < T[j + 1]) {
                // Tukar posisi elemen
                int temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }
}

int main() {
    int T[] = {11, 34, 25, 12, 22, 11, 90};
    int N = sizeof(T) / sizeof(T[0]);

    printf("Array sebelum diurutkan: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }

    BubbleSort(T, N);

    printf("\nArray setelah diurutkan (descending): ");
    for (int i = 0; i < N; i++) {
        printf("%d ", T[i]);
    }

    return 0;
}
