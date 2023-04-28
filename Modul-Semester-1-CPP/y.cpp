#include <iostream>
#include <string.h>

using namespace std;

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 200
// Struktur data untuk menyimpan data karyawan
struct karyawan
{
    string nama[MAX_TITLE_LENGTH];
    string alamat[MAX_TITLE_LENGTH];
    string no_telepon[MAX_TITLE_LENGTH];
    float jam[MAX_TITLE_LENGTH];
};

void program(){
	float gaji;
    karyawan p;
    string nm;
    char is_continue;
    int pilihan, x = 1, harga = 10000;

    while (1)
    {
        cout << "Program Administrasi Kantor" << endl;
        cout << "===========================" << endl;
        cout << "Pilih menu yang ingin Anda akses:" << endl;
        cout << "1. Tambah data karyawan" << endl;
        cout << "2. Lihat data karyawan" << endl;
        cout << "3. Lihat Gaji karyawan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;
        if (pilihan == 4)
        {
            break;
        }
        if (pilihan == 1)
        {
            
        }
        else if (pilihan == 2)
        {
            cout << "======================================================" << endl;
            cout << "NO \tNama \t\talamat \t\tno telephone" << endl;
            cout << "======================================================" << endl;
            for (int i = 1; i < x; i++)
            {
                cout << i << "\t" << p.nama[i] << "\t\t" << p.alamat[i] << "\t\t" << p.no_telepon[i] << endl;
            }
        }
        else if (pilihan == 3)
        {
            cout << "======================================================" << endl;
            cout << "NO \tNama \t\talamat \t\tno telephone" << endl;
            cout << "======================================================" << endl;
            for (int i = 1; i < x; i++)
            {
                cout << i << "\t" << p.nama[i] << "\t\t" << p.alamat[i] << "\t\t" << p.no_telepon[i] << endl;
            }

            for (int i = 1; i < x; i++)
            {
                cout << "Pilih nama: ";
                cin >> nm;
                cout << "jumlah jam kerja per hari: ";
                cin >> p.jam[x];
                if (p.nama[i] == nm)
                {
                    gaji = p.jam[x] * harga;
                    cout << "=====================================================================" << endl;
                    cout << "NO \tNama \t\tHarga per jam \t\tjam \t\tGaji" << endl;
                    cout << "=====================================================================" << endl;
                    cout << i << "\t" << p.nama[i] << "\t\tRp." << harga << "\t\t" << p.jam[x] << "jam" << "\t\tRp." << gaji << endl;
                    break;
                }
            }
        }
    }

}
void opsi1(){#include <iostream>
#include <string.h>

using namespace std;

#define MAX_BOOKS 100
#define MAX_TITLE_LENGTH 200
// Struktur data untuk menyimpan data karyawan
struct karyawan
{
    string nama[MAX_TITLE_LENGTH];
    string alamat[MAX_TITLE_LENGTH];
    string no_telepon[MAX_TITLE_LENGTH];
    float jam[MAX_TITLE_LENGTH];
};

int main()
{
    float gaji;
    karyawan p;
    string nm;
    char is_continue;
    int pilihan, x = 1, harga = 10000;

    while (1)
    {
        cout << "Program Administrasi Kantor" << endl;
        cout << "===========================" << endl;
        cout << "Pilih menu yang ingin Anda akses:" << endl;
        cout << "1. Tambah data karyawan" << endl;
        cout << "2. Lihat data karyawan" << endl;
        cout << "3. Lihat Gaji karyawan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;
        if (pilihan == 4)
        {
            break;
        }
        if (pilihan == 1)
        {
            cout << "Masukan nama: ";
            cin >> p.nama[x];
            cout << "Masukan alamat: ";
            cin >> p.alamat[x];
            cout << "Masukan no tlp: ";
            cin >> p.no_telepon[x];
            x++;
            cout << "Lanjutkan?(y/t)";
        }
        else if (pilihan == 2)
        {
            cout << "======================================================" << endl;
            cout << "NO \tNama \t\talamat \t\tno telephone" << endl;
            cout << "======================================================" << endl;
            for (int i = 1; i < x; i++)
            {
                cout << i << "\t" << p.nama[i] << "\t\t" << p.alamat[i] << "\t\t" << p.no_telepon[i] << endl;
            }
        }
        else if (pilihan == 3)
        {
            cout << "======================================================" << endl;
            cout << "NO \tNama \t\talamat \t\tno telephone" << endl;
            cout << "======================================================" << endl;
            for (int i = 1; i < x; i++)
            {
                cout << i << "\t" << p.nama[i] << "\t\t" << p.alamat[i] << "\t\t" << p.no_telepon[i] << endl;
            }

            for (int i = 1; i < x; i++)
            {
                cout << "Pilih nama: ";
                cin >> nm;
                cout << "jumlah jam kerja per hari: ";
                cin >> p.jam[x];
                if (p.nama[i] == nm)
                {
                    gaji = p.jam[x] * harga;
                    cout << "=====================================================================" << endl;
                    cout << "NO \tNama \t\tHarga per jam \t\tjam \t\tGaji" << endl;
                    cout << "=====================================================================" << endl;
                    cout << i << "\t" << p.nama[i] << "\t\tRp." << harga << "\t\t" << p.jam[x] << "jam" << "\t\tRp." << gaji << endl;
                    break;
                }
            }
        }
    }

    return 0;
}

	
}

int main()
{
    
    return 0;
}
