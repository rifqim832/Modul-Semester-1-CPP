#include <iostream>
using namespace std;

int main(){
    int jumlah, i;
    string nama[50], nim[10], nilai[50];
    cout << "Program Data Mahsiswa" << endl;
    cout << "Masukan Jumlah Data Mahasiswa: ";
    cin >> jumlah;
    for(i = 1; i <= jumlah; i++){
        cout << "data" << i << endl;
        cout << "Nama : ";
        cin >> nama[i];
        cout << "NIM  : ";
        cin >> nim[i];
        cout << "NIlai: ";
        cin >> nilai[i];
    }
    cout << "\n \t \t Daftar Data Mahasiswa" << endl;
    cout << "No \t Nama \t NIM \t\t Nilai" << endl;
    for(i = 1; i <= jumlah; i++){
        cout << i << "\t" << nama[i] << "\t" << nim[i] << "\t" << nilai[i] << " " << endl;
    }
    return 0;
}