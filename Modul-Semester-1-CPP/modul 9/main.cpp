#include <iostream>
#include <string>
using namespace std;

struct kabisat{
    int tanggal;
    int bulan;
    int tahun;
};

int main(){
    kabisat kbst;
    cout << "Masukan tanggal bulan tahun (dd/mm/yyyy): ";
    cin >> kbst.tanggal, cin >> kbst.bulan, cin >> kbst.tahun;

    if(kbst.tahun % 400 == 0){
    cout << kbst.tanggal << "/" << kbst.bulan << "/" << kbst.tahun << " merupakan tahun kabisat" << endl; 
    }
    else if(kbst.tahun % 100 == 0){
    cout << kbst.tanggal << "/" << kbst.bulan << "/" << kbst.tahun << " bukan tahun kabisat" << endl; 
    }
    else if(kbst.tahun % 4 == 0){
    cout << kbst.tanggal << "/" << kbst.bulan << "/" << kbst.tahun << " merupakan tahun kabisat" << endl; 
    }
    else{
    cout << kbst.tanggal << "/" << kbst.bulan << "/" << kbst.tahun << " bukan tahun kabisat" << endl; 
    }
    cin.get();
    return 0;
}