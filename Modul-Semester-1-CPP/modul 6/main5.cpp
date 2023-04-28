#include <iostream>
using namespace std;

double persegiP(double p, double l){
    double luas_persegiP = p * l;
    return luas_persegiP;
}
double segitiga(double a, double t){
    double luas_segitiga = 0.5 * a * t;
    return luas_segitiga;
}
double phi = 3.14;
double lingkaran(double r){
    double luas_lingkaran = phi * (r * r);
    return luas_lingkaran;
}
int main(){
    double pilih, p, l, a, t, phi, r;
    cout << "===Program menghitung bangun datar===" << endl;
    cout << "1. Persegi Panjang" << endl;
    cout << "2. Segitiga" << endl;
    cout << "3. Lingkaran" << endl;
    cout << "Masukan pilhan: ";
    cin >> pilih;

    if(pilih == 1){
        cout << "\n 1. Persegi Panjang" << endl;
        cout << "Masukan panjang     : ";
        cin >> p;
        cout << "Masukan lebar       : ";
        cin >> l;
        int luas_persegiP = persegiP(p, l);
        cout << "Luas persegi panjang: ";
        cout << luas_persegiP;
    }else if(pilih == 2){
        cout << "\n 2. Segitiga" << endl;
        cout << "Masukan alas  : ";
        cin >> a;
        cout << "Masukan tinggi: ";
        cin >> t;
        int luas_segitiga = segitiga(a, t);
        cout << "Luas segitiga : ";
        cout << luas_segitiga;
    }else if(pilih == 3){
        cout << "\n 3. Lingkaran" << endl;
        cout << "Masukan jari-jari: ";
        cin >> r;
        int luas_lingkaran = lingkaran(r);
        cout << "luas lingkaran: ";
        cout << luas_lingkaran;
    }else{
        cout << "masukan 1, 2, 3" << endl;
    }
        
        
    return 0;
}