#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Meminta input skor
    int skor[3];
    skor [0] = get_int("Skor 1 adalah ");
    skor [1] = get_int("Skor 2 adalah ");
    skor [2] = get_int("Skor 3 adalah ");
    // Melakukan cek nilai skor
    printf("Skor 1 adalah: %i\n", skor[0]);
    printf("Skor 2 adalah: %i\n", skor [1]);
    printf("Skor 3 adalah: %i\n", skor [2]);
    // Menghitung rata-rata skor
    float average = (skor[0]+skor[1]+skor[2]) / (float) 3;
    printf("Rata-rata nilai:%f\n", average);
    // Mencoba mencetak input dalam tipe lain
    printf("%c%c%c\n", skor [0], skor [1], skor[2]);
}
