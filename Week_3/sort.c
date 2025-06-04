#include <cs50.h>
#include <stdio.h>

int main()
{
    int skor[9] = {7, 5, 4, 2, 9, 4, 5, 7, 3};
    for (int i = 0; i < 9 - 1; i++)
    {
        for (int j = 0; j < 9 - 1; j++)
        {
            if(skor[j] > skor[j+1])
            {
                int sementara = skor[j+1];
                skor[j+1] = skor[j];
                skor[j] = sementara;
            }
        }
    }
    for (int i = 0; i < 9; i++)
    {
        printf("%i, ", skor[i]);
    }
    printf("\n");
}
