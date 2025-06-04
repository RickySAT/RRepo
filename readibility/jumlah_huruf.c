#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main (void)
{
    string kata = get_string("Kata: ");
    printf("Banyak huruf pada kata: ");
    int jumhur = 0;
    int n = 0;
    while (kata[n] != '\0')
    {
        if (isalpha(kata[n]) != 0)
        {
            n += 1;
            jumhur += 1;
        }
        else if (isalpha(kata[n]) == 0)
        {
            n += 1;
        }
    }
    printf("%i\n", jumhur);
    int panjang = strlen(kata);
    printf("Strlen: %i\n", panjang);
}
