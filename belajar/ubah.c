#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int pnjg(string n);

int main(void)
{
    string nama = get_string("Nama: ");

    int n = pnjg(nama);

    char nm;
    printf("Nama: ");
    for (int i = 0 ; i < n ; i++)
    {
        if (nama[i] <= 90 && nama[i] >= 65 )
        {
            nm = nama[i] + 32;
            printf("%c", nm);
        }
        else if (nama[i] >= 90 && nama[i] <= 122)
        {
            nm = nama[i] - 32;
            printf("%c", nm);
        }
        else if (nama[i] == 32)
        {
            nm = nama[i];
            printf("%c", nm);
        }
    }
    printf("\n");
}


int pnjg(string n)
{
    int c = 0;
    int hitung = 0;
    while (n[c] != 0)
    {
        if (isblank(n[c]))
        {
            hitung += 1;
        }
        else
        {
            hitung += 1;
        }
        c += 1;
    }
    return hitung;
}
