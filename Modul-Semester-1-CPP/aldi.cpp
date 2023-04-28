#include <iostream>

using namespace std;

int main()
{
    int jenisMTR, no_hp;
    string nama, alamat, hari;
    int pil, angka, total_bayar, brp_Hari;
    char konfirmasi, Tipe_P;

awal:

    cout << "============================" << endl;
    cout << "||        RENTAL MOTOR    ||" << endl;
    cout << "============================" << endl;
    cout << endl;

    cout << "   DAFTAR PILIHAN PROGRAM   " << endl;
    cout << "============================" << endl;
    cout << "|| [1]. Sewa Motor         |" << endl;
    cout << "|| [2]. Cek Unit           |" << endl;
    cout << "|| [3]. Unit Yang Di Rental|" << endl;
    cout << "============================" << endl;
    cout << endl;

    cout << "Masukan Nomor Menu: ";
    cin >> pil;
    cout << endl;

    switch (pil)
    {
    case 1:
        cout << "--------------------" << endl;
        cout << " 1. Scopy  : Rp. 200000" << endl;
        cout << " 2. Beat   : Rp. 150000" << endl;
        cout << " 3. Satria : Rp. 250000" << endl;
        cout << "--------------------" << endl;
        cout << endl;
        cout << "Masukan Nama            : ";
        cin >> nama;
        cout << "Masukan Alamat          : ";
        cin >> alamat;
        cout << "Masukan No Hp           : ";
        cin >> no_hp;
        cout << "Masukan Lama sewa       : ";
        cin >> brp_Hari;
        cout << "Pilih jenis Motor (1-3) : ";
        cin >> jenisMTR;
        cout << "===========================================" << endl;

        if (jenisMTR == 1)
        {
            total_bayar = brp_Hari * 200000;
        }
        else if (jenisMTR == 2)
        {
            total_bayar = brp_Hari * 150000;
        }
        else if (jenisMTR == 3)
        {
            total_bayar = brp_Hari * 250000;
        }
        else if (jenisMTR > 3)
        {
            goto awal;
        }
        cout << "Data Penyewa" << endl;
        cout << "Nama Penyewa : " << nama << endl;
        cout << "Alamat       : " << alamat << endl;
        cout << "No Hp        : " << no_hp << endl;
        cout << "Jenis Motor  : " << jenisMTR << endl;
        cout << "Hari Sewa    : " << brp_Hari << " Hari" << endl;
        cout << "Total Bayar  : Rp. " << total_bayar << endl;
        cout << endl;

        cout << endl;
        cout << "Ingin Iput Lagi [Y/T]:";
        cin >> konfirmasi;
        if (konfirmasi == 'Y' || konfirmasi == 'y')
        {
            goto awal;
        }
        else
        {
            exit(0);
        }
        return 0;

        break;

    case 2:
        int Motor_Terpakai, Motor_Kosong;

        cout << "--------------------" << endl;
        cout << "Cek Sisa Unit Motor" << endl;
        cout << endl;
        cout << "--------------------" << endl;
        cout << "Keterangan:" << endl;
        cout << "Jumlah motor 20 unit" << endl;
        cout << "--------------------" << endl;
        cout << "Masukan Jumlah motor yang telah disewa: ";
        cin >> Motor_Terpakai;
        if (Motor_Terpakai <= 20)
        {
            Motor_Kosong = 20 - Motor_Terpakai;
            cout << " Sisa Unit  : " << Motor_Kosong;
            cout << endl;
        }
        else if (Motor_Terpakai > 20)
        {
            cout << " maaf jumlah yang anda masukkan tidak dapat di input" << endl;
        }

        cout << endl;
        cout << "Ingin Iput Lagi [Y/T/]:";
        cin >> konfirmasi;
        if (konfirmasi == 'Y' || konfirmasi == 'y')
        {
            goto awal;
        }
        else
        {
            exit(0);
        }

    case 3:
        int Honda[1], Yamaha[1], Suzuki[1], total[1];

        cout << "============================" << endl;
        cout << "Unit Yang Telah Di Rental";
        cout << endl;
        cout << "============================" << endl;

        for (angka = 0; angka < 1; angka++)
        {
            cout << "Masukan Hari: ";
            cin >> hari;
            cout << "Merk Honda : ";
            cin >> Honda[angka];
            cout << "Merk Yamaha : ";
            cin >> Yamaha[angka];
            cout << "Merk Suzuki : ";
            cin >> Suzuki[angka];
            cout << endl;
        }

        for (angka = 0; angka < 1; angka++)

            total[angka] = Honda[angka] + Yamaha[angka] + Suzuki[angka];

        cout << "=======================================================" << endl;
        cout << "Laporan Unit Yang Telah Di Rental";
        cout << endl;
        cout << "======================================================= " << endl;
        cout << "|  Hari  | Honda | Yamaha | Suzuki |Total Penjualan |" << endl;
        cout << "-------------------------------------------------------" << endl;

        for (angka = 0; angka < 1; angka++)
        {

            cout << "  " << hari;
            cout << "    " << Honda[angka] << "   ";
            cout << "    " << Yamaha[angka] << "     ";
            cout << "    " << Suzuki[angka] << "      ";
            cout << "    " << total[angka] << "     " << endl;

            cout << "-------------------------------------------------------" << endl;
        }

        cout << "Ingin Iput Lagi [Y/T]:";
        cin >> konfirmasi;
        if (konfirmasi == 'Y' || konfirmasi == 'y')
        {
            goto awal;
        }
        else
        {
            exit(0);
        }

        break;
    default:
        goto awal;
    }
}
