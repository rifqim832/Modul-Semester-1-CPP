#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "masukan kelipatan: ";
    cin >> n;
    for(int i = 0; i <= 20; i = i + n){
        cout << i << " ";
    }

    cin.get();
    return 0;
}