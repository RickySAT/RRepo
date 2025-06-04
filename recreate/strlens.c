#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(string kalimat)
{
    string kalimat = get_string("Kalimat: ");

    int huruf = 0, i = 0;
    while (kalimat[i] != '\0')
    {
        if(isalpha(kalimat[i]) != 0)
        {
            huruf += 1;
        }
        i += 1;
    }
    return huruf;
}
