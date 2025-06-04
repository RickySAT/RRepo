#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    // Kualifikasi Input
    // Jumlah Argc
    if (argc != 2)
    {
        printf("Penggunaan: substitution key\n");
        return 1;
    }
    // Jumlah karakter
    if (strlen(argv[1]) != 26)
    {
        printf("Kunci harus terdiri dari 26 karakter!\n");
        return 1;
    }
    // Alfabet dan Pengulangan
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        int freq = 0;
        if (!isalpha(argv[1][i]))
        {
            printf("Kunci harus merupakan karakter alfabet!\n");
            return 1;
        }
        else
        {
            for (int j = 0; j < strlen(argv[1]); j++)
            {
                char doe = tolower(argv[1][i]);
                if (doe == tolower(argv[1][j]))
                {
                    freq += 1;
                }
            }
            if (freq > 1)
            {
                printf("Kunci tidak boleh memuat duplikat!\n");
                return 1;
            }
        }
    }
    // Bagian 2: Eksekusi
    printf("plaintext: ");
    string plain_text = get_string("");
    printf("ciphertext: ");
    for (int i = 0; i < strlen(plain_text); i++)
    {
        if (!isalpha(plain_text[i]))
        {
            printf("%c", plain_text[i]);
        }
        else
        {
            if (isupper(plain_text[i]))
            {
                int hasil = plain_text[i] - 'A';
                printf("%c", toupper(argv[1][hasil]));
            }
            else
            {
                int hasil = plain_text[i] - 'a';
                printf("%c", tolower(argv[1][hasil]));
            }
        }
    }
    printf("\n");
    return 0;
}
