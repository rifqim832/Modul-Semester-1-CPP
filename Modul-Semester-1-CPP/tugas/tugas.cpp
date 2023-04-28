#include <iostream>
#include <string.h>
#include <limits>

using namespace std;

// Struktur data untuk menyimpan data pelanggan
struct pelanggan {
string id;
string nama;
string alamat;
string no_telepon;
};

// Struktur data untuk menyimpan data supplier
struct supplier {
string id;
string nama;
string alamat;
string no_telepon;
};

// Struktur data untuk menyimpan data keuangan
struct keuangan {
string id;
string jenis; // pemasukan atau pengeluaran
string jumlah;
string deskripsi;
};

// Struktur data untuk menyimpan data sumber daya manusia
struct karyawan {
string id;
string nama;
string jabatan;
string no_telepon;
};

// Fungsi untuk menambah data pelanggan
void tambah_pelanggan() {
pelanggan p;
int m;
cout << "Masukan : ";
cin >> m;
for(int i=1; i<m; i++){
cout << "Masukkan ID pelanggan: ";
cin >> p.id[i];
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout << "Masukkan nama pelanggan: ";
cin >> p.nama[i];
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout << "Masukkan alamat pelanggan: ";
cin >> p.alamat[i];
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout << "Masukkan nomor telepon pelanggan: ";
cin >> p.no_telepon[i];
cin.ignore(numeric_limits<streamsize>::max(),'\n');
}
cout << "NO\tID\tNama\talamat\tNo Tlp" << endl;
cout << "============================" << endl;
for(int i=1; i<m; i++){
    cout << i << "\t" << p.id[i] << "\t" << p.nama[i] << "\t" << p.alamat[i] << "\t" << p.no_telepon[i] << endl;
}
// simpan data pelanggan ke dalam database
}

// Fungsi untuk menambah data supplier
void tambah_supplier() {
supplier s;
cout << "Masukkan ID supplier: ";
cin >> s.id;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout << "Masukkan nama supplier: ";
getline(cin,s.nama);
cout << "Masukkan alamat supplier: ";
getline(cin,s.alamat);
cout << "Masukkan nomor telepon supplier: ";
getline(cin,s.no_telepon);
// simpan data supplier ke dalam database
}

// Fungsi untuk menambah data keuangan
void tambah_keuangan() {
keuangan k;
cout << "Masukkan ID transaksi: ";
cin >> k.id;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout << "Masukkan jenis transaksi (pemasukan/pengeluaran): ";
getline(cin,k.jenis);
cout << "Masukkan jumlah transaksi: ";
cin >> k.jumlah;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout << "Masukkan deskripsi transaksi: ";
getline(cin,k.deskripsi);
// simpan data keuangan ke dalam database
}

// Fungsi untuk menambah data karyawan
void tambah_karyawan() {
karyawan k;
cout << "Masukkan ID karyawan: ";
cin >> k.id;
cin.ignore(numeric_limits<streamsize>::max(),'\n');
cout << "Masukkan nama karyawan: ";
getline(cin,k.nama);
cout << "Masukkan jabatan karyawan: ";
getline(cin,k.jabatan);
cout << "Masukkan nomor telepon karyawan: ";
getline(cin,k.no_telepon);
// simpan data karyawan ke dalam database
}

int main() {
int pilihan;
cout << "Pilih menu yang ingin Anda akses:" << endl;
cout << "1. Tambah data pelanggan" << endl;
cout << "2. Tambah data supplier" << endl;
cout << "3. Tambah data keuangan" << endl;
cout << "4. Tambah data karyawan" << endl;
cout << "Masukkan pilihan Anda: ";
cin >> pilihan;
cin.ignore(numeric_limits<streamsize>::max(),'\n');

switch (pilihan) {
case 1:
tambah_pelanggan();
break;
case 2:
tambah_supplier();
break;
case 3:
tambah_keuangan();
break;
case 4:
tambah_karyawan();
break;
default:
cout << "Pilihan tidak valid" << endl;
break;
}

return 0;
}
