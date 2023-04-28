#include <iostream>
#include <string>
using namespace std;

struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main(){
    buah apel, jeruk;

    apel.warna = "merah";
    apel.berat = 250.50f;
    apel.harga = 30.000;
    apel.rasa = "manis";

    cout << "=====APEL=====" << endl;
    cout << "warna: " << apel.warna << endl;
    cout << "Berat: " << apel.berat << endl;
    cout << "Harga: " << apel.harga << endl;
    cout << "rasa: " << apel.rasa << endl;

    jeruk.warna = "merah";
    jeruk.berat = 250.50f;
    jeruk.harga = 30.000;
    jeruk.rasa = "manis";

    cout << "=====JERUK=====" << endl;
    cout << "warna: " << jeruk.warna << endl;
    cout << "Berat: " << jeruk.berat << endl;
    cout << "Harga: " << jeruk.harga << endl;
    cout << "rasa: " << jeruk.rasa << endl;

    cin.get();
    return 0;
}