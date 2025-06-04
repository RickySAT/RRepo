#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int tinggi;
    do
    {
        tinggi = get_int("How tall is the pyramid? ");
        if (tinggi < 1)
        {
            printf("Input can't be less than 1\n");
        }
    }
    while (tinggi < 1);
    for (int hitungan = 1; hitungan <= tinggi; hitungan++)
    {
        for (int hitunganspasi = hitungan; hitunganspasi < tinggi; hitunganspasi++)
        {
            printf(" ");
        }
        for (int hitunganpagar = 0; hitunganpagar < hitungan; hitunganpagar++)
        {
            printf("#");
        }
        printf("  ");
        for (int hitunganpagar = 0; hitunganpagar < hitungan; hitunganpagar++)
        {
            printf("#");
        }
        printf("\n");
    }
}
