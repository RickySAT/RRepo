#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    int kunci = atoi(argv[1]);
    char alphabet1[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                         'h', 'i', 'j', 'k', 'l', 'm', 'n',
                         'o', 'p', 'q', 'r', 's', 't', 'u',
                         'v', 'w', 'x', 'y', 'z'};
    char alphabet2[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G',
                         'H', 'I', 'J', 'K', 'L', 'M', 'N',
                         'O', 'P', 'Q', 'R', 'S', 'T', 'U',
                         'V', 'W', 'X', 'Y', 'Z'};
    printf("Plain text:");
    string kalimat = get_string(" ");
    printf("Ciphertext: ");
    for (int i = 0, panjang = strlen(kalimat); i < panjang; i++)
    {
        if (isalpha(kalimat[i]))
        {
            if (islower(kalimat[i]))
            {
                int hasil = ((kalimat[i] + kunci) - 'a') % 26;
                printf("%c", alphabet1[hasil]);
            }
            else if (isupper(kalimat[i]))
            {
                int hasil = ((kalimat[i] + kunci) - 'A') % 26;
                printf("%c", alphabet2[hasil]);
            }
        }
        else
        {
            printf("%c", kalimat[i]);
        }
    }
    printf("\n");
}
