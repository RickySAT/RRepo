#include <cs50.h>
#include <stdio.h>

// Akan berfungsi untuk menghitung jumlah kata pada suatu kalimat
int main ()
{
    string kalimat = get_string("Kalimat: ");
    int kata = 1;
    int n = 0;
    while (kalimat[n] != 0)
    {
        if (kalimat[n] == 32)
        {
            kata += 1;
            n += 1;
        }
        else
        {
            n += 1;
        }
    }
    printf("Jumlah kata: %i\n", kata);
}
