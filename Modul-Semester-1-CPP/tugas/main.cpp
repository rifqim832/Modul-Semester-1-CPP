#include <iostream>
using namespace std;

int main(){
    int x = 0;
    while(x < 10){
        x++;
        if(x == 2){
            continue;
        }
        cout<< x << endl;
        

    }
    return 0;
}