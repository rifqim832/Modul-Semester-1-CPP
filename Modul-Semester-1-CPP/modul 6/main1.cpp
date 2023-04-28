#include <iostream>
using namespace std;

double phi = 3.14;
double hitung_keliling(double r){
    double keliling = phi * (r * r);
    return keliling;
}
void tampilkan_keliling(double r){
    cout << "keliling lingkaran dengan jari-jari: ";
    cout << hitung_keliling(r) << endl;
}
int main(){
    int r;
    cout << "masukan jari-jari: ";
    cin >> r;

    tampilkan_keliling(r);

    return 0;
}

