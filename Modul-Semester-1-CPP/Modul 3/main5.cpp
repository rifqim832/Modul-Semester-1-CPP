#include <iostream>
using namespace std;

int main(){
    char nama[30];
    int npm, uts, uas, tugas, na;
    cout << "masukan npm        : ";
    cin >> npm;
    cout << "masukan nama       : ";
    cin >> nama;
    cout << "masukan nilai uts  : ";
    cin >> uts;
    cout << "masukan nilai uas  : ";
    cin >> uas;
    cout << "masukan nilai tugas: ";
    cin >> tugas;

    na = uts * 30 / 100 + uas * 40 / 100 + tugas * 30 / 100;

    cout << "LAPORAN NILAI MAHASISWA" << endl;
    cout << "===========================================" << endl;
    cout << "NPM        : " << npm << endl;
    cout << "nama       : " << nama << endl;
    cout << "Nilai akhir: " << na << "   Nilai huruf: ";
    if(na >= 80 && na <=100){
        cout << "A" << endl;
    }
    else if(na >= 70 && na <= 79){
        cout << "B" << endl;
    }
    else if(na >= 55 && na <= 69){
        cout << "C" << endl;
    }
    else if(na >= 45 && na <= 54){
        cout << "D" << endl;
    }
    else if(na >= 0 && na <= 44){
        cout << "E" << endl;
    }

    return 0;
}