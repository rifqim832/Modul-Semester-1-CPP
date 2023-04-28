#include <iostream>

using namespace std;

main(){
    float r;
    float t;
    float v;
    float jari;

    cout << " Program Menghitung Volume Kerucut \n";
    cout << " Dengan Program C++ \n";

    cout << " Masukan nilai jari-jari : ";
    cin >> r;

    cout << " Masukan Nilai Tinggi : ";
    cin >> t;
    jari = r*r;

    v = ( 3.14 * jari * t ) /3;
    cout << "\n Volume Kerucut Adalah : ";
    cout << v;
    cout << " cm3. ";

    return 0;

}