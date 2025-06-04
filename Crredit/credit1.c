#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // int credit: untuk input nomor kartu kredit

    // Meminta input nomor kartu kredit
    long credit = get_long("Masukkan nomor kartu kredit anda: ");

    long kredit = credit; // Membuat variabel copy dari credit

    // Mendapatkan dan mengolah tiap digit dari nomor kartu kredit
    int ndigit = 0; // Counter untuk mengetahui banyak digit yang dimiliki oleh suatu kartu kredit

    int digit; // Membuat suatu variabel untuk menampung tiap digit dari nomor kartu kredit

    int ceksum = 0; // Membuat suatu variabel untuk menampung jumlah olah digit

    while (kredit > 0)
    {
        digit = kredit % 10;
        kredit /= 10;
        ndigit += 1;
        printf("Digit%i:%i\n", ndigit, digit); // Cek kebenaran output digit

        // Pengolahan dengan melakukan cek ganjil genap pada ndigit
        if (ndigit % 2 == 0) // Kondisi genap
        {
            digit *= 2;
            if (digit > 9)
            {
                ceksum += digit % 10;
                digit /= 10;
                ceksum += digit % 10;
            }
            else
            {
            ceksum += digit;
            }
        }
        else // Kondisi ganjil
        {
            ceksum += digit;
        }
    }
    printf("Jumlah digit:%i\n", ceksum); // Cek nilai ceksum
    if (ceksum % 10 ==0)
    {
        printf ("Ceksum Valid. Jenis kartu diproses...\n");
        // AMEX
        if (ndigit == 15 && (credit /= 10000000000000 == 34 || credit /= 10000000000000 == 37))
        {
            printf ("Jenis kartu adalah AMEX\n");
        }
        if (ndigit == 16 && (credit /= 100000000000000 == 51 || credit /= 100000000000000 == 52 || credit /= 100000000000000 == 53 || credit /= 100000000000000 == 54 || credit /= 100000000000000 == 55))
        {
            printf ("Jenis kartu adalah MasterCard\n");

        }
        if (ndigit == 13 && (credit /= 1000000000000 == 4))
        {
            printf ("Jenis kartu adalah Visa\n");
        }
        if (ndigit == 16 && (credit /= 1000000000000000 == 4))
        {
            printf ("Jenis kartu adalah Visa\n");
        }
        else
        {
            printf ("Jenis kartu tak terdeteksi (Invalid)\n");
        }
    }
    else
    {
        printf ("Ceksum Invalid\n");
    }


}
