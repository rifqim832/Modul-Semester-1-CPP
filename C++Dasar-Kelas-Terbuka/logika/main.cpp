#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 2;

    bool hasil1;

    //operator logika : not, and, or

    //not
    hasil1 = !(a == 3);

    //and && kudua nilai true untuk menghasilkan true
    hasil1 = (a == 3) && (b == 2); //true and true
    cout << hasil1 << endl;
    hasil1 = (a == 4) && (b == 2); //false and true
    cout << hasil1 << endl;
    hasil1 = (a == 3) and (b == 3); //true and false
    cout << hasil1 << endl;
    hasil1 = (a == 4) and (b == 3); //false and false
    cout << hasil1 << endl;

    //0r salah satu nilai true maka hasil true
    hasil1 = (a == 3) || (b == 2); //true and true
    cout << hasil1 << endl;
    hasil1 = (a == 4) || (b == 2); //false and true
    cout << hasil1 << endl;
    hasil1 = (a == 3) or (b == 3); //true and false
    cout << hasil1 << endl;
    hasil1 = (a == 4) or (b == 3); //false and false
    cout << hasil1 << endl;
    return 0;
}