/* 2402009752 - Raden Ardiansyah Natakusumah - BINUS University
Input: 2 kalimat
Output: gabungan 2 kalimat input, membalik kalimat gabungan, jumlah Huruf kalimat pertama, jumlah Huruf kalimat kedua, total Jumlah huruf, total Perkalian kalimat */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* reverse(char input[]){
    int len = strlen(input);
    char *res = malloc(sizeof(len));
    int written = 0;

    for(int l = len-1; l >= 0; l--){
        res[written] = input[l];
        written++;
    }

    return res;
}

int main(){
    char kalimat1[50], kalimat2[50];

    printf("Kalimat 1 = ");
    fgets(kalimat1, sizeof(kalimat1), stdin);

    printf("Kalimat 2 = ");
    fgets(kalimat2, sizeof(kalimat2), stdin);

    char gabungan[100];
    sprintf(gabungan, "%s %s", kalimat1, kalimat2);
    char* dibalik = reverse(gabungan);

    printf("\nGabungan 2 buah inputan kalimat = %s", gabungan);
    printf("Hasil membalik kalimat gabungan = %s\n", reverse(gabungan));

    int lenKalimat1 = strlen(kalimat1);
    int lenKalimat2 = strlen(kalimat2);
    int totalJumlahHuruf = lenKalimat1 + lenKalimat2;
    int perkalianKalimat = lenKalimat1 * lenKalimat2;

    printf("\nJumlah Huruf kalimat pertama = %d\n", strlen(kalimat1));
    printf("Jumlah Huruf kalimat kedua = %d\n", strlen(kalimat2));
    printf("Total Jumlah huruf = %d\n", totalJumlahHuruf);
    printf("Total Perkalian kalimat = %d\n", perkalianKalimat);
}
