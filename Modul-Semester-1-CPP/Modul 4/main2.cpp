#include <iostream>
using namespace std;

int main(){
    int data;
    float l, r, a, t, p, le;
    cout << " 1. lingkaran" << endl;
    cout << " 2. jajar genjang" << endl;
    cout << " 3. persegi panjang" << endl;
    cout << "Pilih bagun datar: ";
    cin >> data;

    switch (data)
    {
    case 1:
        cout << "masukan jari-jari: ";
        cin >> r;
        l = 3.14 * r * r;
        cout << "Luas lingkaran: " << l << endl;
        break;
    case 2:
        cout << "Masukan alas  : ";
        cin >> a;
        cout << "Masukan tinggi: ";
        cin >> t;
        l = a * t;
        cout << "Luas jajar genjang: " << l << endl;
        break;
    case 3:
        cout << "Masukan panjang: ";
        cin >> p;
        cout << "Masukan lebar  : ";
        cin >> le;
        l = p * le;
        cout << "Luas persegi panjang: " << l << endl;
        break;
    
    default:
        break;
    }

    return 0;
}