// Libraries
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Penjelasan Program: Memberikan nilai bilangan bulat untuk setiap alfabet yang lalu akan digunakan untuk akumulasi skor

// Program Utama
int main(void)
{
    const int jumlah_pemain = 2;
    string kalimat[jumlah_pemain]; // Array berukuran 2 untuk menampung 2 pemain
    // Meminta input kalimat dari pengguna
    for (int i = 0; i < jumlah_pemain; i++)
    {
        kalimat[i] = get_string("Kalimat (P%i): ", i+1);
    }

    // Array
    char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g',
                         'h', 'i', 'j', 'k', 'l', 'm', 'n',
                         'o', 'p', 'q', 'r', 's', 't', 'u',
                         'v', 'w', 'x', 'y', 'z'};

    int nilai_alphabet[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1,
                              8, 5, 1, 3, 1, 1, 3, 10, 1,
                              1, 1, 1, 4, 4, 8, 4, 10};

    // Tes 1: Memanggil nilai dari array
    //printf("Alphabet: %c\n", alphabet[7]);
    //printf("Nilai: %i\n", nilai_alphabet[7]);
    //(Berhasil)

    // Membuat variabel untuk menampung skor pemain
    int skor[jumlah_pemain];
    for (int i = 0; i < jumlah_pemain; i++)
    {
        skor[i] = 0;
    }

    // Membuat variabel untuk menampung panjang kalimat
    int panjang_kalimat[jumlah_pemain];

    // Mengisi tiap variabel dengan panjang kalimat
    for(int i = 0; i < jumlah_pemain; i++)
    {
        panjang_kalimat[i] = strlen(kalimat[i]);
    }

    // Tes 2: Mencoba memanggil panjang kalimat
    //for (int i = 0; i < jumlah_pemain; i++)
    //{
    //    printf("Panjang Kalimat %i: %i\n", i+1, panjang_kalimat[i]);
    //}
    // (Berhasil)

    // Mengubah tiap karakter pada kalimat menjadi lowercase
    for(int counter_kalimat = 0; counter_kalimat < jumlah_pemain; counter_kalimat++)
    {
        for(int i = 0; i < panjang_kalimat[counter_kalimat]; i++)
        {
            if(isalpha(kalimat[counter_kalimat][i]))
            {
                kalimat[counter_kalimat][i] = tolower(kalimat[counter_kalimat][i]);
                skor[counter_kalimat] += nilai_alphabet[kalimat[counter_kalimat][i] - 'a'];
            }
        }
    }
    // Tes 3: Pengecekan terhadap pengubahan huruf menjadi lowercase
    // printf("Kalimat 1: %s\n", kalimat[0]);
    // printf("Kalimat 2: %s\n", kalimat[1]);
    // (Berhasil)

    // Tes 4: Pengecekan terhadap hasil skor
    printf("Skor 1: %i\n", skor[0]);
    printf("Skor 2: %i\n", skor[1]);
}

