#include <iostream>
using namespace std;

int main(){
    int tahun;

    cout << "masukan tahun: ";
    cin>> tahun;

if(tahun % 400 == 0){
    cout << tahun << " merupakan tahun kabisat" << endl; 
}
else if(tahun % 100 == 0){
    cout << tahun << " bukan tahun kabisat" << endl;
}
else if(tahun % 4 == 0){
    cout << tahun << " merupakan tahun kabisat" << endl;
}
else{
    cout << tahun << " bukan tahun kabisat" << endl;
}

    return 0;
}