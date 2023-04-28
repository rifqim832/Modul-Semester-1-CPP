#include <iostream>

using namespace std;
#define MAX_TITLE_LENGHT 200

struct karyawan // Struktur untuk menyimpan data karyawan
{
    string nama[MAX_TITLE_LENGHT];
    string alamat[MAX_TITLE_LENGHT];
    string no_telepon[MAX_TITLE_LENGHT];
    float jam;
};

int main()
{
    float gaji;
    karyawan p;
    char lanjut;
    int pilihan, x = 1, harga = 10000;

    while (1)
    {
    awal:
        system("cls");
        cout << endl;
        cout << "Program Administrasi Kantor" << endl;
        cout << "===========================" << endl;
        cout << "Pilih menu yang ingin Anda akses:" << endl;
        cout << "1. Tambah data karyawan" << endl;
        cout << "2. Menampilkan data karyawan" << endl;
        cout << "3. Hitung Gaji karyawan" << endl;
        cout << "4. Keluar" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;
        if (pilihan == 4)
        {
            break;
        }
        if (pilihan == 1) // opsi 1 menambah data karyawan
        {
        opsi1:
            cout << "Masukan nama: ";
            cin >> p.nama[x];
            cout << "Masukan alamat: ";
            cin >> p.alamat[x];
            cout << "Masukan no tlp: ";
            cin >> p.no_telepon[x];
            x++;
            cout << "Lanjutkan?(Y/T): ";
            cin >> lanjut;
            if (lanjut == 'Y' || lanjut == 'y')
            {
                goto opsi1;
            }
            else if (lanjut == 'T' || lanjut == 't')
            {
                goto awal;
            }
        }

        else if (pilihan == 2) // opsi 2 menampilkan data karyawan
        {
        opsi2:
            cout << "======================================================" << endl;
            cout << "NO \tNama \t\talamat \t\tno telephone" << endl;
            cout << "======================================================" << endl;
            for (int i = 1; i < x; i++)
            {
                cout << i << "\t" << p.nama[i] << "\t\t" << p.alamat[i] << "\t\t" << p.no_telepon[i] << endl;
            }
            cout << "Lanjutkan?(Y/T): ";
            cin >> lanjut;
            if (lanjut == 'Y' || lanjut == 'y')
            {
                goto opsi2;
            }
            else if (lanjut == 'T' || lanjut == 't')
            {
                goto awal;
            }
        }

        else if (pilihan == 3) // opsi 3 menghitung gaji karyawan
        {
        opsi3:
            cout << "======================================================" << endl;
            cout << "NO \tNama \t\talamat \t\tno telephone" << endl;
            cout << "======================================================" << endl;
            for (int i = 1; i < x; i++)
            {
                cout << i << "\t" << p.nama[i] << "\t\t" << p.alamat[i] << "\t\t" << p.no_telepon[i] << endl;
            }
            for (int i = 1; i < x; i++)
            {
                cout << "Pilih nomor: ";
                cin >> i;
                cout << "jumlah jam kerja per hari: ";
                cin >> p.jam;
                if (i == i)
                {
                    gaji = p.jam * harga;
                    cout << "==========================================================================" << endl;
                    cout << "NO \tNama \t\tHarga per jam \t\tjam \t\tGaji" << endl;
                    cout << "==========================================================================" << endl;
                    cout << i << "\t" << p.nama[i] << "\t\tRp." << harga << "\t\t" << p.jam << "jam" << "\t\tRp." << gaji << endl;
                    break;
                }
            }
        }
        cout << "Lanjutkan?(Y/T): ";
        cin >> lanjut;
        if (lanjut == 'Y' || lanjut == 'y')
        {
            goto opsi3;
        }
        else if (lanjut == 'T' || lanjut == 't')
        {
            goto awal;
        }
    }

return 0;
}
