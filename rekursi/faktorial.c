// Libraries
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

// Prototype
int fakt (int soal);

// Program
int main (int argc, string argv[])
{
    int input = atoi(argv[1]);
    if (argc != 2)
    {
       printf("Usage: ./faktorial <number>\n");
       return 1;
    }
    if (input < 0)
    {
        printf("Number must be a positive number!\n");
        return 1;
    }

    printf("Number: %i!\n", input);
    printf("Result: ");
    int hasil = fakt(input);
    printf("%i\n", hasil);
}

int fakt (int soal)
{
    if (soal == 0)
    {
        return 1;
    }
    int result = soal * fakt(soal-1);
    return result;
}
