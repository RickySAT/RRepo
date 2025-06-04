#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Tes Nilai Karakter
    printf("Tes Nilai Karakter...\n");
    char kar = get_char("Karakter: ");
    printf("Nilai awal: %i\n", kar);

    // Tes Selisih Kapital dan non-Kapital
    printf("Tes Selisih...\n");
    int selisih = 'a' - 'A';
    printf("a - A: %i\n", selisih);

    // Tes Pengubahan Nilai Terhadap Suatu Karakter
    printf("Tes Pengubahan Nilai...\n");
    int karakter1 = get_char("Karakter yang ingin diubah nilainya: ");
    printf("Nilai karakter (awal): %i\n", karakter1);
    int value = get_int("Besar nilai perubahan: ");
    printf("Nilai karakter (akhir): %i\n", karakter1 + value);

    //
    char valuechar = get_char("Besar nilai perubahan (char): ");
    karakter1 += ' ';
    printf("Nilai karakter (akhir): %i\n", karakter1);
}
