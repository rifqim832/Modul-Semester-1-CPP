#include <iostream>
using namespace std;

int x = 10;
int ambil_global(){
    return x;
}
int x_local(){
    int x = 5;
    return x;
}
int main(){
    cout << "1.variabel global: " << x << endl;
    int x = 8;
    cout << "2.variabel local: " << x << endl;
    cout << "3.variabel ambil_global: " << ambil_global << endl;
    cout << "4.variabel local main: " << x << endl;
    cout << "5.variabel x_local: " << x_local << endl;
    cout << "6.variabel local main: " << x << endl;

    cin.get();
    return 0;
}