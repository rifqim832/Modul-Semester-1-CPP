#include <iostream>
using namespace std;

double phi = 3.14;
double hitung_keliling(double r){
    double keliling = phi * (r * r);
    return keliling;
}
int main(){
    int r;
    cout << "masukan jari-jari: ";
    cin >> r;

    double keliling = hitung_keliling(r);
    cout << "keliling lingkaran dengan jari-jari: ";
    cout << keliling;

    cin.get();
    return 0;
}