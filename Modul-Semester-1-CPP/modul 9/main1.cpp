#include <iostream>
using namespace std;

struct record{
    char nama[30];
};
int main(){
    record sample;
    cout << "masukan nama: ";
    cin >> sample.nama;

    cout << "nama anda: " << sample.nama << endl;
    return 0;
}