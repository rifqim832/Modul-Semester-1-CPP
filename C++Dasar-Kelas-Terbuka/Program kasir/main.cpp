#include <iostream>
using namespace std;

int main (){

    char nama[30],pembeli[30];
    int harga, jumlah, total, jumtotal, jumbayar, kembalian, potongan;
    string input, kode;

    awal:
    cout << "    TOKO HIMATIF UNIROW        " << endl;
    cout <<"===========================================" << endl;
    cout << "Nama pembeli           :";
    cin >> pembeli;
    cout << "001 - Laptop Asus RAM 4GB  - RP.5000.000" << endl;
    cout << "002 - Mouse Wearles        - RP.150.000" << endl;
    cout << "002 - Mouse Wearles        - RP.150.000" << endl;
    cout << "003 - Mikrotik RB941       - RP.600.000" << endl;


    cout << endl;
    cout << endl;
    cout << "Barang yang dipilih         :";
    cin >> kode;
    cout << " Jumlah beli     :";
    cin >> jumlah;


    if (kode == "001"){
        cout << " Laptop Asus RAM 4GB";
        harga = 5000000;
    } else if (kode == "002"){
        cout << "Mouse Wearles";
        harga = 150000;
    } else if (kode == "003"){
        cout << "Mikrotik RB941";
        harga = 600000;
} else {
    cout << "Barang yang dipilih tidak tersedia";
}


cout << endl;
cout << "=============================================" << endl;
cout << "Struk  pembayaran" << endl;
cout << "=============================================" << endl;
cout << "Nama pembeli       :" << pembeli << endl;
cout << "Harga              :" << harga << endl;
cout << "Jumlah             :" << jumlah << endl;


total = harga * jumlah;

cout << "Total              :" << total << endl;

cout << endl;

if (total == 100000 || total < 500000){
    potongan = 0.05 * total;
} else if (total > 500000){
    potongan = 0.10 * total;
} else {
    potongan = 0;
}


cout <<"Potongan                    :" << potongan << endl;
cout <<"============================================" << endl;

jumtotal = total - potongan;

cout << "Total keseluruhan   :" << jumtotal << endl;
cout << "Uang bayar          :";
cin >> jumbayar;

kembalian = jumbayar - jumtotal;
cout << " Uang kembalian  : " << kembalian << endl;
cout <<"============================================" << endl;

cout << " Mau input lagi [Y/N] : ";
cin >> input;

if (input == "y" || input == "Y"){
    goto awal;
} else {
    return 0;
}

    cin.get();
    return 0;

}