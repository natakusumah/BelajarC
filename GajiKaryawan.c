// 2402009752 - Raden Ardiansyah Natakusumah - BINUS University
// Program menghitung gaji perusahaan ABC

#include <stdio.h>

int main(){
    int gajipokok,goljabatan,golpendidikan,totaljamkerja,jamkerja,lembur,totalgaji;
// input
    printf("PROGRAM HITUNG GAJI KARYAWAN\n");
    char nama[100]; //declaring string nama dengan size 100
    printf("Nama Karyawan: "); fgets(nama, sizeof(nama), stdin); // membaca input user string nama

    printf("Golongan Jabatan (Pilih 1, 2 atau 3): "); scanf("%d",&goljabatan);
    gajipokok = 2000000;
    switch (goljabatan) {
        case 1 :
            goljabatan = gajipokok * 0.05; // 5% dari gaji pokok
            break;
        case 2 :
            goljabatan = gajipokok * 0.1; // 10% dari gaji pokok
            break;
        case 3 :
            goljabatan = gajipokok * 0.15; // 15% dari gaji pokok
            break;
        default:
            printf("Pilihan yang anda masukan salah\n");
            goljabatan = 0;
            break;
    }

    printf("Pendidikan (1. SMA, 2. D3 atau 3. S1): "); scanf("%d",&golpendidikan);
    switch (golpendidikan) {
        case 1 :
            golpendidikan = gajipokok * 0.025; // 2,5% dari gaji pokok
            break;
        case 2 :
            golpendidikan = gajipokok * 0.05; // 5% dari gaji pokok
            break;
        case 3 :
            golpendidikan = gajipokok * 0.1; // 10% dari gaji pokok
            break;
        default:
            printf("Pilihan yang anda masukan salah\n");
            golpendidikan = 0;
            break;
    }
    
    totaljamkerja = 0;
    jamkerja = 176; // asumsi 1 bulan 22 hari kerja * 8 jam
    lembur = 0;
    printf("Jumlah jam kerja: "); scanf("%d",&totaljamkerja); // membaca input user angka
    if (totaljamkerja > jamkerja) { // jika total jam kerja lebih dari jam kerja normal, maka mendapatkan lembur
        lembur = (totaljamkerja - jamkerja) * 3000;
    }
    
    totalgaji = gajipokok + goljabatan + golpendidikan + lembur;

// output
    printf("Nama Karyawan: %s",nama);
    printf("\tTunjangan Jabatan Rp %d\n",goljabatan);
    printf("\tTunjangan Pendidikan Rp %d\n",golpendidikan);
    printf("\tHonor Lembur Rp %d\n",lembur);
    printf("Total Gaji  Rp %d\n",totalgaji);

    return 0;
}