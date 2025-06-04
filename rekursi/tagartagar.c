#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

void tagar (int banyak);

int main(int argc, string argv[])
{
    tagar(atoi(argv[1]));
}

void tagar (int banyak)
{
    if (banyak == 0)
    {
        return;
    }
    tagar(banyak - 1);

    for(int i = 0; i < banyak; i++)
    {
        printf("#");
    }
    printf("\n");
}
