#include <iostream>
using namespace std;

int main(){
    int data[10];
    int i, j, tmp;

    cout << "mengurutkan angka" << endl;
    for(i = 0; i < 10; i++){
        cout << "masukan angka " <<(i +1) << " :";
        cin >> data[i];
    }
    cout << "data sebelum di urutkan: ";
    for(i = 0; i < 10; i++){
        cout << data[i] << " ";
    }
    cout << endl;
    for(i = 0; i < 9; i++){
        for(j = i+1; j < 10; j++){
            if(data[i] > data[j]){
                tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }
    cout << "data setelah di urutkan: ";
    for(i = 0; i < 10; i++){
        cout << data[i] << " ";
    }
    cout << endl;
    return 0;
}