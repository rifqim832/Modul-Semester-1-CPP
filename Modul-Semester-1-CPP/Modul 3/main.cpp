#include <iostream>
using namespace std;

int main(){
    double beli, diskon, bayar;
    cout << "jumlah pembelian Rp: ";
    cin >> beli;

    if(beli >= 100000)
        diskon = 10000;
    else
        diskon = 0;
    
    bayar = beli-diskon;
    cout << "jumlah pembelian Rp: " << beli << endl;
    cout << "besar diskon     Rp: " << diskon << endl;
    cout << "total pembayaran Rp: " << bayar << endl;

    cin.get();
    return 0;

}