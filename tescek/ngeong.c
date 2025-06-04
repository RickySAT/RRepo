#include <stdio.h>
#include <cs50.h>

void meong (int n);

int main (void)
{
    int iaw = get_int("Berapa kali kucing mengeong? ");
    meong(iaw);
}

void meong (int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("Meong x%i\n", i);
    }
}
