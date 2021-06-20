#include <stdio.h>

int main(int argc, char **argv)
{
    char agestring[10];
    int age;
    int bonus;

    printf("Masukkan umur anda: ");
    gets(agestring);
    age = atoi(agestring);

    if(age > 45){
        bonus = 1000;
    } else {
        bonus = 500;
    }
    printf(" Umur anda %d tahun, jadi bonus anda adalah %d.\n", age, bonus);
}