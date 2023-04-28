#include <iostream>
#include <string.h>
using namespace std;

int main()
{

  char huruf[100], hasil[100];

  cout << "Masukkan sebuah string   : ";
  cin.getline(huruf, 100);
  cout << endl;

cout << "==============================================" << endl;
  strlwr(huruf);
  cout << "String dengan huruf kecil: " << huruf << endl;

  strlwr(huruf);
  strcpy(hasil,huruf);
  strrev(hasil);
  cout << "\nhasil reverse huruf      : " << hasil << endl;

  return 0;
}