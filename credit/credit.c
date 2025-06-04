#include <cs50.h>
#include <stdio.h>

int main(void)
{
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

    if (ceksum % 10 == 0)
    {
        int duaDigitPertama;
        if (ndigit == 15)
        {
            duaDigitPertama = credit / 10000000000000;
            if (duaDigitPertama == 34 || duaDigitPertama == 37)
            {
                printf("AMEX\n");
                return 0;
            }
        }
        else if (ndigit == 16)
        {
            duaDigitPertama = credit / 100000000000000;
            if (duaDigitPertama == 51 || duaDigitPertama == 52 || duaDigitPertama == 53 ||
                duaDigitPertama == 54 || duaDigitPertama == 55)
            {
                printf("MASTERCARD\n");
                return 0;
            }
            duaDigitPertama = credit / 1000000000000000;
            if (duaDigitPertama == 4)
            {
                printf("VISA\n");
                return 0;
            }
        }
        else if (ndigit == 13)
        {
            duaDigitPertama = credit / 1000000000000;
            if (duaDigitPertama == 4)
            {
                printf("VISA\n");
                return 0;
            }
        }
    }

    printf("INVALID\n");
    return 0;
}
