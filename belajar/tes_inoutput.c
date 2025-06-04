#include <cs50.h>
#include <stdio.h>

int meong (int kali);

int main (void)
{
    int mengeong = get_int("Ingin mengeong berapa kali? ");
    int hasil = meong(mengeong);
    printf("Kucing mengeong %i kali\n", hasil);
}

int meong (int kali)
{
    for (int i = 1; i <= kali; i++)
    {
        printf ("meong x%i ", i);
    }
    printf ("\n");
    return kali;
}
