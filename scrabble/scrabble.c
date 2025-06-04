// Libraries
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Prototipe

// Program Utama
int main(void)
{
    // Penetapan Nilai
    int abjad[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                     1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    // Meminta Input Kata dari P1
    string kata1 = get_string("Player 1: ");

    // Meminta Input Kata dari P2
    string kata2 = get_string("Player 2: ");

    // Mengubah Setiap Karakter dari Input Menjadi Lowecase
    // Pemain 1
    for (int i = 0; i < strlen(kata1); i++)
    {
        if (kata1[i] >= 'A' && kata1[i] <= 'Z')
        {
            kata1[i] += 'a' - 'A';
        }
    }

    // Pemain 2
    for (int i = 0; i < strlen(kata2); i++)
    {
        if (kata2[i] >= 'A' && kata2[i] <= 'Z')
        {
            kata2[i] += 'a' - 'A';
        }
    }

    // Variabel Hasil
    int hasilp1 = 0;
    int hasilp2 = 0;
    for (int h = 0; h < strlen(kata1); h++)
    {
        if (kata1[h] <= 'z' & kata1[h] >= 'a')
        {
            hasilp1 += abjad[kata1[h] - 'a'];
        }
        else
        {
            hasilp1 += 0;
        }
    }
    for (int h = 0; h < strlen(kata2); h++)
    {
        if (kata2[h] <= 'z' & kata2[h] >= 'a')
        {
            hasilp2 += abjad[kata2[h] - 'a'];
        }
        else
        {
            hasilp2 += 0;
        }
    }
    if (hasilp1 > hasilp2)
    {
        printf("Player 1 Wins!\n");
    }
    else if (hasilp1 < hasilp2)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}


