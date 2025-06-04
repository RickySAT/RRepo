#include <cs50.h>
#include <stdio.h>

int main()
{
    string kalimat = get_string("Kalimat: ");
    int nkalimat = 0;
    int arai = 0;
    while (kalimat[arai] != '\0')
    {
        if (kalimat[arai] == '.' || kalimat[arai] == '?' || kalimat[arai] == '!')
        {
            nkalimat += 1;
            arai += 1;
        }
        else
        {
            nkalimat += 0;
            arai += 1;
        }
    }
    printf("Jumlah kalimat adalah: %i\n", nkalimat);
}
