#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "Menampilkan deret bilangan dari angka 1 sampai 10 : ";
    cin >> i;
    do
    {
        cout << i;
        i++;
    } while (i <= 10);
    cout << endl;
    
    

    cin.get();
    return 0;
}