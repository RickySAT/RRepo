#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float bilangan1 = get_float("Bilangan 1: ");
    float bilangan2 = get_float("Bilangan 2: ");
    float kali = bilangan1*bilangan2;
    printf("Hasil jujur: %f\n", kali);
    if(kali < 1)
    {
        printf("Before grade 1\n");
    }
    else if (kali >= 1 && kali <= 16)
    {
        printf("Level %i\n", (int) round(kali));
    }
    else
    {
        printf("Grade 16+\n");
    }
}
