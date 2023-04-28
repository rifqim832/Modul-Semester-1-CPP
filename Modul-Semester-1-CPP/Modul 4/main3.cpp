#include <iostream>
using namespace std;

int main(){
    char nama;

    cout << "Masukan nama: ";
    cin >> nama;

    switch (nama)
    {
    case 'a':
    case 'A':
        cout << endl;
        cout << "anton" << endl; 
        break;
    case 'b':
    case 'B':
        cout << endl;
        cout << "budi" << endl;
        break;
    case 'c':
    case 'C':
        cout << endl;
        cout << "chintya" << endl;
        break;
    
    default:
        cout << "tidak ada data" << endl;
        break;
    }
}