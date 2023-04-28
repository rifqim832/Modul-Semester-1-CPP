#include <iostream>
using namespace std;

//fungsi
double hitung_penjumlahan(double b1, double b2){
    double penjumlahan =  b1 + b2;
    return penjumlahan;
}
double hitung_pengurangan(double b1, double b2){
    double pengurangan =  b1 - b2;
    return pengurangan;
}
double hitung_perkalian(double b1, double b2){
    double perkalian =  b1 * b2;
    return perkalian;
}
double hitung_pembagian(double b1, double b2){
    double pembagian =  b1 / b2;
    return pembagian;
}
int main(){
    double b1, b2;
    char aritmatika;
    cout << "masukan bilangan ke 1: ";
    cin >> b1;
    cout << "pilih operator <+, -, *, />: ";
    cin >> aritmatika;
    cout << "masukan bilangan ke 2: ";
    cin >> b2;

    if(aritmatika == '+'){
        double penjumlahan = hitung_penjumlahan(b1, b2);
        cout << "hasil: ";
        cout << penjumlahan;
    }else if(aritmatika == '-'){
        double pengurangan = hitung_pengurangan(b1, b2);
        cout << "hasil: ";
        cout << pengurangan;
    }else if(aritmatika == '*'){
        double perkalian = hitung_perkalian(b1, b2);
        cout << "hasil: ";
        cout << perkalian;
    }else if(aritmatika == '/'){
        double pembagian = hitung_pembagian(b1, b2);
        cout << "hasil: ";
        cout << pembagian;
    }
    
    cin.get();
    return 0;
}