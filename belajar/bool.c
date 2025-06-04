#include <cs50.h>
#include <stdio.h>

int main(void)
{
    bool tanya = get_bool("Apa itu kucing? ");
    if (tanya == 1)
    {
        printf("Iya gaes\n");
    }
    else if (tanya == 0)
    {
        printf("Bukan gaes\n");
    }
}
