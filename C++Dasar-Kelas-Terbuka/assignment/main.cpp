#include <iostream>
using namespace std;

int main(){
    int a = 10;
    cout << "nilai awal a adalah: " << a << endl;
    
    a += 3;
    cout << "ditambah 3  menjadi: " << a << endl;
    a -= 3;
    cout << "dikurang 3  menjadi: " << a << endl;
    a /= 3;
    cout << "dibagi 3  menjadi: " << a << endl;
    a *= 3;
    cout << "dikali 3  menjadi: " << a << endl;
    a %= 3;
    cout << "dimodulus 3  menjadi: " << a << endl;

    cin.get();
    return 0;
}