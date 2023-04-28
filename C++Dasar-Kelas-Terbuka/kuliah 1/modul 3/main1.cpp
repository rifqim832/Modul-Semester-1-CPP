#include <iostream>
using namespace std;

int main(){
    int npm, nama, nilai;
    cout << "masukan NPM  : ";
    cin >> npm;
    cout << "masukan nama : ";
    cin >> nama;
    cout << "masukan nilai: ";
    cin >> nilai;

    if(nilai >= 80 && nilai <= 100){
        cout << "nilai anda: A, LULUS" <<endl;
    }
    else if(nilai >= 70 && nilai <= 79){
        cout << "nilai anda: B, LULUS" << endl;
    }
    else if(nilai >= 55 && nilai <= 69){
        cout << "nilai anda: C, anda mengulang materi" <<endl; 
    }
    else if(nilai >= 45 && nilai <= 54){
        cout << "nilai anda: D, anda mengulang materi" <<endl;
    }
    else if(nilai >= 0 && nilai <= 44){
        cout << "nilai anda: E, anda mengulang materi" << endl;
    }
    cout << "npm:" << npm <<endl

    return 0;
}