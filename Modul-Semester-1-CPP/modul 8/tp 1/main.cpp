#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char kata[30];
    int jumlah;

    cout << "masukan string: ";
    cin.getline(kata, 30);

    jumlah = strlen(kata);
    cout << "panjang string adalah: " << jumlah << endl;
    return 0;
}