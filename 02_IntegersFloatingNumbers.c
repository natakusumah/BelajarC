#include <stdio.h>

int main(){
    double subtotal;
    double pajak;
    double total;
    double persenpajak;

    persenpajak = 0.3;
    subtotal = 200;
    pajak = subtotal * persenpajak;
    total = subtotal + pajak;

    printf("Pajak dari %.2f adalah %.2f, jadi totalnya adalah %.2f.\n",subtotal,pajak,total);

    return 0;
}