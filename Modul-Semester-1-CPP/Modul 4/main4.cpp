#include <iostream>
using namespace std;

int main(){
    char a;
    float n1, n2, h;
    cout << "MENU PILIHAN PROSES" << endl;
    cout << "===================" << endl;
    cout << "[A]. Penjumlahan" << endl;
    cout << "[B]. Pengurangan" << endl;
    cout << "[C]. Perkalian" << endl;
    cout << "[D]. Pembagian" << endl;
    cout << "===================" << endl;
    cout << "Pilihan Anda A/B/C/D : ";
    cin >> a;

    switch (a)
    {
    case 'A':
        cout << endl;
        cout << "Penjumlahan" << endl;
        cout << "Masukan NIlai 1: ";
        cin >> n1;
        cout << "Masukan Nilai 2: ";
        cin >> n2;
        h = n1 + n2;
        cout << "Hasil          : " << h << endl;
        break;
    case 'B':
        cout << endl;
        cout << "Pengurangan" << endl;
        cout << "Masukan Nilai 1: ";
        cin >> n1;
        cout << "Masukan Nilai 2: ";
        cin >> n2;
        h = n1 - n2;
        cout << "Hasil          : " << h << endl;
        break;
    case 'C':
        cout << endl;
        cout << "Perkalian" << endl;
        cout << "Masukan Nilai 1: ";
        cin >> n1;
        cout << "Masukan Nilai 2: ";
        cin >> n2;
        h = n1 * n2;
        cout << "Hasil          : " << h << endl;
        break;
    case 'D':
        cout << endl;
        cout << "Pembagian" << endl;
        cout << "Masukan Nilai 1: ";
        cin >> n1;
        cout << "Masukan Nilai 2: ";
        cin >> n2;
        h = n1 / n2;
        cout << "Hasil          : " << h << endl;
        break;
    
    
    default:
        break;
    }

    return 0;
}