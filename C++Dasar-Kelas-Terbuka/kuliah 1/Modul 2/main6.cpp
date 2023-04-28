#include <iostream>

using namespace std;

int main(){
    float v,s,t;

    cout << " PROGRAM C++ MENGHITUNG WAKTU TEMPUH " << endl;
    cout << "  ================================== " << endl;
    cout << " Masukan Jarak (km)         : ";
    cin >> s;

    cout << " Masukan Kecepatan (Km/Jam) : ";
    cin >> v;
    t = s/v;

    cout << " Waktu Tempuh (Jam)         : "<< t << endl;

    return 0;
}