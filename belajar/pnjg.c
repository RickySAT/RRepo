#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

// Prototipe
int pnjg(string n);

int main(void)
{
    string nama = get_string("Siapa namamu? ");
    printf("Hai, %s!\n", nama);

    int panjang_nama = pnjg(nama);
    printf("Panjang namamu adalah %i karakter!\n", panjang_nama);

    // Mencoba menghitung panjang string
}
int pnjg(string n)
{
    int c = 0;
    int hitung = 0;
    while (n[c] != 0)
    {
        if (isblank(n[c]))
        {
            hitung += 0;
        }
        else
        {
            hitung += 1;
        }
        c += 1;
    }
    return hitung;
}
