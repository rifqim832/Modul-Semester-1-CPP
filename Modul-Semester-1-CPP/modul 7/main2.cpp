#include <iostream>
#include <string.h>

using namespace std;

int main(){
    char kata[20];
    int jumlah;

    cout << "masukan kalimat: ";
    cin.getline(kata, 20);

    jumlah = strlen(kata);
    cout << "jumlah karakter adalah: " << jumlah << endl;
    return 0;
}