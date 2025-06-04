// Libraries
#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>

// Prototipe
int nhuruf (string s);
int nkata (string s);
int nkalimat (string s);

// Program Utama
int main()
{
    string kalimat = get_string("Berikan teks yang ingin kamu olah: ");
    int jumlah_huruf = nhuruf(kalimat);
    int jumlah_kata = nkata(kalimat);
    int jumlah_kalimat = nkalimat(kalimat);
    printf("Jumlah huruf: %i\n", jumlah_huruf);
    printf("Jumlah kata: %i\n", jumlah_kata);
    printf("Jumlah kalimat: %i\n", jumlah_kalimat);

    // Menghitung L
    double l = (double) jumlah_huruf/jumlah_kata;
    double L = l*100;
    // Menghitung S
    double s = (double) jumlah_kalimat/jumlah_kata;
    double S = s*100;
    // Penghitungan level bacaan
    double index = 0.0588 * L - 0.296 * S - 15.8;
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 1 && index <= 16)
    {
        printf("Grade %i\n", (int) round(index));
    }
    else
    {
        printf("Grade 16+\n");
    }
}
// Prototipe untuk menghitung banyak huruf dalam kalimat
int nhuruf (string s)
{

    int jumhur = 0;
    int n = 0;
    while (s[n] != 0)
    {
        if (isalpha(s[n]) != 0)
        {
            jumhur += 1;
        }
        n += 1;
    }
    return jumhur;
}

// Prototipe untuk menghitung banyak kata dalam kalimat
int nkata (string s)
{
    int kata = 1;
    int n = 0;
    while (s[n] != 0)
    {
        if (s[n] == 32)
        {
            kata += 1;
            n += 1;
        }
        else
        {
            n += 1;
        }
    }
    return kata;
}

// Prototipe untuk menghitung banyak kalimat dalam suatu teks
int nkalimat(string s)
{
    int nkalimat = 0;
    int arai = 0;
    while (s[arai] != '\0')
    {
        if (s[arai] == '.' || s[arai] == '?' || s[arai] == '!')
        {
            nkalimat += 1;
            arai += 1;
        }
        else
        {
            arai += 1;
        }
    }
    return nkalimat;
}
