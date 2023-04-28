#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char nama[30], alamat[30], pekerjaan[20], hoby[10];
    cout << "Masukan Nama: ";
    cin.getline(nama, 30);
    cout << "Masukan Alamat: ";
    cin.getline(alamat, 30);
    cout << "Masukan Pekerjaan: ";
    cin.getline(pekerjaan, 20);
    cout << "Masukan Hoby: ";
    cin.getline(hoby, 10);

    cout << "=========BIODATA=========" << endl;
    strupr(nama);
    strrev(nama);
    cout << "Nama     : " << nama << endl;
    strupr(alamat);
    strrev(alamat);
    cout << "Alamat   : " << alamat << endl;
    strupr(pekerjaan);
    strrev(pekerjaan);
    cout << "Pekerjaan: " << pekerjaan << endl;
    strupr(hoby);
    strrev(hoby);
    cout << "Hoby     : " << hoby << endl;
    return 0;
}