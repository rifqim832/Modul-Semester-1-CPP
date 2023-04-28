#include <iostream>
using namespace std;

int main(){
    int a;
    int l = 1;
    cout << "Masukan Looping: ";
    cin >> a;

    do
    {
        cout << l << endl;
        l++;
    } while (l <= a);
    

    return 0;
}