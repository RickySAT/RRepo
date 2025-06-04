#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Menetapkan banyak setiap macam koin
    int n25 = 0, n10 = 0, n5 = 0, n1 = 0;
    // Menetapkan koin pembagi
    int p25 = 25, p10 = 10, p5 = 5, p1 = 1;
    // Meminta nilai kembalian pada pengguna
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change <= 0);
    // Memproses sisa setelah kembalian dibagi dengan setiap  macam koin
    n25 = change / p25;
    change = change % p25;

    n10 = change / p10;
    change = change % p10;

    n5 = change / p5;
    change = change % p5;

    n1 = change;
    int total_coin = n25 + n10 + n5 + n1;
    printf("Total coin: %i\n", total_coin);
}
