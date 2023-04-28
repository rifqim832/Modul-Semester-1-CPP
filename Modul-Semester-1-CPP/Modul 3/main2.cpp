#include <iostream>
using namespace std;

int main(){
    string nilai;
    cout << "masukan nilai: ";
    cin >> nilai;

    if(nilai == "A"){
    cout << "A = 80 - 100, LULUS" << endl;
    }
    else if(nilai == "B"){
        cout << "B = 70 - 79, LULUS" << endl;
    }
    else if(nilai == "C"){
        cout << "C = 55 - 69, LULUS" << endl;
    }
    else if(nilai == "D"){
        cout << "D = 45 - 54, Anda Mengulang Materi" << endl;
    }
    else if(nilai == "E"){
        cout << "E = 0 - 44, Anda Mengulang Materi" << endl;
    }

return 0;
}