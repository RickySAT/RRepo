// Libraries
#include <cs50.h>
#include <stdio.h>
#include <string.h>
// Prototype
bool vote(string pilihan);
void pemenang (void);

#define MAX 9
// Struct Def
typedef struct
{
    string nama;
    int jumlah_suara;
} kandidat;

int jumlah_kandidat;
kandidat kandidats[MAX];

// Program Utama
int main(int argc, string argv[])
{
    jumlah_kandidat = argc - 1;
    // Array kandidat
    // Memastikan penggunaan
    if (argc < 2)
    {
        printf("Usage: ./plural <Nama Kandidat>");
        return 1;
    }

    // Memasukkan data nama kandidat ke dalam tipe kandidat
    for (int i = 0; i < argc - 1; i++)
    {
        kandidats[i].jumlah_suara = 0;
        kandidats[i].nama = argv[i + 1];
        printf("%s\n", kandidats[i].nama); // Hapus Nanti
    }


    // Mendapatkan input berupa jumlah pemilih
    int nsuara = get_int("Berapa jumlah pemilih? ");

    // Melakukan loop untuk mendapatkan masing-masing suara
    for (int i = 0; i < nsuara; i++)
    {
        string pilihan = get_string("Siapa kandidat pilihanmu? ");

        if(!vote(pilihan))
        {
            printf("Invalid! Nama kandidat %s tidak sesuai dengan kandidat tersedia\n", pilihan);
        }
        else
        {
            printf("Nama kandidat %s valid!\n", pilihan);
        }
    }
    for (int i = 0; i < jumlah_kandidat; i++)
    {
        printf("Skor kandidat %s adalah %i\n", kandidats[i].nama, kandidats[i].jumlah_suara);
    }

    pemenang();
}

bool vote(string pilihan)
{
        for (int i = 0; i < jumlah_kandidat; i++) // Cek apakah input sesuai
        {
            if(strcmp(pilihan, kandidats[i].nama) == 0)
            {
                kandidats[i].jumlah_suara += 1;
                return true;
            }
        }
        return false;
    }

void pemenang (void)
{
    for (int i = 0; i < jumlah_kandidat - 1; i++ )
    {
        for (int j = 0; j < jumlah_kandidat - 1; j++)
        {
            if (kandidats[j].jumlah_suara > kandidats[j+1].jumlah_suara)
            {
                kandidat sementara = kandidats[j + 1];
                kandidats[j+1] = kandidats[j];
                kandidats[j] = sementara;
            }
        }
    }
    printf("Pemenang: \n");
    for (int i = 0; i < jumlah_kandidat; i++)
    {
        if(kandidats[jumlah_kandidat - 1].jumlah_suara == kandidats[i].jumlah_suara)
        {
            printf("%s\n", kandidats[i].nama);
        }
    }
    return;
}
