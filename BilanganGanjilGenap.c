/* 2402009752 - Raden Ardiansyah Natakusumah - BINUS University
Input: Bilangan pertama, ganjil. Bilangan kedua, genap.
Validasi untuk kedua input.
Output: berupa jumlah, rata-rata, kuadrat dari kedua input bilangan. */

#include <stdio.h>
#include <math.h>

int main(){
    int bil1, bil2, jumlah;
    float rata;

    do{
        printf("Bilangan Pertama = ");
        scanf("%d", &bil1);
    }while(bil1%2==0);

    do{
        printf("Bilangan Kedua = ");
        scanf("%d", &bil2);
    }while(bil2%2!=0);

    jumlah = bil1 + bil2;
    rata = (float) jumlah / 2;

    printf("Jumlah = %d\n", jumlah);
    printf("Rata rata = %.2f\n", rata);
    // todo
    printf("Kuadrat Bilangan Pertama = %d\n", bil1*bil1);
    printf("Kuadrat Bilangan Kedua= %d", bil2*bil2);

    return 0;
}
