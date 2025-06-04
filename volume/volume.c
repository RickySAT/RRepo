#include <cs50.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

const int HEADER = 44;

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }
    FILE *input = fopen(argv[1], "rb");
    if (input == NULL)
    {
        printf("Can't open the file\n");
        return 2;
    }
    FILE *output = fopen(argv[2], "wb");
    if (output == NULL)
    {
        printf("Can't open the file\n");
        return 3;
    }
    // Konversi factor menjadi float
    float factor = atof(argv[3]);
    // Inisialisasi buffer
    uint8_t *buffer_header = malloc(HEADER);
    // Membaca header
    int blocks_read = fread(buffer_header, 1, HEADER, input);
    printf("Blocks read: %i\n", blocks_read);
    int blocks_written = fwrite(buffer_header, 1, HEADER, output);
    printf("Blocks written: %i\n", blocks_written);
    free(buffer_header);

    // Mengetahui panjang file dalam byte
    fseek(input, 0, SEEK_END);
    long file_size = ftell(input) - 44;
    printf("File size: %ld\n", file_size);
    fseek(input, 44, SEEK_SET);
    long num_samples = file_size / sizeof(int16_t);
    int16_t *buffer_samples = malloc(file_size);
    blocks_read = fread(buffer_samples, sizeof(int16_t), num_samples, input);
    printf("Blocks read: %i\n", blocks_read);

    for (int i = 0; i < blocks_read; i++)
    {
        *(buffer_samples + i) = *(buffer_samples + i) * factor;
    }
    fseek(output, 0, SEEK_END);
    fwrite(buffer_samples, sizeof(int16_t), blocks_read, output);
    free(buffer_samples);
    fclose(input);
    fclose(output);

    return 0;
}
