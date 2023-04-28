#include <iostream>
using namespace std;

int main(){
    int angka[3][5][3] = {{{2, 4, 6,},{3, 6, 9},{4, 8, 12},{5, 10, 15},{6, 12, 18}},{{7, 14, 21},{8, 16, 24},{9, 18, 27},{10, 20, 30},{11, 22, 33}}};
    for(int a = 0; a <= 1; a++){
        cout << a+1 << "\n";
        for(int b = 0; b <= 4; b++){
            for(int c = 0; c <= 2; c++){
                cout << angka[a][b][c] << "\t";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}