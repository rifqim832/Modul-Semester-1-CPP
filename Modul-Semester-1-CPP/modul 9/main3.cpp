#include <iostream>
#include <string>
using namespace std;

struct human{
    string nama[50];
    string shift[20];
    string jam[20];
};

int main(){
    human p;
    int i, k;

    cout << "Masukan Jumlah Karyawan: ";
    cin >> k;

    for(i=0; i<k; i++){
        cout << "masukan nama: ";
        cin >> p.nama[i];
        cout << "Masukan shift: ";
        cin >> p.shift[i];
        cout << "Masukan jumlah kerja pr jam: ";
        cin >> p.jam[i];
    }

    
    cout << "No\tNama\tshift\tjam"<< endl;
    cout << "=============================" << endl;
        for(i=0; i<k; i++){
        cout << i << "\t" << p.nama[i] << "\t" << p.shift[i] << "\t" << p.jam[i] << endl;
    }

    

    cin.get();
    return 0;
}