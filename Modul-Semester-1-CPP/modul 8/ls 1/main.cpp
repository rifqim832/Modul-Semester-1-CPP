#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char kalimat[80];
    int jumlah_karakter, kapital, kecil;
    int indeks;
    char karakter;

    cout << "Masukan kalimat: ";
    cin.getline(kalimat,80);
    cout << endl;

    jumlah_karakter = kapital = kecil = 0;
    indeks = 0;
    
    while (kalimat[indeks]){
        karakter = kalimat[indeks];
        jumlah_karakter++;
        if(karakter >= 'A' && karakter <= 'Z')
        kapital++;
        else if(karakter >= 'a' && karakter <= 'z')
        kecil++;
        indeks++;
    }
    
    cout << "jumlah karakter: " << jumlah_karakter << endl;
    cout << "Jumlah huruf besar: " << kapital << endl;
    cout << "Jumlah huruf kescil: " << kecil << endl;
    return 0;
}