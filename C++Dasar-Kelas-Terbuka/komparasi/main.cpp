#include <iostream>
using namespace std;

int main(){
    int a = 2;
    int b = 3;

    bool hasil1, hasil2;

    // komparasi relaion expression

    //sebanding ==
    hasil1 = (a == b);

    //tidak sebanding !=
    hasil2 = (a != b);

    // kurang darisam dengan <=
    hasil1 = (a <= b);

    //lebih dari sama dengan
    hasil2 =(a >= b);
    
    cout << hasil1 << endl;
    cout << hasil2 << endl;
    
    cin.get();
    return 0;
}