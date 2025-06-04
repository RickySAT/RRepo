#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string nama = get_string("What's your name? ");
    printf("Hello, %s\n", nama);
}
