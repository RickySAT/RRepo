#include <stdio.h>
#include <cs50.h>

void baris (int bris);
void kolom (int klom);

int main (void)
{
    char barkol;
    do
    {
            barkol = get_char("Ingin membuat baris atau kolom?(b/k) ");
    }
    while (barkol != 'b' && barkol != 'B' && barkol != 'k' && barkol != 'K');

    if (barkol == 'b' || barkol == 'B')
    {
        int nbaris = get_int("Berapa panjang baris yang kamu inginkan? ");
        baris(nbaris);
    }
    else if (barkol == 'k' || barkol == 'K')
    {
        int nkolom = get_int("Berapa tinggi kolom yang kamu inginkan? ");
        kolom(nkolom);
    }
}

void baris (int bris)
{
    for (int ic = 0; ic < bris; ic++)
    {
        printf("#");
    }
    printf("\n");
}
void kolom (int klom)
{
    for (int jc = 0; jc < klom; jc++)
    {
        printf("#\n");
    }
}
