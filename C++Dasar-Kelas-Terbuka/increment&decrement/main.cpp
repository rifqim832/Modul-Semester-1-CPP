#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 5;

    //post increment
    cout << a << endl; 
    cout << a++ << endl;
    cout << a << endl << endl;

    cout << b << endl; 
    cout << b-- << endl;
    cout << b << endl << endl;

    //pre increment
    cout << a << endl; 
    cout << ++a << endl;
    cout << a << endl << endl;

    cout << b << endl; 
    cout << --b << endl;
    cout << b << endl;
    cin.get();
    return 0;
}