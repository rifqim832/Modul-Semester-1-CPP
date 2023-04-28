#include <iostream>
using namespace std;

int main(){
    int i, j, matriks1[10][10], matriks2[10][10], hasil[10][10];
    cout << "masukan element matriks A: \n";
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> matriks1[i][j];
        }
    }
    cout << "masukan element matriks B: \n";
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> matriks2[i][j];
        }
    }
    system("cls");
    cout << " element matriks A: \n";
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << matriks1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << " element matriks B: \n";
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cout << matriks2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "hasil penjumlahan matriks: \n";
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "hasil penguragan matriks: \n";
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "hasil perkalian matriks: \n";
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            hasil[i][j] = matriks1[i][j] * matriks2[i][j];
            cout << hasil[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}