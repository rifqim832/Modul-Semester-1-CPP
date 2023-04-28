#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "masukan angka =";
    cin >> a;

    // if else
    if (a == 5){
        cout << "benar" << endl;
    }else if (a == 3){
        cout << "benar" << endl;
    }else if (a == 1){
        cout << "benar" << endl;
    }else {
        cout << "bukan 5, 3, 1" << endl;
    }
    cin.get();
    return 0;
}