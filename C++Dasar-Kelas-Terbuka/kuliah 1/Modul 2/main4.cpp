#include <iostream>
using namespace std;

int main(){
    cout << "## Program C++ Menghitung Luas Segitiga ##" << endl;
    float a, t, l;

    cout << " Input alas segitiga: ";
    cin >> a;
    cout << " Input tinggi segitiga: ";
    cin >> t;
    cout << endl;

    l = 0.5 * a * t;
    cout << "Luas segitiga = " << l << endl;

    return 0;
}