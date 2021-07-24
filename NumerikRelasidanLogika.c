/* 2402009752 - Raden Ardiansyah Natakusumah - BINUS University
Program Menghitung Hasil Numerik dari Ekspresi Relasi dan Logika */

#include<stdio.h>

int main()
{
    int A, B, C, K, L, M, hasil_a, hasil_b, hasil_c, hasil_d, hasil_e;
    A = 2, B = 3, C = 4, K = 5, L = 6, M = 7;

    printf("A = %d \n",A);
    printf("B = %d \n",B);
    printf("C = %d \n",C);
    printf("K = %d \n",K);
    printf("L = %d \n",L);
    printf("M = %d \n",M);

    hasil_a = (4+2>A&&B-2>3+2||B+2<=6+2);
    hasil_b = K+5<M||(C*M<L&&2*M-L>0);
    hasil_c = L+5<M||C*K<L&&2*K-L>0;
    hasil_d = A*4<=3*M+B;
    hasil_e = K+10>A&&L-2>4*C;

    printf("\nHasil D=(4+2>A&&B-2>3+2||B+2<=6+2) yaitu: %d \n",hasil_a);
    printf("Hasil D=K+5<M||(C*M<L&&2*M-L>0) yaitu: %d \n",hasil_b);
    printf("Hasil D=L+5<M||C*K<L&&2*K-L>0 yaitu: %d \n",hasil_c);
    printf("Hasil D=A*4<=3*M+B yaitu: %d \n",hasil_d);
    printf("Hasil D=K+10>A&&L-2>4*C yaitu: %d \n",hasil_e);

    return 0;
}