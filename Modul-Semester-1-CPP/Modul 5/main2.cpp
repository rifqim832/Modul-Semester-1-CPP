#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Masukan panjang pola: ";
    cin >> n;

    // pola 1
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // pola 2
    for(int i = 1; i <= n; i++){
        for(int j = n; j >= i; j--){
            cout << "*";
        }
        cout <<endl;
    }
    

cin.get();
return 0;
}