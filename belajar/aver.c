#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int N = get_int("Ada berapa skor yang ingin kamu olah? ");
    int skor[N];
    int jumlah = 0;
    for (int i = 0; i < N; i++)
    {
        skor[i] = get_int("Skor %i: ", i+1);
        jumlah += skor[i];
    }

    // Jumlah Skor
    printf("Jumlah skormu adalah: %i\n", jumlah);

    // Rata-rata Skor
    float rata = jumlah/(float)N;
    printf("Rata-rata skormu adalah: %f\n", rata);

    // Tes
    printf("Skor:%i\n", skor);
}
