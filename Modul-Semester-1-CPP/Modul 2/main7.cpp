#include <iostream>

using namespace std;

main(){
    float r;
    float t;
    float v;

    cout << " Program Menghitung Volume Tabung \n";
    cout << " Dengan Program C++ \n";

    cout << " Masukan nilai jari-jari : ";
    cin >> r;

    cout << " Masukan Nilai Tinggi : ";
    cin >> t;

    v = ( 3.14 * r * r * t ) ;
    cout << "\n Volume Tabung Adalah : "<< v << endl;

    return 0;

}