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
//void
void tampilkan_penjumlahan(double b1, double b2){
    cout << "hasil: ";
    cout << hitung_penjumlahan(b1, b2) << endl;
}
void tampilkan_pengurangan(double b1, double b2){
    cout << "hasil: ";
    cout << hitung_pengurangan(b1, b2) << endl;
}
void tampilkan_perkalian(double b1, double b2){
    cout << "hasil: ";
    cout << hitung_perkalian(b1, b2) << endl;
}
void tampilkan_pembagian(double b1, double b2){
    cout << "hasil: ";
    cout << hitung_pembagian(b1, b2) << endl;
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
        tampilkan_penjumlahan(b1, b2);
    }else if(aritmatika == '-'){
        tampilkan_pengurangan(b1, b2);
    }else if(aritmatika == '*'){
        tampilkan_perkalian(b1, b2);
    }else if(aritmatika == '/'){
        tampilkan_pembagian(b1, b2);
    }
    
    cin.get();
    return 0;
}