/* 2402009752 - Raden Ardiansyah Natakusumah - BINUS University
Program Billing Game Online 
harga tiap jam adalah Rp 2000, dan jika lebih dari 5 jam makan mendapat diskon 20% */

#include <stdio.h>

int main()
{
    printf("Billing Game Online\n");

    int total_jam, total_bayar, diskon;

    printf("Total jam pemakaian: ");
    scanf("%d", &total_jam);

    if(total_jam > 5)
        {diskon = total_jam * 2000 * 0.2;}
    else
        {diskon = 0;}
    total_bayar = (total_jam * 2000) - diskon;

    printf("\nLama Pemakaian: %d jam", total_jam);
    printf("\nTotal Bayar: Rp %d", total_bayar);

    return 0;
}