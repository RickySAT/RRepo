#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string katas = get_string("Berikan input: ");
    printf("Inputmu adalah:%s\n", katas);

    int itung = 0;
    while (katas[itung] != '\0')
    {
        if (int katas[itung] > 90)
        {
            int katas[itung] -= 32;
            printf("%c", katas[itung]);
            itung += 1;
        }
        else if (int katas[itung] < 90)
        {
            int katas[itung] += 32;
            printf("%c", katas[itung]);
            itung += 1;
        }
    }
    printf("\n");
}
