#include <iostream>
using namespace std;

double hitung_luas(double p, double l){
    double luas = p * l;
    return luas;
}
double keliling(double p, double l){
    double keliling = 2 * (p + l);
    return keliling;
}
void tampilkan_luas(double p, double l){
    cout << "menggunakan void \n";
    cout << "luasnya adalah: ";
    cout << hitung_luas(p, l) << endl;
}
void tampilkan_keliling(double p, double l){
    cout << "menggunakan void \n";
    cout << "keliling adalah: ";
    cout << keliling (p, l) << endl;
}
int main(){
    double panjang, lebar;
    cout << "masukan panjang: ";
    cin >> panjang;
    cout << "masukan luas: ";
    cin >> lebar;

    tampilkan_luas(panjang, lebar);
    tampilkan_keliling(panjang, lebar);

    cin.get();
    return 0;
}